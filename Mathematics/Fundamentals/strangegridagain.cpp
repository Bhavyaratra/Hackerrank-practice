#include<iostream>
#include<vector>

#define ll long long int
using namespace std;

int main()
{
    ll r,c,a;
    cin>>r>>c;
    if ((r-1)%2==0)
    {
        a=((r-1)/2)*10+2*(c-1);
        cout<<a<<endl;
    }
    else
    {
         a=(((r-1)/2)*10+1)+2*(c-1);
         cout<<a<<endl;
    }  
}    

