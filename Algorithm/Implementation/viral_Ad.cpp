#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n,A[1000],shared=5,liked=0,cu=0;
    cin>>n;
    for(int i = 0 ;i<n;i++)
    {
        liked=shared/2;
        cu=cu+liked;
        shared=liked*3;
        
    }
    cout<<cu;

}