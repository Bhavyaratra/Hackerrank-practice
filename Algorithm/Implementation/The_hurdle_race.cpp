#include <iostream>
#include<vector>
#include<math.h>

using namespace std;


int main()
{
    int n,k,max=0;
    cin>>n>>k;
    int h[1000];
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    max=0;
    for(int i=1;i<n;i++)
    { 
        if(h[i]>max)
        {
            max=h[i];
        }

    }
    if(max<=k)
    {
        cout<<"0";
    }
    else
    {
    cout<<abs(max-k);
    }
}