#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;

int main()
{   
    int arr[26]={0},flag=0;
    string s,s1;
    getline(cin,s);
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            continue;
        }
        else
        {   
            arr[tolower(s[i])-'a']++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"not pangram";
    }
    else
    {
        cout<<"pangram";
    }
    
}