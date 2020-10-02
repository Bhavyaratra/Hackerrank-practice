#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;



int main()
{
    string s;
    cin>>s;
    int count=0;

    for(int i=1;i<s.size();i=i+3)
    {
        if(s[i]!='O')
        {
            count++;
        }
        if(s[i-1]!='S'||s[i+1]!='S')
        {
            count++;
        }
        if(s[i-1]!='S' && s[i+1]!='S')
        {
            count++;
        }
     
    }
    cout<<count;
}