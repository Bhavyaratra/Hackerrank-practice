#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    signed int n,A[100],count=0;
    string str;
    cin>>n;
    cin>>str;
    signed int pos=0;

    for(int i=0;i<n;i++)
    {
        if(str[i]=='U')
        {
            pos++;
        }
        else if(str[i]=='D')
        {
            pos--;
        }
        A[i]=pos;
        if(A[i]==0&&A[i-1]<0)
          {
              count++;
          }
        
    }
    cout<<count;
}