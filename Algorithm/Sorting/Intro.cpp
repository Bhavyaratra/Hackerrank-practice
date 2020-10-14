#include<vector>
#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<set>


using namespace std;

int main()
{
    int key;
    cin>>key;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==key)
        {
            a=i;
        }
    }
    cout<<a;
}