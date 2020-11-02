#include<vector>
#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>


using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {   
        long long n,num=0,digsum=0;
        cin>>n;
        long long arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            num=num+ arr[j]*100;
        }

        while(num!=0)
        {
            long long dig=0;
            dig=num%10;
            digsum+=dig;
            num=num/10;
        }
        if(digsum%3==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
}