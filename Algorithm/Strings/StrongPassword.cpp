#include <iostream>
#include <vector>
#include <set>
#include<string>

using namespace std;

int main()
{ 
    string s;
    int n;
    cin>>n;
    cin>>s;

    int l=0,u=0,sym=0,dig=0,ad=0;
    if(s.size()<=2)
        {
            cout<<6-n;
            return 0;
        }
    else
    {
      for(int i=0;i<s.size();i++)
     {
         if(isdigit(s[i]))
         {
             dig++;
         }
           if(isupper(s[i]))
         {
             u++;
         }
           if(islower(s[i]))
         {
             l++;
         }
           if(ispunct(s[i]))
         {
             sym++;
         }
     }
    } 

     if(dig==0)
     {
         ad++;
     }
     if(u==0)
     {
         ad++;
     }
      if(l==0)
     {
         ad++;
     } 
     if(sym==0)
     {
         ad++;
     }
    
    if((s.size()+ad)<6)
    {
        ad=ad+(6-(s.size()+ad));
    }
    cout<<ad;

}