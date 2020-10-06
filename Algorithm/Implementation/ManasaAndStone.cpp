#include<iostream>
#include<vector>
#include<utility>
#include<set>
#include<algorithm>


using namespace std;

    int main()
    {
        int t;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            int n,a,b,h;
            set<long long> s;
            cin>>n>>a>>b;

            if(a<b)
            {
                for(int j=0;j<n;j++)
                {   
                    h=0;
                    h=(n-1-j)*a + j*b;
                    s.insert(h);
                }
            for(int x : s)
            {
                cout<<x<<" ";
            }
                cout<<endl;
            }
             else if(a==b)
             {
                cout<<a*(n-1);
                cout<<endl;
             }
             else
             {
                  for(int j=0;j<n;j++)
                {   
                    h=0;
                    h=(n-1-j)*b + j*a;
                    s.insert(h);
                }
            for(int x : s)
            {
                cout<<x<<" ";
            }
                cout<<endl;
                 
             } 
           

        }
    }    