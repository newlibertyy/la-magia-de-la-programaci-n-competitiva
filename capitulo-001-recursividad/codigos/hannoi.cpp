#include <bits/stdc++.h>
using namespace std;

void Hanoi(int disco, char origen, char intermedio, char destino){

  if(disco == 1){
    //caso base, solo movemos el disco a su destino
    cout << "Mover disco " << disco << " desde " << origen << " hasta " << destino << endl;
  }else{
    //movemos la parte superior al intermedio
    Hanoi(disco-1, origen,destino,intermedio);
    cout << "Mover disco " << disco << " desde " << origen << " hasta " << destino << endl;
    //movemos la parte superior al destino
    Hanoi(disco-1,intermedio,origen,destino);
  }
}

int main(){

  int discos;
  cout << "Ingrese la cantidad de discos: " << endl;
  cin >> discos;
  Hanoi(discos, 'A', 'B', 'C');

  system("pause");
}
