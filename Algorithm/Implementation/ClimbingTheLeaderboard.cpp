#include<iostream>
#include<vector>
#include<map>

using namespace std;

int top,stack[20003];
int main()
{ 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {   
        cin>>stack[top+1];

        if(stack[top+1]!=stack[top])
        {
            top++;
        }
    }

    int m;
    cin>>m;
    for(int j=0;j<m;j++)
    {   
        int score=0;
        cin>>score;

        while(top && score>=stack[top])
        {
            top--;
        }
        cout<<top+1<<endl;
    }    
}    