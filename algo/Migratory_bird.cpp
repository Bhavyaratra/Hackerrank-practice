#include<iostream>
#include<vector>
#include<utility>
#include<set>


/*using namespace std;

int main()
{
    int n,A[100], count=0,max_freq=0;
    vector<pair<int,int>> v;
    set<int> s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<n;i++)
       {
           for(int j = 0;j<n;j++)
           {
               if(A[i]==A[j])
               {
                   count++;
               }
           }
           v.push_back(make_pair(A[i],count));
           count=0;
       }
       max_freq=v[0].second;
       for (int i=0; i<n; i++) 
      {  
       if(max_freq<v[i].second)
       {
           max_freq=v[i].second;
           
       }
      } 

      for(int i=0;i<n;i++)
      {
          if(max_freq==v[i].second)
          {
              s.insert(v[i].first);
          }
      }
    auto it=s.begin();
    cout<<*it;
}
*/
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    int arr[6]={0};
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        arr[tmp]++;
    }
    int a1;
    for(int i=1;i<=5;i++){
        if(ans < arr[i]){
           ans = arr[i];
            a1 = i;
        }
    }
    cout << a1 << endl;
    return 0;
}