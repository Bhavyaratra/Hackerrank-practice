#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int px,py,qx,qy,rx,ry;
        cin>>px>>py>>qx>>qy;
        rx=(2*qx)-px;
        ry=(2*qy)-py;
        cout<<rx<<" "<<ry<<endl;
    }
}