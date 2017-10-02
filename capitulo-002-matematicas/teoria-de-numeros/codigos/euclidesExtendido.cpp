#include <bits/stdc++.h>
using namespace std;
int x,y,d;
void euclidesExtendido(int a, int b) {
    //caso base
	if (b == 0) {
        x = 1;
        y = 0;
        d = a;
        return;
    }
	euclidesExtendido(b, a % b);
	int x1 = y;
	int y1 = x - (a / b) * y;
	x = x1;
	y = y1;
}

int main(){
    euclidesExtendido(20,10);
    cout<<x<<" "<<y<<endl;
}
