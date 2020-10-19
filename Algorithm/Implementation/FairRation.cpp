#include<iostream>
#include<vector>


using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[1000],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2!=0)
        {
            c++;
        }
    }
    if(c%2!=0)
    {
        cout<<"No";
        return 0;
    }
    c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            arr[i]=arr[i]+1;
            arr[i+1]=arr[i+1]+1;
            c=c+2;
        }
    }
    cout<<c;
    
}    