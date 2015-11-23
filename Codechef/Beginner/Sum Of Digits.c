#include <stdio.h>
int main(void)
{   int t;
	scanf ("%d", &t);
	while (t--) {
	    int n;
	    scanf("%d", &n);
	    int d=0;
	    while (n)
	    {   d += n%10;
	        n /= 10;
	    }
	    printf ("%d\n", d);
	}
	return 0;
}
