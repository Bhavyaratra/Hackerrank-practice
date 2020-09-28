#include <iostream>
#include<vector>

using namespace std;

int main ()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    int p1=x1,p2=x2;

    if (x1==x2)
    {
        cout<<"YES";
        return 0;
    }
    

    if ((x1>x2 && v1>v2) || (x2>x1 && v2>v1) )
    {
        cout<<"NO";
        return 0;
    }

    while(p1<p2)
    {
        p1=p1+v1;
        p2=p2+v2;
      if(p1==p2)
      {
          cout<<"YES";
          return 0;
      }
    }

    cout<<"NO";
    


}