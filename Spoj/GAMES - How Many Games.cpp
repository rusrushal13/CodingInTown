#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
int gcd(int a,int b){
	if(a<b)
		return gcd(b,a);
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
	   string str;
	   cin>>str;
	   int len=str.length();
	   int c=0;
	   int decimalPointFlag=0;
	   for(int i=len-1;i>=0;i--){
			if(str[i]=='.'){
				decimalPointFlag=1;
				break;
			}
			else{
				c++;
			}
	   }
	   int power=0;
	   int number=0;
	   int numerator;
	   if(decimalPointFlag){
		   for(int i=0;i<len;i++){
			   if(str[i]!='.'){
				number=number*10+str[i]-'0';
				}
		   }
		   power=pow(10,c);
		   numerator=number;
		   printf("%d\n",power/gcd(numerator,power));
	   }
	   else{
	       printf("1\n");
	   }
		   
	      
   }
}