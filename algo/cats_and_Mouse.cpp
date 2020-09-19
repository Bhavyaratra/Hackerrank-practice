#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    { int x,y,z;
      cin>>x>>y>>z;
      if(abs(x-z)==abs(y-z))
      {
          cout<<"Mouse C"<<endl;
      }
      else if(abs(x-z)<abs(y-z))
      {
        cout<<"Cat A"<<endl;
      }
      else
      {
        cout<<"Cat B"<<endl;
      }
      

    }
}