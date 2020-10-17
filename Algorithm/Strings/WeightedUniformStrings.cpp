#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;

int main()
{
    string s;
    vector<bool> vb(1010001000);
    cin >> s;
    int n;
    cin >> n;
    int mul=1;
    char prev='1';
    for(int i=0;i<s.size();i++)
    {
        int w=(s[i]-'a')+1;
        if(s[i]==prev)
        {
            mul++;
            w*=mul;
        }
        else
            mul=1;

        prev=s[i];
        vb[w]=true;
        
    }
    for(int a=0;a<n;a++)
    {
         int x;
        cin >> x;
        if(vb[x]) 
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        } 
    }

}

/* BRUTE FORCE
int main()
{
    string s1,s2;
    signed int arr[26]={0};
    cin>>s1;
    int m=s1.size();
    int sum=0,flag=0;
    for(int i=0;i<m;i++)
    {
        arr[s1[i]-'a']++;    
    }
   

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        for(int j=0;j<26;j++)
        {
            int n=arr[j];
            for(int k=n;k>0;k--)
            {
                if((arr[j]*(j+1))==x)
                {
                    flag=1;
                }
            arr[j]--;
            }
            arr[j]=n;
        
        }
        if(flag==0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
            flag=0;
        }

        
    }
}    
*/