#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int PivotIndex(vector<int>&nums)
{
    int LeftSum=0;
    int RightSum=0;
    RightSum=accumulate(nums.begin(),nums.end(),RightSum);

    for(int i=0;i<nums.size();i++)
    {
        RightSum= RightSum-nums[i];
        if(LeftSum==RightSum)
            return i;
        LeftSum= LeftSum+nums[i];

    }
    return -1;
}

int main()
{
    vector<int> vec{1,2,3,4,6,8,2};
    cout<<PivotIndex(vec);


}