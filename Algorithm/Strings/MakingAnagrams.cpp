#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;


    

int main()
{
    string s1,s2;
    signed int arr[26]={0};
    cin>>s1>>s2;
    int m=s1.size();
    int n=s2.size(),sum=0,flag=0;
    for(int i=0;i<m;i++)
    {
        arr[s1[i]-'a']--;
        
    }
    

    for(int j=0;j<n;j++)
    {
        arr[s2[j]-'a']++;
        
    }

    for(int k=0;k<26;k++)
    {
        if(arr[k]!=0)
        {
            sum=sum+abs(arr[k]);
        }
    }
    cout<<sum;
}    