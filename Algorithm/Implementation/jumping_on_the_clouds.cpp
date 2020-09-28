#include <iostream>
#include<vector>

using namespace std;


// int main(){
//     int n;
//     int k;
//     cin >> n >> k;
//     vector<int> c(n);
//     for(int c_i = 0;c_i < n;c_i++){
//        cin >> c[c_i];
//     }
//     int energy=100;
//     for(int i=0;i<n;i+=k){
//         if(c[i]==0) energy--;
//         else energy-=3;
//     }
//     printf("%d",energy);
//     return 0;
// }
 int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
    int j=0;
    int e=100;
   
    do
     {
         e--;
         j=(j+k)%n;
        if(a[j]==1)
            e=e-2;      
      }while(j!=0);
      cout<<e;
} 
