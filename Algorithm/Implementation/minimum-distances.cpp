#include<iostream>
#include<vector>
#include<utility>
#include<set>
#include<math.h>


using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[1000],s=27581,mn=27681;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<(n-1);i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                s=abs(j-i);
            }
            if(mn>s)
            {
                mn=s;
            }
        }
    }
    cout<<mn;
}    
