#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

///////////////O(n)///////////////

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
       
        
    }
}
int mx=0,value=0;
for(long i=0;i<a.size();i++)
{ long sum=0,r=0;

  long k=a[i];

  while(k)
  {
      
      sum=sum+k%10;;
      k=k/10;
  }
  b[a[i]]=sum;
  if(mx<sum)
  {
      mx=sum;
      value=a[i];
  }

}
cout<<value;

}

/*///////////////O(sqrt n)///////////////

int main()
{
    int n,sqr;
    stack<int> st;
    vector<int> v;
    
    cin >> n;
    
    v.push_back(1);
    st.push(n);
    sqr = sqrt(n);
    
    for(int i=2;i<=sqr;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            
            if(i*i != n)
                st.push(n/i);
        }
    }
		
    while(!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    
    int max,number,sum,value;
    max = 0;
    
    for(int j: v)
    {
        sum = 0;
        value = j;
        
        while(value!=0)
        {
            sum += value%10;
            value = value/10;
        }
        
        if(sum > max)
        {
            max = sum;
            number = j;
        }
    }
    
    cout << number << endl;
    
    return 0;
}

*/

