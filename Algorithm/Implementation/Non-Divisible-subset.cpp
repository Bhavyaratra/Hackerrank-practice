#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,k,a=0;
    cin>>n>>k;
    int arr[k]={0};
    for(int i=0;i<n;i++)
    { 
        int x;
        cin>>x;
        arr[x%k]++;
    }
    for(int i=1;i<(k+1)/2;i++)
    {
        a+= (arr[i]>arr[k-i]?arr[i]:arr[k-i]);
    }
    a+= (arr[0]>=1) + (k%2==0 && arr[k/2]);

    cout<<a;

}