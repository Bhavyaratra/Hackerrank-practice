#include<iostream>

using namespace std;

int main()
{
    int t;
    long rem=3;
    cin>>t;
    while(t>rem)
    {   
        t=t-rem;
        rem=rem*2;    
    }
    cout<<(rem-t)+1;
}