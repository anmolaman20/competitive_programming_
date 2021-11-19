#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int>graph[],int u,int v)
{
    graph[u].emplace_back(v);
    graph[v].emplace_back(u);
}
void dfs(vector<int>graph[],int start)
{
    vector<bool>visited(graph->size(),false);
    stack<int>st;
    st.push(start);
    visited[start]=true;
    while(!st.empty())
    {
        int v = st.top();
        cout<<v<<" ";
        st.pop();
    }

}
int main()
{
    int v = 6;
   vector<int>graph[v];
   addEdge(graph,1,2);
   addEdge(graph,2,4);
   addEdge(graph,1,3);
   addEdge(graph,3,4);
   addEdge(graph,4,5);
   addEdge(graph,5,6);
   int start =1;
   dfs(graph,start);
return 0;
}