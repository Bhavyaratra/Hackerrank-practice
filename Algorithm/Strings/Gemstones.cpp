#include<iostream>
#include<string>


using namespace std;

int main()
{
    int arr[26]={0};
    int n,count=0;
    cin>>n;
    
    for(int j=0;j<n;j++)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(arr[s[i]-'a']==j)
            arr[s[i]-'a']++;
        }
    }
    for(int x : arr)
    { 
        if(x>=n)
        count++;

    }

    cout<<count;
}