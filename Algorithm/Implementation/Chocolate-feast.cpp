#include <iostream>
#include <vector>
#define max(a,b) a>b?a:b
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,c,m,count=0;
        cin>>n>>c>>m;
        while(n>=c)
        {
            count++;
            n=n-c;
            if(count%m==0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}