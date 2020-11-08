#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        if(k<(n-1)-k)
        {
            cout<<2*k+1<<endl;
        }
        else
        {
            cout<<2*((n-1)-k)<<endl;
        }
        
    }
}