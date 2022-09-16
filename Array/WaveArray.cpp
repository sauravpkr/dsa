#include<iostream>
#include<vector>



using namespace std;
vector<int> wave(vector<int>&nums)
{
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i+=2)
    {
        nums[i]=min(nums[i],nums[i+1]);
        nums[i+1]=max(nums[i],nums[i+1]);
    }
    return nums;
}

int main()
{
    vector<int>vec{1,2,3,4,5,6,7,8};
    for(auto x: wave(vec))
    cout<<x<<endl;
}