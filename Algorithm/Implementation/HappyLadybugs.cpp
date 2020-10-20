#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {   int arr[26]={0};
        int n,dash=0,flag1=0;
        string s;
        cin>>n;
        cin>>s;
      
        for(int i=0;i<n;i++)
        {
            if(s[i]=='_')
            {
                dash++;
            }
            else
            arr[s[i]-'A']++;
        }

        if(dash>=1)
        {
            for(int x : arr)
            {
                if(x==1)
                {
                    flag1=1;
                }
            }
            if(flag1==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
         for(int j=1;j<n-1;j++)
            {
                if(s[j]!=s[j-1] || s[j]!=s[j+1])
                {
                    flag1=1;
                }
            }
            if(flag1==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        
    }
}