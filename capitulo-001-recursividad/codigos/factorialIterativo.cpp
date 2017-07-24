#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0)return 1;
    int resultado = 1;
    for(int i=n;i>=1;i--){
        resultado*=i;
    }
    return resultado;
}
int main(){
    cout<<factorial(5)<<endl;
}
