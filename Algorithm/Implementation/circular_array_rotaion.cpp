#include <iostream>
#include<vector>

using namespace std;


int main() 
{
    int n,k,q;
    cin>>n>>k>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 int rot=k%n;
 for(int i=0;i<q;i++)
    { int m;
      cin>>m;
      if(m-rot>=0)
      {
          cout<<a[m-rot]<<endl;
      }
      else
      {
          cout<<a[(m-rot)+n]<<endl;
      }
        
    }
}   