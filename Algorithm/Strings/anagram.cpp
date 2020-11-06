#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;

int main()
{ 
  int t;
  cin>>t;
  while(t--)
   {
    string s;
    cin>>s;
    int c=0;

    int len=s.size();
    int arr[26]={0};
    if(len%2!=0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(int i=0;i<(len/2);i++)
        {
            arr[s[i]-'a']++;
        }

        for(int i=(len/2);i<len;i++)
        {
            arr[s[i]-'a']--;
        }

        for(int x : arr)
        {
            if(x!=0)
            {
                c=c+abs(x);
            }
        }
     cout<<c/2<<endl;
    }
      
}
}