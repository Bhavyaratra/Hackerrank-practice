#include<iostream>
#include<vector>
#include<utility>
#include<set>
#include<math.h>


using namespace std;

int main() {
    long int n,m,r,f;
    int flag = 0;
    scanf("%ld\n%ld",&n,&m);
    for(long int i=n;i<=m;i++){
        long int sum;
        long int a = 0;
        long int k = i;
        while(k>0){
            k/=10 ; 
            ++a;
        }
       long int p = i * i;
        long int g = pow(10,a);
        sum = p%g + p/g;
        if(sum == i){
            printf("%ld ",sum);
            flag++;
        }
    }
    if(flag == 0)
        printf("INVALID RANGE");       
    return 0;
}

/* int main()         *WRONG ANSWER*
{
    int p,q;
    cin>>p>>q;
    for(int i=p;i<=q;i++)
    {
        int n,temp,r=0,rem=0,digits=0,sqdig=0,mn,sum=0,R=0,L=0;
        int sq=i*i;
        temp=sq;
        n=i;
        while(n!=0)
        {
            n=n/10;
            digits++;
        }
        while(temp!=0)
        {
            temp=temp/10;
            sqdig++;
        }
    
        for(int j=0;j<sqdig;j++)
        {
            if(j<digits)
            {
            rem=sq%10;
            R=R+rem*pow(10,j);
            sq=sq/10;
            }
            else
            {
                rem=sq%10;
                L=L+rem*pow(10,(j-digits));
                sq=sq/10;
            }
            
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
        else
        {
            cout<<"no ";
        }
        

    }
}
*/

