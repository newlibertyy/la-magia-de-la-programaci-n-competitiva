#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> enciclopedia;
    string decision;
    while(true){
        cout<<"\n\n ingrese \n 1->si encontro un animal. \n 2-> si desea consultar cuantas veces ha visto un animal"<<endl;
        cin>>decision;
        if(decision=="1"){
            cout<<"ingrese el nombre del animal que encontro"<<endl;
            string nombre;cin>>nombre;
            enciclopedia[nombre] = enciclopedia[nombre]+1;
        }else if(decision=="2"){
            cout<<"ingrese el nombre del animal que desea consultar la informacion"<<endl;
            string nombre;cin>>nombre;
            if(enciclopedia.count(nombre)<1){
                cout<<"no se tiene informacion de este animal"<<endl;
            }else{
                cout<<"\n la cantidad de veces que ha encontrado este animal es: "<<enciclopedia[nombre]<<endl;
            }
        }
    }
}
