#include<iostream>
#include<vector>
#include<stack>
#include<queue>


using namespace std;
const int N= 1e3+10;

vector<int>adj[N];


class Node
{
    private:
    char node_id_char;
    int node_id_int;
    
    public:
        Node()
        {
            node_id_char='\0';
            node_id_int=0;
        }
        Node (string id)
        {
            set_node(id);
        }
    void set_node(string id)
        {
            node_id_char= id[0];
            for(int i=0;i<id.size();i++)
            {
                if(id[i]>='0' and id[i]<=9)
                {
                    node_id_int=node_id_int*10+int(id[i]);
                }
            }
        }
    string get_node()
    {
        string temp_node_id="";
        temp_node_id= temp_node_id+node_id_char+ to_string(node_id_int);
        return temp_node_id;

    }
    bool is_valid(pair<char,int> cordinate)
    {
        if((cordinate.first>='a' && cordinate.first<='h') && cordinate.second>=0)
        return true;
        else return false;
    }

    string operator+ (pair<int,int> cordinate)
    {
        char temp_char_id= node_id_char+cordinate.first;
        int temp_int_id= node_id_int+cordinate.second;
        if(is_valid(make_pair(temp_char_id,temp_int_id)))
        {
            node_id_char=temp_char_id;
            node_id_int=temp_int_id;
            return node_id_char+to_string(node_id_int);
        }
        return {};
    }

};


int main()
{
    Node x;
    x.set_node("a1");
    Node y(x+make_pair(1,0));
    // y= x+ make_pair(1,0);
    cout<<y.get_node()<<endl;
    string result= x+ make_pair(-1,0);
    cout<<result<<endl;

}