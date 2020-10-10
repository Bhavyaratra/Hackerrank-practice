#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {   int count=0;
        string s;
        cin>>s;
        int n=s.size();
        for(int j=0;j<n-1;j++)
        {
            if(s[j]==s[j+1])
            {
                count++;
            }
        }
        cout<<count<<endl;

    }
}