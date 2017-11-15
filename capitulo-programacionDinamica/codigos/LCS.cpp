#include<bits/stdc++.h>
using namespace std;
string a;
string b;
int memorizacion[100][100];
int lcs(int i,int j){
    int m = b.size()-1;
    int n = a.size()-1;
    if(j==m+1)return 0;
    if(i==n+1)return 0;
    if(memorizacion[i][j]!=0)return memorizacion[i][j];
    int maximo = max(lcs(i+1,j),lcs(i,j+1));
    if(a[i]==b[j]){
        maximo = max(maximo,1+lcs(i+1,j+1));
    }
    memorizacion[i][j] = maximo;
    return memorizacion[i][j];
}
int main(){
    a = "ABCD";
    b = "ACDB";
    cout<<lcs(0,0)<<endl;
}
