#include<iostream>
#include<cstdlib>
#include<string.h>
 
using namespace std;
 
int main(){
    int _;
    cin>>_;
    while(_--){
 
        char a[100], op[2], opp[2], b[100], c[200];
        cin>>a>>op>>b>>opp>>c;
        int i, j, k;
        if(strchr(a, 'm')!=NULL){
            j = atoi(b);
            k = atoi(c);
            i = k - j;
        }
        else if(strchr(b, 'm')!=NULL){
            i = atoi(a);
            k = atoi(c);
            j = k - i;
        }
        else{
            i = atoi(a);
            j = atoi(b);
            k = i + j;
        }
        cout<<i<<" "<<op<<" "<<j<<" = "<<k<<endl;
    }
}
