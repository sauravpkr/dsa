#include<iostream>
#include<vector>
#include<stack>
#include<queue>


using namespace std;
const int N= 1e3+10;

vector<int>adj[N];
int vistied[N];
int height[N];
int depth[N];
int parent[N];


void add_edges(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int> path(int node)
{
    vector<int> vect;
    while(node!=-1)
    {
        vect.push_back(parent[node]);
        node=parent[node];
        
    }
    return vect;
    
}

void dfs(vector<int> adj[],int v,int par=-1)
{
    parent[v]=par;
    for(int child:adj[v])
    {
        if(child == par) continue;
        dfs(adj,child,v);


    }
}

int lca(vector<int>path_x,vector<int>path_y)
{
    // reverse(path_x.begin(),path_x.end());
    // reverse(path_y.begin(),path_y.end());
    for(int i=0;i<path_x.size();i++)
    {
        if(path_x[i]==path_y[i])
        return path_x[i];

    }
    return -1;
}


int main()
{
    int vertices=13;
    add_edges(adj,1,2);
    add_edges(adj,1,3);
    add_edges(adj,1,13);
    add_edges(adj,2,5);
    add_edges(adj,5,6);
    add_edges(adj,5,7);
    add_edges(adj,5,8);
    add_edges(adj,8,12);
    add_edges(adj,3,4);
    add_edges(adj,4,9);
    add_edges(adj,4,10);
    add_edges(adj,10,11);
    dfs(adj, 1);
    vector<int> path_x= path(7);
    vector<int> path_y= path(2);
    cout<<lca(path_x,path_y)<<endl;
    
    
    

    





}