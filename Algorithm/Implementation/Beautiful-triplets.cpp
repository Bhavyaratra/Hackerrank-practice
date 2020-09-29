#include<iostream>
#include<vector>
#include<utility>
#include<set>
#include<math.h>


using namespace std;

int main() 
{
    int n,d,count=0;
    cin>>n>>d;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {   int flag=0;
        int x=a[i]+d;
        int y=a[i]+(d*2); //or y=x+d;
        
        for(int j=0;j<n;j++)
        {
            if(a[j]==x)
            {
                flag=flag+1;
            }
            else if(a[j]==y)
            {
                flag+=1;
            }
        }
        if(flag!=2)
        {
            continue;
        }
        else
        {
            count++;
        }
        
    }    
    cout<<count;

}    
