#include <iostream>
#include <vector>
#define max(a,b) a>b?a:b
using namespace std;

int main()
{
    int n,t,mn=10000;
    cin>>n>>t;
    int a[10000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        for(int j=x;j<=y;j++)
        {
            if(mn>a[j])
            {
                mn=a[j];
            }
        }
        cout<<mn<<endl;
        mn=1000;
    }
}