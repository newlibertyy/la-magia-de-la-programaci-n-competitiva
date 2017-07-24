#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    int a = 0;
    int b = 1;
    int c = a+b;
    for(int i=2;i<=n;i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
int main(){
    for(int i=0;i<10;i++){
        cout<<fibonacci(i)<<endl;
    }
}
