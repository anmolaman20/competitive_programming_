#include <bits/stdc++.h>
using namespace std;
void addedge(vector<int>graph[],int u,int v)
{
    graph[u].emplace_back(v);
    graph[v].emplace_back(u);
}
void Bfs(vector<int>graph[],int start)
{
    vector<bool>visited(graph->size(),false);
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty())
    {
        int v = q.front();
        cout<<v<<" ";
        q.pop();
        for(auto i=graph[v].begin();i!=graph[v].end();i++)
        {
            if(!visited[*i])
            {
                q.push(*i);
                visited[*i]=true;
            }
        }
    }
}
int main()
{
    int v=7;
    vector<int>graph[v];
    addedge(graph,0,1);
    addedge(graph,0,3);
    addedge(graph,1,2);
    addedge(graph,2,6);
    addedge(graph,3,4);
    addedge(graph,4,5);
    addedge(graph,2,6);
    cout<<"Bfs Traversal of graph is : "<<" ";
    Bfs(graph,0);
return 0;
}