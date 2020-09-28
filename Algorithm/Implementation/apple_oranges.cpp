#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<signed int> ap;
    vector<signed int> o;
    int s,t,a,b,m,n,apple=0,orange=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
     
    for(int i = 0;i<m;i++)   //m apples distance from a
    {
        signed int d1;
        cin>>d1;
        ap.push_back(d1);
    }

    for(int i = 0;i<n;i++)   //n oranges distance from b
    {
        signed int d2;
        cin>>d2;
        o.push_back(d2);
    }

    for(auto x=ap.begin();x!=ap.end();x++)
    {
        *x=((*x>=0) ? (a+(*x)) : (a+(*x)));
        
    }
    
    for(auto x=o.begin();x!=o.end();x++)
    {
        *x=((*x>=0) ? (b+(*x)) : (b+(*x)));
        
    }

    for(int i : ap)
    {
        if(i>=s&&i<=t)
        {
            apple++;
        }
    }
    for(int i : o)
    {
        if(i>=s&&i<=t)
        {
            orange++;
        }
    }
    cout<<apple<<endl<<orange;
}