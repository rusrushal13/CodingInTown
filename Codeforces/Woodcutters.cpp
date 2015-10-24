#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(0);
    long long int n, x, h;
    cin >> n;
    long long int a[100001],b[100001];
    for (int i=0;i<n;i++)
    {   cin >> x >> h;
        a[i]=x;
        b[i]=h;
    }
    if (n == 1)
    {   cout << 1;
		return 0;
	}
    long long int pos = a[0],count = 2;
    for (long long int i=1;i<n-1;i++)
    {   x = a[i];
        h =b[i];
        if (x-h > pos)
        {   count += 1;
            pos = x;
        }
        else
        {   if (x+h < a[i+1])
            {   count += 1;
                pos = x+h;
            }
            else
                pos = x;
        }
    }
    cout<<count;
    return 0;
}
