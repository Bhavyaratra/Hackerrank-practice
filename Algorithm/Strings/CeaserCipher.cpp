#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;

int main()
{   int n;
    cin>>n;
    string s;
    int k;
    cin>>s;
    cin>>k;
    for(int i=0;i<n;i++)
    {   
        if(isalpha(s[i]))
        {       int ul=islower(s[i])? 'a':'A';  
                s[i]=(s[i]+k-ul)%26+ul;
        }    
    }
    cout<<s;
}    