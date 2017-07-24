#include <bits/stdc++.h>
using namespace std;

int main(){
    string amigos[5] = {"ana","brian","cesar","daniel","eliana"};
    string regalos[3] = {"abrazo","reloj","perfume"};

    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<"le regalo un "<<regalos[j]<<" a "<<amigos[i]<<endl;
        }
    }
}
