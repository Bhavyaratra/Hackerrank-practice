#include<iostream>
#include<vector>


using namespace std;


int main()
{
    long b,cost,mx;
    int n,m;
    cin>>b>>n>>m;
    int K[100];
    int D[100];
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
   return 0;
}
