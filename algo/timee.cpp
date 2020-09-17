#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>

using namespace std;

// C++ program to convert 12 hour to 24 hour 
// format 
#include<iostream> 
using namespace std; 

void print24(string str) 
{ 
	// Get hours 
	int h1 = (int)str[1] - '0'; 
	int h2 = (int)str[0] - '0'; 
	int hh = (h2 * 10 + h1 % 10); 

	// If time is in "AM" 
	if (str[8] == 'A') 
	{ 
		if (hh == 12) 
		{ 
			cout << "00"; 
			for (int i=2; i <= 7; i++) 
				cout << str[i]; 
		} 
		else
		{ 
			for (int i=0; i <= 7; i++) 
				cout << str[i]; 
		} 
	} 

	// If time is in "PM" 
	else
	{ 
		if (hh == 12) 
		{ 
			cout << "12"; 
			for (int i=2; i <= 7; i++) 
				cout << str[i]; 
		} 
		else
		{ 
			hh = hh + 12; 
			cout << hh; 
			for (int i=2; i <= 7; i++) 
				cout << str[i]; 
		} 
	} 
} 

int main()
{
  int hh, mm, ss ;
    char t12[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;
        
    if (strcmp(t12,"PM")==0 && hh!=12) hh += 12 ;
    if (strcmp(t12,"AM")==0 && hh==12) hh = 0 ;
        
    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;


/*   string s,a;
 *   cin>>s;
 *
 *  if(s[8]=='A')
 *   {   for(int i=0;i<8;i++)
 *       a=a+s[i];
 *       cout<<a;
 *       return 0;
 *   }
 *   else if(s[8]=='P')
 *   {   
 *       if(s[0]=='0'&&(s[1]!='8'||s[1]!='9'))
 *       {
 *           s[0]=='1';
 *           s[1]==s[1]+2;
 *       }
 *       else if(s[0]=='1')
 *       {
 *           s[0]=='2';
 *           s[1]==s[1]+2;
 *       }
 *       else
 *       {
 *           s[0]=='2';
 *           if(s[1]=='8')
 *           {
 *               s[1]=='0';
 *           }
 *           else if(s[1]=='9')
 *           {
 *               s[1]=='1';
 *           }
 *
 *        }
 *       for(int i=0;i<8;i++)
 *       a=a+s[i];
 *       cout<<a;
 *  }
 *  return 0;
 */  
}
