#include <iostream>
#include <string>

using namespace std;

int main(){
    string texto;
    cout << "insira o texto para fatorar: ";
    cin >> texto;

    char* p = &texto[0];

    //for que percorre com a memoria diretamente

    for(int i = 0;i < texto.size();i++){
        cout << *(p + i) << endl;
    }
}
