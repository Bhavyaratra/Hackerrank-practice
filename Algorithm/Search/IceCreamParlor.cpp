#include<vector>
#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>


using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {   
        vector<int> v;
        int n,m;
        cin>>m>>n;
        for(int j=0;j<n;j++)
        {   
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int k=0;k<v.size()-1;k++)
        {
            int y;
            int x=v[k];
            y=m-x;
          
            auto it = find(v.begin()+(k+1),v.end(),y);
           
            if(it!=v.end())
            {   
                {
                cout<<k+1<<" "<< (it-v.begin())+1<<endl;
                break;
                }
            }
        }
    }
}