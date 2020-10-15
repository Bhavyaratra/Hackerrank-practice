#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;

int main()
{
    int n,count;
    cin>>n;
    for(int i=0;i<n;i++)
    {    count=0;
        int k,j;
        string s,r;
        cin>>s;
        int len=s.size();
        count=0;
        for(j=0,k=len-1;j<k;j++,k--)
        {
            count=count+abs(s[k]-s[j]);
        }
    cout<<abs(count)<<endl;

     }
}    