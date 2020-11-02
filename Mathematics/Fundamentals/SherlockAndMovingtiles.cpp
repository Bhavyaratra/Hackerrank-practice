#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>

using namespace std;

int main()
{
    long l,s1,s2;
    cin>>l>>s1>>s2;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int dist;
        cin>>dist;
        double D,d;
        D=sqrt(2)*l;
        d=sqrt(2)*sqrt(dist);
        cout<<((D-d)/(fabs(s2-s1)))<<endl;
    }    
    //if all test cases are not passed, use " printf("%.10lf\n",(d - l)/fabs(s2-s1)); " in line 21
}