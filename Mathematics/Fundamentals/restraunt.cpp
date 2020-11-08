#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int l,b,flag=0;
    cin>>l>>b;
    if(l==b)
    {
        cout<<"1"<<endl;
    }
    else if(l>b)
    {
        for(int i=b;i>=2;i--)
        {
            if(l%i==0 && b%i==0)
            {
                cout<<(l*b)/(i*i)<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<l*b<<endl;
    }
    else if(b>l)
    {
        for(int i=l;i>=2;i--)
        {
            if(l%i==0 && b%i==0)
            {
                cout<<(l*b)/(i*i)<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<l*b<<endl;
    }
    }

}

/*////////////////GCD
int gcd(int a, int b) {
    return a==0?b:gcd(b%a,a);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b;
        cin >> a >> b;
        cout << (a/gcd(a,b))*(b/gcd(a,b)) << endl;
    }
    
    return 0;
}
*/