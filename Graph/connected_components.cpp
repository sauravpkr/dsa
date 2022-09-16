#include<iostream>
#include<vector>


using namespace std;
const int N= 1e3+10;

vector<int>graph2[N];
//vector<pair<int,int>>wtgraph[N];
int vistied[N]={};
vector<vector<int>> cc;
vector<int>current_cc;

void add_edges(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfs(vector<int> adj[],int V)
{
    cout<<V<<endl;
    vistied[V]=1;
    current_cc.push_back(V);
    for(auto x: adj[V])
    {
        cout<<"parent "<<V<<"child "<<x<<endl;
        if(vistied[x]) continue;
        dfs(adj,x);

    }   
}
bool isCycle(vector<int> adj[],int V,int parent)
{
    bool isLoopExist=false;
    for(auto x:adj[V])
    {
        if(x==parent && vistied[x] ) continue;
        if(vistied[x])
        return true;
        isLoopExist|= isCycle(adj,x,V);
    }
    return isLoopExist;

}


int main()
{
    int vertex=8;
    int adges=5;
    int count=0;
    add_edges(graph2,1,2);
    add_edges(graph2,2,3);
    add_edges(graph2,2,4);
    add_edges(graph2,3,5);
    add_edges(graph2,6,7);
    for(int i=1;i<=vertex;i++)
    {
        if(vistied[i]) continue;
        current_cc.clear();
        dfs(graph2,i);
        cc.push_back(current_cc);
        count++;

    }
    cout<<"connected COmponent "<< cc.size()<<endl;
    for(auto comp:cc)
    {
        for (int x:comp)
        {
            cout<<x<<" ";
        }
        cout<<endl;

    }
    // for(int i=1;i<=vertex;i++)
    // {
    //     isCycle()
    // }

}