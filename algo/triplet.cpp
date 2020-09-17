#include<iostream>
#include<vector>
using namespace std;


vector<int> compareTriplets(vector<int> a, vector<int> b) {
     vector<int> r;
    for(int i = 0 ; i<3;i++) 
    {
        if(a[i]>b[i])
        {
        r[0]+=1;
        }
        else if(a[i]<b[i])
        {
            r[1] +=1;
        }
        
    }
    return r;
}
int main()
{
     vector<int> a(3);

    for (int i = 0; i < 3; i++) 
    {   int t;
        cin>>t; 

        a[i] = t;
    }

    vector<int> b(3);

    for (int i = 0; i < 3; i++) 
    {
        int b_item ;
        cin>>b_item;

        b[i] = b_item;
    }

    vector<int> result = compareTriplets(a, b);
    for (int x : result)
    {
        cout<< x <<" ";
    }


}    