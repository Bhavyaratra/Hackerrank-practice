#include<vector>
#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<set>


using namespace std;

int main()
{
    set<int> s;
    int n,m;
    signed int arr[10001]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]--;
    }
    cin>>m;
    for(int j=0;j<m;j++)
    {
        int x;
        cin>>x;
        arr[x]++;
    }

    for(int k=0;k<10001;k++)
    {
        if(arr[k]>0)
        {
            s.insert(k);
        }
    }
    for(int y : s)
    {
        cout<<y<<" ";
    }

}