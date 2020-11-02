#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main()
{
    long n;
    cin>>n;
vector<long> a;
map<long,long> b;
int l=-1;
for(long j=1;j<=n;j++)
{
    if(n%j==0)
    {
        a.push_back(j);
        cout<<a[++l]<<" $ ";
        
    }
}

for(long i=0;i<a.size();i++)
{ long sum=0,r=0;

  long k=a[i];

  while(k)
  {
      
      sum=sum+k%10;;
      k=k/10;
  }
  b[a[i]]=sum;
  cout<<sum<<" ";

}
auto it=b.end();
    cout<<it->first;
}