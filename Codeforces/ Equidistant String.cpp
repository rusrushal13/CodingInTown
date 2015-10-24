#include<bits/stdc++.h>
using namespace std;
int main()
{   string a, b;
    cin>>a>>b;
    long int i, j ;
    long int counts = 0 ;
    int len_i = a.length();
    int len_j = b.length();
    for(i = 0 ; i < len_i ; i++ )
    {   if(a[i] != b[j])
            counts++;
        j++;
    }
    if(counts%2 != 0 )
        cout<<"impossible";
    else
    {   counts/=2;
        j = 0;
        for( i = 0 ; i < len_i; i++  )
        {   if(a[i] != b[j] && counts!= 0)
            {   a[i] = b[j];
                counts--;
            }
            j++;
        }
        cout<< a;
    }
return 0;
}
