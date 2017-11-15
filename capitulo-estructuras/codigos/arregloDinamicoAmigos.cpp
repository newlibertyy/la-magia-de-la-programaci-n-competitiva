#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> amigos;
    vector<string> regalos;
    string amigo,regalo;
    cout<<"ingrese todos sus amigos, uno por uno , si ya termino ingrese 0"<<endl;
    while(cin>>amigo){
        if(amigo=="0")break;
        amigos.push_back(amigo);
    }
    cout<<"ingrese todos los regalos, uno por uno , si ya termino ingrese 0"<<endl;
    while(cin>>regalo){
        if(regalo=="0")break;
        regalos.push_back(regalo);
    }

    for(int i=0;i<amigos.size();i++){
        for(int j=0;j<regalos.size();j++){
            cout<<"le regalo un "<<regalos[j]<<" a "<<amigos[i]<<endl;
        }
    }
}
