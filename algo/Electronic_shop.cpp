#include <iostream>
#include<vector>
#include<string>

using namespace std;

/*int main()
{
    long b,cost,mx;
    int n,m;
    cin>>b>>n>>m;
    int K[1000];
    int D[1000];
    int z=-1;
    for(int i=0;i<n;i++)
    {
        cin>>K[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>D[i];
    }
    mx=K[0]+D[0];
    for(long l=0;l<n;l++)
    {
        for(long j=0;j<m;j++)
        {
           if(K[l]+D[j]<=b && K[l]+D[j]>z)
            z=K[l]+D[j];
               
        }

    }
   cout<<z;
    
}   */

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    int k[n]; 
    int z=-1;
    int u[m];
    
    for(int i=0;i<n;i++)
    { cin >> k[i];
    }
    for(int i=0;i<m;i++)
    {
     cin >> u[i];    } 
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
        {
        if(k[i]+u[j]<=s && k[i]+u[j]>z)
            z=k[i]+u[j];
    }
}
    cout<<z;
    return 0;
}    