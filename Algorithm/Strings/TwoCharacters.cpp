#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;



int main()
{ 
    int n;
    string s;
    cin>>n;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<n;i++)
    {  
        arr[s[i]-'a']++;
    }
    
    
}    