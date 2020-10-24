#include<iostream>
#include<vector>
#include<string>

using namespace std ;

//Brute force approach
int main()
{
    int q;
    cin>>q;
    while (q--)
    {   char arr[100];
        string s,t,a;
        cin>>s;
        int len=s.size();
        {
            for(int i=1;i<=len/2 && s!=t;i++)
            {
                a=t=s.substr(0,i);
                for(int j=1;t.size()<s.size();j++)
                {
                    t+=to_string(stoll(a)+j);
                }

            }
            if(s==t)
            {
                cout<<"YES "<<a<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
            
    }
    
}
