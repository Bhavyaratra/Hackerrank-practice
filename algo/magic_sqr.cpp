#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{ int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0; 
  set<int> s;
  vector<int> v(8);
  vector<int> mat(9);
  int A[3][3];
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
         {
             cin>>A[i][j];
             mat.push_back(A[i][j]);
         }
  }
////void check(vector<int> v)     arr[i][j]=v[(i*n)+j]
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<3;j++)
         {
             if(i==0)
             {
                 a=a+A[i][j];
             }
             if(i==1)
             {
                 b=b+A[i][j];
             }
             if(i==2)
             {
                 c=c+A[i][j];
             }
             if(j==0)
             {
                 d=d+A[i][j];
             }
             if(j==1)
             {
                 e=e+A[i][j];
             }
             if(j==2)
             {
                 f=f+A[i][j];
             }
             if(i==j)
             {
                 g=g+A[i][j];
             }
             if(i+j==2)
             {
                 h=h+A[i][j];
             }
         }  
    }
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    s.insert(e);
    s.insert(f);
    s.insert(g);
    s.insert(h);
    
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(e);
    v.push_back(f);
    v.push_back(g);
    v.push_back(h);
    auto m=s.rbegin();

    for(int i=0;i<9;i++)
  {
      mat[i]=i+1;
      checkmat(mat);
  }
  
    
}  
