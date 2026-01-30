#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=8;
    int arr[7]={3,4,5,4,1,7,8};
    int curr_sum=0;
    int max_sum=INT_MIN;
    for (int i=1;i<=n;i++)
    {
        curr_sum=curr_sum+arr[i];
        max_sum=max(curr_sum,max_sum);
        if(curr_sum<0)
        {
            curr_sum=0;
        }
    }
        cout<<"maximum subarray sum is: "<<max_sum<<endl;

    return 0;
}


//      for (int st=0;st<n;st++)
//      {
//         for(int end=0;end<n;end++)
//         {
//             for(int i=st;i<=end;i++)
//             {
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<" "<<endl;
//      }
//      return 0;
// }


