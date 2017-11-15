#include<bits/stdc++.h>
using namespace std;

int dp[100][100];
int w[100];
int v[100];
int mochila(int i,int j){
    //casos base
    if(i==0)return 0;
    if(dp[i][j]==0){
        dp[i][j] = mochila(i-1,j);
        if(j>=w[i]){
            dp[i][j] = max(mochila(i-1,j),mochila(i-1,j-w[i])+v[i]);
        }
    }
    return dp[i][j];
}

int main(){
    memset(dp,0,sizeof(dp));
    memset(w,0,sizeof(w));
    memset(v,0,sizeof(v));
    w[1]=4;v[1]=12;
    w[2]=6;v[2]=10;
    w[3]=5;v[3]=8;
    w[4]=7;v[4]=11;
    w[5]=3;v[5]=14;
    w[6]=1;v[6]=7;
    w[7]=6;v[7]=9;
    cout<<mochila(3,9)<<endl;
}
