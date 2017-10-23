#include <stdio.h>
struct Complejo{
    int a, b;
    Complejo(int _a, int _b) {
        a = _a, b = _b;
    }
    Complejo operator*(const Complejo& x) const {
        Complejo resultado(this->a*x.a - this->b*x.b, this->a*x.b + this->b*x.a);
        return resultado;
    }
    Complejo operator^(const int& n) const {
        Complejo resultado(1,0), base = *this;
        int exponente = n;
        while(exponente) {
            if(exponente&1)	resultado = resultado * base;
            exponente = exponente>>1, base = base * base;
        }
        return resultado;
    }
};
int main(){
    int a,b,exponente;
    while (scanf("%d %d %d", &a, &b, &exponente) == 3) {
        Complejo base(a,b);
        Complejo resultado = base ^ exponente;
        printf("%d %d \n", resultado.a,resultado.b);
    }
}
