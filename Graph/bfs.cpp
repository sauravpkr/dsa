#include<iostream>
#include<vector>
#include<stack>
#include<queue>


using namespace std;
const int N= 1e3+10;

vector<int>adj[N];
int vistied[N]={};

void add_edges(vector<int> adj[],int v1,int v2)
{
    adj[v1].push_back(v2);
    adj[v2].push_back(v1);
}

void bfs(vector<int>adj[],int V)
{
    queue<int> q;
    q.push(V);
    vistied[V]=1;
    while (!q.empty())      
    {
        int node= q.front();
        q.pop();
        cout<<node<<endl;
        for(auto child: adj[node])
        {
            if(vistied[child]) continue;
            q.push(child);
            vistied[child]=1;
        }
    }
    
    
}

int main()
{
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
    bfs(adj,1);

}