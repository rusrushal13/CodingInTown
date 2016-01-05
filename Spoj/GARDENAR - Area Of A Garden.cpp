#include<bits/stdc++.h>
#define r 1.7320508075688772935274463415059
int main()
{	int t,a,b,c;
 	double s,ans;
 	scanf("%d",&t);
 	while(t--)
 	{	scanf("%d%d%d",&a,&b,&c);
  		s = (a+b+c)/2.0;
  		ans = (0.5)*((pow(a,2)+pow(b,2)+pow(c,2))*(r/4.0) + 3*sqrt(s*(s-a)*(s-b)*(s-c)));
  		printf("%.2lf\n",ans);
 	}
return 0;
}