#include<bits/stdc++.h>
using namespace std;
void printKMax(long long int arr[], long long int n, long long int k)
{   deque<long long int>  Qi(k);
    long long int i;
    for (i = 0; i < k; ++i)
    {   while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
    for ( ; i < n; ++i)
    {   cout << arr[Qi.front()] << " ";
        while ( (!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front();
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
    cout << arr[Qi.front()];
}
int main()
{   ios_base::sync_with_stdio(0);
    long long int x,i,n,k;
    cin>>n;
    long long int v[n];
    for(i=0;i<n;i++)
    {   cin>>v[i];
    }
    cin>>k;
    printKMax(v, n, k);
    return 0;
}
