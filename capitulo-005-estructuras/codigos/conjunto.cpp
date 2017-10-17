#include<bits/stdc++.h>

using namespace std;

int main(){
    set<string> palabrasFavoritas;
    string palabra;
    cout<<"inserte una palabra a tus favoritas, escriba 0 para terminar"<<endl;
    cin>>palabra;
    while(palabra!="0"){
        palabrasFavoritas.insert(palabra);
        cout<<"inserte una palabra a tus favoritas, escriba 0 para terminar"<<endl;
        cin>>palabra;
    }
    cout<<"pregunte por una palabra para saber si esta entre tus favoritas, escriba 0 para terminar"<<endl;
    string pregunta;
    cin>>pregunta;
    while(pregunta!="0"){
        if(palabrasFavoritas.count(pregunta)){
            cout<<"esta entre las favoritas"<<endl;
        }else{
            cout<<"no esta entre las favoritas"<<endl;
        }
        cout<<"pregunte por una palabra para saber si esta entre tus favoritas, escriba 0 para terminar"<<endl;
        cin>>pregunta;
    }
}
