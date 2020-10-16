#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {   
        int flag=0;
        string s;
        cin>>s;
        int len=s.size(),k,arr[len-1];
        for(int j=0;j<len-1;j++)
        {
            arr[j]=abs(s[j]-s[j+1]);
        }

        int m,n;
        for(n=0,m=len-2;n<m;m--,n++)
        {
            if(arr[n]!=arr[m])
            {
                flag=1;
                break;
            }
            
        }
        if(flag==1)
        {
            cout<<"Not Funny"<<endl;
        }
        else
        {
            cout<<"Funny"<<endl;
        }
        
    }

}