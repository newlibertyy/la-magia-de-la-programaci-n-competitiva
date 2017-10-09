#include<bits/stdc++.h>
using namespace std;

int memorizacion[100][100];
int coeficienteBinomial(int n,int k){
    //casos base
    if(n>=0 && k==0)return 1;
    if(k>0 && n==0)return 0;
    if(memorizacion[n][k]==0){
        memorizacion[n][k] = coeficienteBinomial(n-1,k-1)+coeficienteBinomial(n-1,k);
    }
    return memorizacion[n][k];
}

int main(){
    cout<<coeficienteBinomial(5,3)<<endl;
}
