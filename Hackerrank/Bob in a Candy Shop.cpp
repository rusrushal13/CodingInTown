#include<bits/stdc++.h>
int count( int S[], int m, int n )
{   int table[n+1];
    memset(table, 0, sizeof(table));
    table[0] = 1;
    for(int i=0; i<m; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];
    return table[n];
}
int main()
{   int arr[] = {1, 2, 5, 10, 20, 50, 100};
    int n;
    scanf("%d", &n);
    printf("%d\n", count(arr, 7, n));
    return 0;
}
