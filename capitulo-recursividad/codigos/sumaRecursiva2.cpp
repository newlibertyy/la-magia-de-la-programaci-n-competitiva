#include <bits/stdc++.h>
using namespace std;
int sumaRecursiva(int actual, int n){
    //Caso base
    if(actual==n){
        return actual;
    }else{
        return actual + sumaRecursiva(actual+1,n);
    }
}
int main(){
    cout<<sumaRecursiva(0,10)<<endl;
}
