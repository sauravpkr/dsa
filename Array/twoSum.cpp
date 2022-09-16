/*
Given an array of integer return indices of the two numbers such that add upto a specific target
*/

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;
vector<int>twoSum(vector<int>&nums,int target)
{
    unordered_map<int,int> m;
    for(int i=0;i!=nums.size();i++)
    {
        if(m.find(target-nums[i])==m.end())
            m[nums[i]]=i;
        else
        return {m[target-nums[i]],i};
    }
    return {-1,-1};

}
int main()
{
    vector<int>v {1,4,5,6,7};
    vector<int> result;
    result=twoSum(v,13);
    for(auto x:result)
    cout<<x<<endl;
    

}