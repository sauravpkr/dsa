#include<iostream>
#include<vector>
#include<list>

using namespace std;

void rotate(vector<int>& nums, int k)
{
    /*
    for(int i=0;i<k;i++)
    {
        int lastElement= nums.back();
        for(int j=0;j<k;j++)
        {
            nums[nums.size()+j-1]=nums[nums.size()+j-2];

        }
        nums[0]=lastElement;
    }
    */
   reverse(nums.begin(),nums.begin()+k);
   reverse(nums.begin()+k,nums.end());
   reverse(nums.begin(),nums.end());
}
void rightRotate(vector<int>& nums, int k)
{
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}
void displayVector(vector<int>vect)
{
    for(auto x:vect)
    cout<<x<<endl;
}

int main()
{
    vector<int>vec {1,2,3,4,5,6,7};
    rightRotate(vec,3);
    displayVector(vec);
    

}