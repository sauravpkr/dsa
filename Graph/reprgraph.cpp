#include<iostream>
#include<vector>

using namespace std;

const int N= 1e3+10;

vector<int>graph2[N];
//vector<pair<int,int>>wtgraph[N];
int vistied[N]={};

void add_edges(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfs(vector<int> adj[],int V)
{
    cout<<V<<endl;
    vistied[V]=1;
    for(auto x: adj[V])
    {
        cout<<"parent "<<V<<"child "<<x<<endl;
        if(vistied[x]) continue;
        dfs(adj,x);

    }
    

    
}
int main()
{
    // representation of graph using adjancy list
    int vertices=5;
    add_edges(graph2,0,1);
    add_edges(graph2,0,4);
    add_edges(graph2,1,2);
    add_edges(graph2,1,3);
    add_edges(graph2,1,4);
    add_edges(graph2,2,3);
    add_edges(graph2,3,4);
    dfs(graph2,vertices-1);



   

}