#include<iostream>
#include<vector>
using namespace std;




// int  main()

// {
//     vector<int>nums={1,2,1,1,2};
// int n=nums.size();

// for(int i=0;i<n;i++)
// {
//     int freq=0;
//     for(int j=0;j<n;j++)
//     {
//         if(nums[i]==nums[j])
//         {
//             freq++;
//         }
//     }
//     if(freq>n/2)
//     {
//         cout<<"majority element : "<<nums[i]<<endl;
//         break;
//     }
//     return 0;
// }
// }


// using moore's algorithm

int main()
{
    vector<int>nums={3,2,2,3,3};
    int freq=0;
    int ans=0;
    int n=nums.size();
    
    for(int i=0;i<n;i++)
    {
        if(freq==0)
        {
            ans=nums[i];
        }
        if(ans==nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
        cout<<ans<<endl;
    return 0;
}