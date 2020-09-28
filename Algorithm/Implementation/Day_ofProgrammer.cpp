#include <iostream>
#include<vector>

using namespace std;

int day(int y)
{   
    
    int feb,date;
   if(y<=1917)
   {
       if(y%4==0)
       {
           feb=29;
       }
       else 
       {
           feb=28;
       } 
       date=256-(31+feb+31+30+31+30+31+31);
       return date;  
   }

   if(y==1918)
   {
       date=256-(31+15+31+30+31+30+31+31);
       return date;
   }

   if(y>1918)
   {
       if((y%4==0 && y%100!=0) || y%400==0)
       {
            feb=29;
       }
       else 
       {
           feb=28;
       } 
       date=256-(31+feb+31+30+31+30+31+31);
       return date;  
   }
   return 0;

}

int main()
{   int y;
    int result;
    cin>>y;

  result=day(y);
  cout<<result<<"."<<"09."<<y;
}  

//optimised code below

/* int main() {                       
    // Enter your code here. Read input from STDIN. Print output to STDOUT 
    int n;
    cin>>n;
    if(n<1918)
        {
        if(n%4==0)
            cout<<"12.09."<<n;
        else
            cout<<"13.09."<<n;
    }
    else if(n==1918)
        {
        cout<<"26.09.1918";
    }
    else
        {
        if(n%400==0 || (n%4==0 && n%100!=0))
            cout<<"12.09."<<n;
        else
            cout<<"13.09."<<n;
    }
    return 0;
} 
*/