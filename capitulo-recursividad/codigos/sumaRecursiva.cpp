#include <bits/stdc++.h>
using namespace std;
int sumaRecursiva(int n){
    //Caso base
    if(n==1){
        return 1;
    }else{
        return n + sumaRecursiva(n-1);
    }
}
int main(){
    cout<<sumaRecursiva(10)<<endl;
}
