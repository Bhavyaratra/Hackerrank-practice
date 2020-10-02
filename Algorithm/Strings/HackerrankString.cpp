#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;

int main()
{
    string str1="hackerrank";
    int n;
    cin>>n;
    for(long i=0;i<n;i++)
    {
        string str2;
        cin>>str2;
        int check=0;
        for(long j=0;j<str2.size()-1;j++)
        {
            if(str2[j]==str1[check])
               { check++;
               }  
        }
        if(check>=9)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }    
}