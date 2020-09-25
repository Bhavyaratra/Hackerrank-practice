#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    long long n,count=0;
    cin>> n;
    
    long p=n/s.length();
    long rest=n%s.length();

    for(long long i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        count++;
    }
    count=count*p;
    for(int i=0;i<rest;i++)
    {
        if(s[i]=='a')
        count++;
    }
    cout<<count;
}