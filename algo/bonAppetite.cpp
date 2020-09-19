#include <iostream>
#include <vector>

using namespace std;

int main()
{ int b,n,k,brian,anna,bsum=0,asum=0;
  cin>>n>>k;
  int bill[100];
  for(int i=0;i<n;i++)
  {   
      cin>>bill[i];
  }
  cin>>b;

  for(int i=0;i<n;i++)
  {
      bsum=bsum+bill[i];
      if(i!=k)
      {
          asum=asum+bill[i];
      }
  }
   brian=bsum/2;
   anna=asum/2;
   if(b-anna!=0)
   {
       cout<<b-anna;
   }
   else
   {
       cout<<"Bon Appetit";
   }
   
}   