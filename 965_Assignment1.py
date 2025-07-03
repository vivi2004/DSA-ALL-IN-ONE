import networkx as nx
import matplotlib.pyplot as plt
import random


def random_spanning_tree(n):
    """Generate a random spanning tree for n nodes using the Prufer sequence method."""
    if n == 0:
        return nx.Graph()
    # Generate a random Prufer sequence of length n-2
    prufer = [random.randint(0, n-1) for _ in range(n-2)]
    # Initialize vertex degree
    degree = [1] * n
    for node in prufer:
        degree[node] += 1
    # Build the tree
    tree = nx.Graph()
    for i in range(n):
        tree.add_node(i)
    for node in prufer:
        for i in range(n):
            if degree[i] == 1:  # found a leaf
                tree.add_edge(i, node)
                degree[i] -= 1
                degree[node] -= 1
                break
    # Connect the last two nodes
    u, v = [i for i in range(n) if degree[i] == 1]
    tree.add_edge(u, v)
    return tree


def create_connected_random_graph(n, extra_edge_prob=0.01):
    """
    Create a random, unweighted, undirected, simple, connected graph with n nodes.
    Start with a random spanning tree to ensure connectivity,
    then add random extra edges with probability extra_edge_prob.
    """
    # Use our custom random spanning tree function
    G = random_spanning_tree(n)

    # Attempt to add extra edges randomly
    for i in range(n):
        for j in range(i+1, n):
            if G.has_edge(i, j):
                continue
            if random.random() < extra_edge_prob:
                G.add_edge(i, j)
    return G

# ----- Centrality Calculations & Plotting (same as before) -----


def compute_centralities(G):
    n = G.number_of_nodes()
    norm_degree = {node: G.degree(node) / (n - 1) for node in G.nodes()}
    closeness = nx.closeness_centrality(G)
    betweenness = nx.betweenness_centrality(G, normalized=True)
    return norm_degree, closeness, betweenness


def compute_combined_centrality(G, norm_degree, closeness, betweenness):
    combined = {}
    for node in G.nodes():
        combined[node] = norm_degree[node] + \
            closeness[node] + betweenness[node]
    avg_combined = sum(combined.values()) / len(combined)
    fine_tune = {}
    for node in G.nodes():
        high_count = sum(1 for neighbor in G.neighbors(
            node) if combined[neighbor] > avg_combined)
        fine_tune[node] = high_count / \
            G.degree(node) if G.degree(node) > 0 else 0
    for node in G.nodes():
        combined[node] += 0.5 * fine_tune[node]
    return combined


def plot_graphs(G, combined, top_nodes):
    plt.figure(figsize=(12, 6))
    pos = nx.spring_layout(G, seed=42)
    plt.subplot(1, 2, 1)
    nx.draw_networkx(G, pos=pos, node_size=20,
                     with_labels=False, edge_color='gray')
    plt.title("Input Graph")
    plt.subplot(1, 2, 2)
    node_colors = []
    color_map = ['red', 'green', 'blue', 'orange', 'purple',
                 'cyan', 'magenta', 'yellow', 'brown', 'black']
    for node in G.nodes():
        if node in top_nodes:
            idx = top_nodes.index(node)
            node_colors.append(color_map[idx % len(color_map)])
        else:
            node_colors.append('lightblue')
    nx.draw_networkx(G, pos=pos, node_color=node_colors,
                     node_size=20, with_labels=False, edge_color='gray')
    plt.title("Output Graph with Top 10 Nodes Highlighted")
    plt.tight_layout()
    plt.show()


def main():
    random.seed(42)
    n = 1000
    G = create_connected_random_graph(n)
    norm_degree, closeness, betweenness = compute_centralities(G)
    combined = compute_combined_centrality(
        G, norm_degree, closeness, betweenness)
    top_10 = sorted(combined, key=combined.get, reverse=True)[:10]
    print("Top 10 Nodes by Combined Centrality Score:")
    for i, node in enumerate(top_10, 1):
        print(f"{i}. Node {node}: Score = {combined[node]:.4f}")
    plot_graphs(G, combined, top_10)
    writeup = """
    Write-Up for Graph Centrality Analysis:
    
    - The graph was created by first generating a random spanning tree using the Prufer sequence method,
      then adding extra random edges to enrich the graph.
    - Computed three centrality measures:
         • Normalized Degree Centrality.
         • Closeness Centrality.
         • Betweenness Centrality.
    - Combined the measures using a weighted sum with an extra fine-tuning factor that rewards nodes connected to highly central nodes.
    - Highlighted the top 10 nodes in the visualization.
    """
    with open("writeup.txt", "w") as f:
        f.write(writeup.strip())


if __name__ == "__main__":
    main()
