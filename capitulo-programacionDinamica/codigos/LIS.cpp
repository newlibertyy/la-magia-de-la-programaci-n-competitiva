#include<bits/stdc++.h>
using namespace std;
int a[] = {-7,10,9,2,3,8,8,1};
int memorizacion[100];
int LIS(int i){
    if(i==0)return 1;
    if(memorizacion[i]!=0)return memorizacion[i];
    int maximo = 1;
    for(int j=0;j<i;j++){
        if(a[j]<a[i]){
            maximo = max(maximo,LIS(j)+1);
        }
    }
    memorizacion[i] = maximo;
    return memorizacion[i];
}
int main(){
    for(int i=0;i<8;i++){
        cout<<LIS(i)<<endl;
    }
}
