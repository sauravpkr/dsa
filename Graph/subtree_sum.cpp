#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>

using namespace std;

const int N= 1e3+10;

unordered_map<int,vector<int>> adj;
//vector<pair<int,int>>wtgraph[N];
unordered_map<int,bool>visited;
unordered_map<int,int>Sum;

void add_edges(unordered_map<int,vector<int>> &adj,int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfs(unordered_map<int,vector<int>> &adj,int V)
{
    visited[V]=true;
    // cout<<V<<endl;
    for(auto child: adj[V])
    {
        if(visited[child]) continue;
        dfs(adj,child);
        Sum[V]=Sum[V]+Sum[child];
        
    }
        Sum[V]=Sum[V]+V;

}
void display(unordered_map<string,vector<string>>adj)
{
    for(auto x:adj)
    {
        cout<<x.first<<endl;
    }
}

int main()
{
    // representation of graph using adjancy list
    int vertices=15;
    add_edges(adj,1,2);
    add_edges(adj,1,8);
    add_edges(adj,1,12);
    add_edges(adj,2,3);
    add_edges(adj,2,4);
    add_edges(adj,4,5);
    add_edges(adj,4,6);
    add_edges(adj,6,7);
    add_edges(adj,8,9);
    add_edges(adj,9,10);
    add_edges(adj,9,11);
    add_edges(adj,12,14);
    add_edges(adj,14,13);
    add_edges(adj,14,15);
    // display(graph2);
    dfs(adj,1);
    cout<<"computed"<<endl;

 



   

}