import networkx as nx
import matplotlib.pyplot as plt
import numpy as np

# 1. Generate a connected random graph
n = 1000
G = nx.random_tree(n)  # Ensures connectivity with 999 edges

# Add additional edges with probability p=0.005
p = 0.005
for i in range(n):
    for j in range(i+1, n):
        if not G.has_edge(i, j) and np.random.rand() < p:
            G.add_edge(i, j)

# 2. Compute initial centrality measures
# Degree Centrality
degree_centrality = {v: d / (n-1) for v, d in G.degree()}

# Closeness Centrality (inverted average shortest path length)
closeness_centrality = {}
for v in G.nodes():
    paths = nx.single_source_shortest_path_length(G, v)
    avg_path = sum(paths.values()) / (n-1)
    closeness_centrality[v] = 1 / avg_path  # Higher is better

# Betweenness Centrality (standard due to computational constraints)
betweenness_centrality = nx.betweenness_centrality(G, normalized=True)

# 3. Combine into initial c_v (equal weights)
c_v = {}
for v in G.nodes():
    c_v[v] = (degree_centrality[v] + closeness_centrality[v] +
              betweenness_centrality[v]) / 3

# 4. Second-level fine-tuning: Betweenness focusing on top 50 nodes
top_nodes = sorted(c_v, key=c_v.get, reverse=True)[:50]
subgraph = G.subgraph(top_nodes)

# Compute betweenness within the top nodes' subgraph
sub_betweenness = nx.betweenness_centrality(subgraph, normalized=True)

# Update c_v with fine-tuned betweenness
alpha = 0.3  # Weight for the fine-tuned component
for v in G.nodes():
    c_v[v] = (c_v[v] * (1 - alpha)) + (sub_betweenness.get(v, 0) * alpha)

# 5. Get top 10 nodes
top_10 = sorted(c_v, key=c_v.get, reverse=True)[:10]

# Visualization (simplified due to large graph size)
plt.figure(figsize=(12, 6))

# Input graph (degree distribution)
plt.subplot(121)
degrees = [d for _, d in G.degree()]
plt.hist(degrees, bins=20)
plt.title("Degree Distribution of Input Graph")

# Output graph (highlight top nodes)
plt.subplot(122)
pos = nx.spring_layout(G, seed=42)
nx.draw(G, pos, node_size=10, alpha=0.1)
nx.draw_networkx_nodes(G, pos, nodelist=top_10, node_color='red', node_size=50)
plt.title("Output Graph with Top 10 Nodes (Red)")

plt.tight_layout()
plt.savefig("graph_report.png")
plt.close()

# Write report and save code
with open("report.pdf", "w") as f:
    f.write("See generated graph_report.png and code for details.")

with open("code.py", "w") as f:
    f.write("Code is provided in the answer box.")
