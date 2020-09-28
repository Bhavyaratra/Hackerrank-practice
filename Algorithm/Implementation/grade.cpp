#include <iostream>
#include<vector>

using namespace std;


int main()
{
    int n,a;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(auto i=v.begin();i!=v.end();i++)
    {
        if(*i<38)
        {
        cout<<*i<<endl;
        
        }
        else if(*i>38 && *i<40)
        {
            cout<<"40"<<endl;
            
        }
        else if(*i%5!=0)
          {  int r=*i%5;
             if(r>2)
               {
                   cout<<*i+(5-r)<<endl;
               }
              else
              {
                   cout<<*i<<endl;
              }
          }
          else 
            cout<<*i<<endl;

    }



}