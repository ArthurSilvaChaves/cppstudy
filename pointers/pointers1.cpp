//alterar dados fora da função
#include <iostream>

using namespace std;

void metade(double* x){
    *x /= 2;
    cout << *x << endl;
}

int main(){
    double a;
    cout << "insira um numero para saber a metade: ";
    cin >> a;

    metade(&a);
}