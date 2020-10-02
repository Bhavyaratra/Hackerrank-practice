#include <iostream>
#include <vector>
#include <set>
#include<string>
#include<algorithm>

using namespace std;

int main()
{ 
    int letters=26;
    int n;
    long mx=0;
    cin>>n;
    string str;
    cin>>str;

    if(n<=1)
    {
        cout<<"0";
        return 0;
    }

   int pair[letters][letters]={0};
   signed int count[letters][letters]={0};

    for(int i=0;i<n;i++)
    {
        char ch=str[i];
        int ch_num=ch-'a';

        //update rows
        for(int col=0;col<letters;col++)
        {
            if(pair[ch_num][col]==ch)
            {
                count[ch_num][col] = -1;   
            }

            if(count[ch_num][col]!=-1)
            {
              pair[ch_num][col]=ch;
              count[ch_num][col]++;
            }
        }

        //update column
        for(int row=0;row<letters;row++)
        {
            if(pair[row][ch_num]==ch)
            {
              count[row][ch_num]= -1;
            }

            if(count[row][ch_num]!=-1)
            {
              pair[row][ch_num]=ch;
              count[row][ch_num]++;
            }
        }
    }
    mx=0;
    for(int row=0;row<letters;row++)
    {
        for(int col=0;col<letters;col++)
        {
            if(mx<count[row][col])
            {
                mx=count[row][col];
            }
        }
    }
cout<<mx;
}

