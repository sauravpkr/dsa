#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<set>


using namespace std;
const int N= 1e3+10;

vector<pair<int,int>>adj[N];
vector<int> distance_from_root(INT_MAX,N);

int dikshtra(vector<int> adj[],int V)
{
    set<pair<int,int>> st;
    st.insert(make_pair(0,1));
    while(!st.empty())
    {
        pair<int,int> node_it = *st.begin();
        int distance= node_it.first;
        int node= node_it.second;
        for(auto child: adj[node])
        {
            if(distance+ )
        }

    }
}


