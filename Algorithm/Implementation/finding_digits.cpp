#include<iostream>
#include<vector>
#include<utility>
#include<set>


using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,r,count=0;
        cin>>n;
        int temp=n;
        while(n!=0)
        {
            r=n%10;
            if(r==0)
            { n=n/10;
            continue;
            }
            else if(temp%r==0)
            {
                
                
                    count++;
            }
            n=n/10;
        }
        cout<<count<<endl;
    }
}    