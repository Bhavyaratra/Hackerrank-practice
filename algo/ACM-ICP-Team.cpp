#include<iostream>
#include<vector>
#include<string>


using namespace std;

int main()
{
    int n,m,count=0,mx=0;
    string str;
    cin>>n>>m;
    vector<string> a;

    for(int i=0;i<n;i++)
    {
        cin>>str;
        a.push_back(str);
    }  

    for(int i=0;i<(n-1);i++)
    {
        for(int j=i+1;j<n;j++)
        {    count=0;
            for(int k=0;k<m;k++)
            {
                if(a[i][k]=='1' || a[j][k]=='1')
                {
                 count++;
                }
            }    
        
          if(mx<count)
          {
            mx=count;
          }
        }
    }

    cout<<mx;
}    