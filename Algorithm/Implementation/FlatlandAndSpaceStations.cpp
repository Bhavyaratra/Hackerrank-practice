#include<iostream>
#include<vector>
#include<utility>
#include<set>
#include<algorithm>

#define max(a,b) (a>b?a:b)

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int city[n];
    int ss[m];
    int min=20007,ans=0;
    int mx=0;
    for(int j=0;j<m;j++)
    {
        int x;
        cin>>x;
        ss[j]=x;
    }
    sort(ss,ss+m);
     if(n==m)
        {
            ans=0;
            cout<<ans;
            return 0;
        }
     else
        {
            for(int i =0;i<m-1;i++)
                {
                    ans=max(ans,abs(ss[i]-ss[i+1])/2);
                }

            cout<<max(max(ans,ss[0]),(n-1)-ss[m-1]);
        }
}
