#include <bits/stdc++.h>
using namespace std;

int memorizacion[100];
int fibonacci(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    if(memorizacion[n]==0){
        memorizacion[n] = fibonacci(n-1) + fibonacci(n-2);
    }
    return memorizacion[n];
}
int main(){
    for(int i=0;i<10;i++){
        cout<<fibonacci(i)<<endl;
    }
}
