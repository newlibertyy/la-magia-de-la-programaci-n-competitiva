#include <bits/stdc++.h>
using namespace std;
int sumaIterativa(int n){
    int resultado = 0;
    for(int i=1;i<=n;i++){
        resultado += i;
    }
    return resultado;
}
int main(){
    cout<<sumaIterativa(10)<<endl;
}
