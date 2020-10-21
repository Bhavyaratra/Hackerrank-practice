#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int a,b,sa=0;
    cin>>a>>b;
    int arr[a+2][b+2]={0};
    for (int i = 0; i < a + 2; i++)
	{
		arr[i][0] = 0;
		arr[i][b+1] = 0;
	}
	for (int i = 0; i < b + 2; i++)
	{
		arr[0][i] = 0;
		arr[a+1][i] = 0;
	}


    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cin>>arr[i][j];
           
        }
    }
    
    
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=b;j++)
        {
            sa=sa+abs(arr[i][j]-arr[i+1][j]);
            sa+=+abs(arr[i][j]-arr[i][j+1]);
        }
    }
    sa=sa+(2*(a*b));

cout<<sa;

}