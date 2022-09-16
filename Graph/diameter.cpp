#include<iostream>
#include<vector>
#include<stack>
#include<queue>


using namespace std;
const int N= 1e3+10;

vector<int>adj[N];
int vistied[N]={};
int height[N];
int depth[N];


void add_edges(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(int v,int par=-1)
{
    for(int child:adj[v])
    {
        if(child==par) continue;
        depth[child]=depth[v]+1;
        dfs(child,v);
    }
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
    int max_depth=-1;
    int max_n_depth;

    dfs(1);
    for(int i=1;i<=vertices;i++)
    {
        if(depth[i]>max_depth)
        {
        max_depth=depth[i];
        max_n_depth=i;
        }
        depth[i]=0;
    }
    max_depth=-1;
    dfs(max_n_depth);
    for(int i=1;i<=vertices;i++)
    {
        if(depth[i]>max_depth)
        {
            max_depth=depth[i];

        }

    }
    cout<<max_depth<<endl;





}