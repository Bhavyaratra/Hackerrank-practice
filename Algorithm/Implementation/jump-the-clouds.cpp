#include<iostream>
#include<vector>


using namespace std;


int main()
{
    int n,count=0;
    int a[10000];
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
    for(int i =0;i<(n-1);)
    {
        
        if(a[i+2]==0)
        {
         i=i+2;
         count++;
        }
        else
        {
            i=i+1;
            count++;
        }
        

    }
    cout<<count;
}