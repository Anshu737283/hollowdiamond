#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter a number";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(;j<=(2*n)-1;j++)
        {
            if(j>=(2*n)-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(;j<=(2*n)-1;j++)
        {
            if(j>=(2*n)-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
    
}