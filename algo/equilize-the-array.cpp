#include<iostream>
#include<vector>


using namespace std;


int main()
{
    int n;
    cin>>n;
    int mx=0,sum=0,it=0;
    int arr[1000]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]++;
        if(mx<x)
        {
            mx=x;
        }

    }
    for(int j=0;j<=mx;j++)
    {
        if(it<arr[j])
        {
            it=arr[j];

        }
    }
    for(int i=0;i<=mx;i++)
    {
        if(arr[i]!=0)
        {
            sum = sum + arr[i];
        }
    }
    cout<<sum-it;
}    