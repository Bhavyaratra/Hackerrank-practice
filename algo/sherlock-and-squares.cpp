#include<iostream>
#include<vector>
#include<string.h>
#include<string>
#include <math.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  for(int i=0;i<t;i++)
  {
     int a,b;
     cin>>a>>b;
     cout<<(int)(floor(sqrt(b)-ceil(sqrt(a))+1))<<endl;
  }
} 