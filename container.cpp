#include<iostream>
#include<vector>
using namespace std;

 int max_area(vector<int> &height)
{
    int lp=0;
    int rp=height.size()-1;
    int ans=0;
    int w;
    int ht;
    int area;
    while(lp<rp)
    {
        w=rp-lp;
        ht=min(height[lp],height[rp]);
        area=w*ht;
        ans=max(ans,area);
        if(height[lp]<height[rp])
        {
            lp++;
        }
        else
        {
            rp--;
        }
    }
    return ans;
}

int main()
{
    int max_water;
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    vector<int>height(n);
    cout<<"enter the heights of container\n";
    for (int i=0;i<n;i++)
    {
    cin>>height[i];
    }

    max_water =max_area(height);
    cout<<"max water=: "<<max_water<<endl;
    return 0;
}