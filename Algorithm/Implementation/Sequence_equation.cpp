#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
    {
        int x;
		cin >> x;
		--x;
		p[x] = i;
    }
    for (int i = 0; i < n; ++i) {
		cout << p[p[i]] + 1 << "\n";
	}
}

/* int main() 
{   vector<int> v;
    int n,p[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int x=1;x<=n;x++)
    {
        for(int i=0;i<n;i++)
        {
            if(p[i]==x)
            {
                for(int k=0;k<n;k++)
                {
                    if(p[k]==(i+1))
                       {
                           v.push_back(k+1);
                       }
                }
            }
        }
    }

    for(int j : v)
    cout<<j<<endl;

}
*/
