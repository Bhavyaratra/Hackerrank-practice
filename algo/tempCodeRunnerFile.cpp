#include <iostream>

using namespace std;

int main()
{
    int d1,m1,y1;
    int d2,m2,y2;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    if(y1>y2)
    {
        cout<<"10000";
    }
    else if(m1>m2)
    {
        cout<<500*(m1-m2);
    }
    else if(d1>d2)
    {
        cout<<15*(d1-d2);
    }
    
}