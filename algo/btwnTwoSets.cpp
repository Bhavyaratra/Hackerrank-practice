#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int n,m,a[50],b[50],c[50],len=0;
    vector<int> v;
    int count=0;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    for(int i = a[(n-1)],j=0 ; i<=b[0] ;i++,j++)
    {
        c[j]=i;
        len++;
    }

   for(int x=0;x<len;x++)
   {    
       bool flag1=true,flag2=true;
       for(int i= 0;i<n;i++)
       {
           if(0!=c[x]%a[i])
           {
               flag1=false;
                
           }   
       }

       for(int i= 0;i<m;i++)
       {
           if(0!=b[i]%c[x])
           {
               flag2=false;
               
           }   
       }
       if(flag1&&flag2)
       {   
           count++;   
       }
   }
   cout<<count;
}     
