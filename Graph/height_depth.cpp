#include<iostream>
#include<vector>
#include<stack>
#include<queue>


using namespace std;
const int N= 1e3+10;

vector<int>adj[N];
//vector<pair<int,int>>wtgraph[N];
int vistied[N]={};
int height[N];
int depth[N];


void add_edges(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(vector<int>adj[],int V)
{
    stack<int> st;
    st.push(V);
    depth[V]=0;
    while(!st.empty())
    {
        V= st.top();
        st.pop();
        if(vistied[V]) continue;
        vistied[V]=1;
        cout<<V<<endl;

           
        for(auto x: adj[V])
        {
            if(vistied[x]) continue;
            st.push(x);
            
            depth[x]=depth[V]+1;
            // height[V]=max(height[x],height[V])+1;
        }
    }
    
   

}
void height_dfs(vector<int>adj[],int V)
{
    stack<int> st;
    st.push(V);
    while(!st.empty())
    {
        V= st.top();
        if(vistied[V]) continue;
        if(adj[st.top()].size()==1)
            {
                vistied[V]=1;
                st.pop();

            }
        cout<<V<<endl;
        // int max=0;
        for(auto x: adj[V])
        {
            if(vistied[x]) continue;
            st.push(x);
            depth[x]=depth[V]+1;
            // height[V]=max(height[x],height[V]);
            


        }
        
    }

}

/*
This code section used the stack function. WHen coming up it will calculate the height of the node.
*/

void height_of_the_node(vector<int>adj[],int V,int parent=-1)
{
    vistied[V]=1;
    
    for(auto child: adj[V])
    {
        if(child==parent) continue;
        height_of_the_node(adj,child,V);
        height[V]=max(height[child]+1,height[V]);


    }
}


int main()
{
    int vertex=15;

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
    // dfs(adj,1);
    height_of_the_node(adj,1);
    for(int i=1;i<=vertex;i++)
    {
        cout<<"height of "<<i<<"node is "<<height[i]<<endl;
        // cout<<"depth of "<<i<<"node is "<<depth[i]<<endl;
    }


}

