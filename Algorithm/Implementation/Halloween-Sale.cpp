#include <iostream>
#include <vector>
#define max(a,b) a>b?a:b
using namespace std;

int main()
{
    int p,d,m,s,game=0;
    cin>>p>>d>>m>>s;

    while(s>=p)
    {   
         game++;
         s=s-p;
         p=max(p-d,m);
        
    }
    cout<<game;
    
}