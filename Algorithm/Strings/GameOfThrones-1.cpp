#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;

int main()
{
    string s;
    int arr[26]={0};
    cin>>s;
    int len=s.size(),odd=0;
    if(len%2==0)
    {
        for(int i=0;i<len;i++)
        {
            arr[s[i]-'a']++;
        }

        for(int x : arr)
        {
            if(x%2!=0)
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
        return 0;

    }
    else
    {
        for(int i=0;i<len;i++)
        {
            arr[s[i]-'a']++;
        }

        for(int x : arr)
        {   
            if(x%2!=0)
            {
                odd++;
            }   
        }
          if(odd==1)
            {
                cout<<"YES";
        
            }
            else
            {
                cout<<"NO";
            
            }

    }
    
}