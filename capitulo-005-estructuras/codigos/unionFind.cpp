#include <bits/stdc++.h>
using namespace std;

//1000 es el limite de elementos, puede modificarse
vector<int> pset(1000); //padre del elemento i
void inicializarConjuntos(int N) {
    pset.assign(N, 0);
    for (int i = 0; i < N; i++){
        pset[i] = i;
    }
}
int consultar(int i) {
    if(pset[i]==i){
        return i; //si ya es el ancestro lo retorna.
    }else{
        pset[i] = consultar(pset[i]); //si no es el ancestro, hace que su papa sea su ancestro y lo retorna
        return pset[i];
    }
}
bool evaluar(int i, int j) {
    return consultar(i) == consultar(j); //si tienen el mismo ancestro retorna true, si no false.
}

void unionSet(int i, int j) {
    if (!evaluar(i, j)) { //si no son el mismo conjunto, consulta el ancestro de i y de j, luego hace que el padre del ancestro de i sea el ancestro de j
        pset[consultar(i)] = consultar(j);
    }
}

int main() {
  printf("asumimos 5 elementos en 5 conjuntos diferentes al empezar\n");
  inicializarConjuntos(5); // create 5 disjoint sets
  unionSet(0, 1);
  unionSet(0, 2);
  unionSet(3, 1);
  printf("consultar(A) = %d\n", consultar(0));
  printf("consultar(B) = %d\n", consultar(1));
  printf("consultar(C) = %d\n", consultar(2));
  printf("consultar(D) = %d\n", consultar(3));
  printf("consultar(E) = %d\n", consultar(4));
  printf("evaluar(A, E) = %d\n", evaluar(0, 4));
  printf("evaluar(A, B) = %d\n", evaluar(0, 1));

  return 0;
}
