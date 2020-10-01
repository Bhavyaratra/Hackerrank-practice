#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{ 
    string s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i])==1)
        {
            count++;
        }
    }
    cout<<count+1;
}   