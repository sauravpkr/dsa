#include<iostream>
#include<set>
#include<vector>
#include<unordered_map>

using namespace std;

int removeDuplicates(vector<int>&nums)
{
    /*
    set<int> setv;
    for(auto x: nums)
    {
        setv.insert(x);
    }
    
    copy(setv.begin(),setv.end(),nums.begin());
    return setv.size();
    */
   set<int>setv;
   auto firstit=nums.begin();
   auto secondit=nums.begin();
   int count=0;
   for(auto &element:nums)
   {
        setv.insert(element);
        if(setv.find(element)==setv.end())
        {
            cout<<element<<endl;
            element=*secondit;
            firstit++;
            secondit++;
            count++;
            // cout<<*firstit<<*secondit<<endl;

        }
        else
        {
        secondit++;
        // cout<<*secondit<<endl;

        }

   }
   return setv.size();

}
void displayVector(vector<int>vect)
{
    for(auto x:vect)
    cout<<x<<endl;
}

int main()
{
    vector<int> vec{1,3,3,4,4,5,5,58,9,7,7,4,3};
    cout<<removeDuplicates(vec)<<endl;
    displayVector(vec);
    


}