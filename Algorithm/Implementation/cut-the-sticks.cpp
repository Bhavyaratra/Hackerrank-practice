#include <iostream>

using namespace std;

int main()
{
    int n,a[1000],count;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    do
    {
        count=0;
        int min=2147483647;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                if(min>a[i])
                {
                    min=a[i];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                a[i]=a[i]-min;
                count++;
            }
        }
        if(count==0)
        {
            break;
        }
        cout<<count<<endl;    
    } while (count>1);
    
}