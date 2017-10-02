#include <bits/stdc++.h>
using namespace std;
int euclides(int a,int b){
    int temporal = a;
    while(a>0){
        temporal = a;
        a = b%a;
        b = temporal;
    }
    return b;
}
int main(){
    cout<<euclides(150,170)<<endl;

}
