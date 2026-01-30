#include<iostream>
#include<vector>
using namespace std;



vector<int>merged_array(vector<int>& nums1,vector<int>& nums2)
{
    vector<int>merged;
    int i=0,j=0;

    while(i<nums1.size()&&j<nums2.size())
    {
        if(nums1[i]<=nums2[j])
        {
            merged.push_back(nums1[i]);
            i++;
        }
        else
        {
            merged.push_back(nums2[j]);
            j++;
        }

    }
    return merged;
}

int main()
{
    vector<int>nums1={1,2,5,6};
    vector<int>nums2={2,3,7,8};

    vector<int>result=merged_array(nums1,nums2);

    for(int x:result)
    {
        cout<<x<<" "<<endl;
    }
    return 0;
}