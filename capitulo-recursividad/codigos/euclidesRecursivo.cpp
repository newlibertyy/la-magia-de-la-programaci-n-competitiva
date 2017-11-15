#include <bits/stdc++.h>
using namespace std;
int euclides(int a,int b){
    if(b==0)return a;
    return euclides(b,a%b);
}
int main(){
    cout<<euclides(150,180)<<endl;

}
