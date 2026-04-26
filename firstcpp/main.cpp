#include <iostream>
using namespace std;

int main(){
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "voce tem " << idade << " anos" << endl;
    if (idade >= 18){
        cout << "voce e maior de idade" << endl;
    } else{
        cout << "voce e menor de idade" << endl;
    }
    
    return 0;
}