#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>


using namespace std;

int main()
{
    unordered_map<int,string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v[i]=s;
    }
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if(v[i][j]>v[i-1][j] && v[i][j]>v[i+1][j] && v[i][j]>v[i][j-1] && v[i][j]>v[i][j+1])
            {
                v[i][j]='X';
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            {
                cout<<v[i][j];
            }
        }
        cout<<endl;
    }
}