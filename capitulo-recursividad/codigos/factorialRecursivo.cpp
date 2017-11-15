#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    //Caso base
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    cout<<factorial(5)<<endl;
}
