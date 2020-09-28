#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int N,A[50],MAX,MIN,max_count=0,min_count=0;
  cin>>N;
  for(int i=0;i<N;i++)
  {
      cin>>A[i];
  }
   MAX=A[0];
   MIN=A[0];
 for(int j=0;j<N;j++)
   {
       if(A[j]>MAX)
       {    
            MAX=A[j];
           max_count++;
    
       }
       else if(A[j]<MIN)
       {  
           MIN=A[j];
           min_count++;
       }

   }
   cout<<max_count<<" "<<min_count;
  

}
