#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
      int a[26],n,mx=0;
      for(int i = 0;i<26;i++)
      {
          cin>>a[i];
      }
      string str;
      cin>>str;

    n=str.size();
    int max=str[0];

    for(int i = 0;i<n;i++)
    {   int asc=str[i];
        if(mx<(a[(asc-97)]))
        {
            mx=a[(asc-97)];
        }  
    }
  cout<<mx*n;
}