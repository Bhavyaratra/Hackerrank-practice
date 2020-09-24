#include<iostream>
#include<vector>
#include<string.h>
#include<string>

using namespace std;

// int main()
// {
//     string s,t;
//     int k,i;
//     cin>>s;
//     cin>>t>>k;
//     int l= s.size()+t.size();
//     for( i=0;s[i]==t[i];i++);
   
//     cout << (l<= k + i*2 && l%2 == k%2 || l < k ? "Yes" : "No");
//     return 0;
// }
int main()
{
    string s,t;
    int k,i;
    cin>>s;
    cin>>t>>k;
    int sl= s.size();
    int tl=t.size();
    for( i=0;s[i]==t[i];i++);

    int a,b,c;
    a=abs(sl-(i));
    b=abs(tl-(i));

    c=a+b;
    if((sl+tl)<k)
    {
        cout<<"Yes";
        return 0;
    }

   if(c<k)
   {

   if((c-k)%2==0)
    cout<<"Yes";
   else 
    cout<<"No";
   }
}      