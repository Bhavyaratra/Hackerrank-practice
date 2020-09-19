#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,p,min=0;
    cin>>n;
    cin>>p;
    min=(n/2)-(p/2);
    if(min>p/2)
    {
        min=p/2;
    } 
    cout<<min;
    return 0;
   
}    
