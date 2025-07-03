#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<string>s;
    s.push("vivek");
    s.push("Kumar");
    s.push("Purbey");
    cout<<"Top elements is "<<s.top()<<endl;
    s.pop();
    cout<<"top elements is" <<s.top()<<endl;
     cout<<"isElement is empty:" <<s.empty()<<endl;
     queue<string>q;
     q.push("tyuis");
     q.push("tyiows");
     q.push("thies");
     cout<<"Top elements in queue"<<s.top()<<endl;
     s.pop();
     cout<<"Top elements in queue"<<s.top()<<endl;
     
}

