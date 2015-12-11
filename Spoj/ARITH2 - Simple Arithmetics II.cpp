#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    long long int res,a;
    char op;
    cin>>t;
    cin>>res;
    while(t--)
    { 	while(1)
    	{	cin>>op;
    		if(op == '=')
    			break;
    		cin>>a;
      		switch ( op )
      		{	case '+':	res += a;
          					break;
        		case '-':   res -= a;
          					break;
        		case '*':   res *= a;
          					break;
        		case '/':	res /= a;
          					break;
      		}
    	}
    	cout<<res<<endl;
    }
}

