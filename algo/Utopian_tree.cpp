#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       int n,h=1;
       cin>>n;
       if(n==1)
       {
           h=2;
       }
       else if(n==0)
       {
           h=1;
       }
       else
      { h=2;
       for(int j=2;j<=n;j++)
        {
           if(j%2==0)
           {
               h=h+1;
           }
           else
           {
               h=2*h;
           }
        }
       }
       cout<<h<<endl;    
    }
}    
