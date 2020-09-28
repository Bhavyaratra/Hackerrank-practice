#include<iostream>
#include<vector>


using namespace std;

//return (long)w*(wc<bc+z?wc:bc+z)+(long)b*(bc<wc+z?bc:wc+z);  //one line solution

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        long b,w,bc,wc,z,tc=0,wct,bct;
        cin>>b>>w;
        cin>>bc>>wc>>z;

        if(wc>(bc+z))
        {
            wct=w*(bc+z);
        } 
        else
        {
            wct=w*wc;
        }
        if(bc>(wc+z))
        {
            bct=b*(wc+z);
        }
        else
        {
            bct=b*bc;
        }
        
        cout<<(bct+wct)<<endl;

    }

}