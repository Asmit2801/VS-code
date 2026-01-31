#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n\n";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           cout<<j<<" ";   // for space 
        }
        cout<<endl;
    }
    return 0;
    
}




int main()
{
    int n;
    cout<<"enter the value of n\n";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           cout<<"*"<<" ";   // for space 
        }
        cout<<endl;
    }
    return 0;
    
}


int main()
{
    int n;
    int num=1;
    cout<<"enter the value of n\n";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           cout<<num<<" ";   // for space 
           num++;
        }
        cout<<endl;
    }
    return 0;
    
}


int main()
{
    int n;
    cout<<" enter the value of n\n";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}





int main()
{
    int n;
    int num=1;
    cout<<" enter the value of n\n";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num;
        }
        cout<<endl;
        num++;
    }
    return 0;
}




int main()
{
    int n;
    int num=1;
    cout<<" enter the value of n\n";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
        num++;
    }
    return 0;
}


int main()
{
    int n;
    int num=1;
    cout<<" enter the value of n\n";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int j=i;j>0;j--)
        {
            cout<<j ;
        }
        cout<<endl;
    }
    return 0;
}


int main()
{
    int n;
    int num=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {                                            /
        for(int j=1;j<=i;j++)                                  
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}           
output
1
23
456
78910

