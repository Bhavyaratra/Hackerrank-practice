#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,count=0;
        cin>>n>>k;
        signed int a[1000];

        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]<=0)
            {
                count++;
            }
        }

        if(count<k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }


}