#include <iostream>
using namespace std;

int main(){
    string user = "Arthur";
    string password = "123@lly";
    string inputuser;
    string inputpassword;

    cout << "enter your user: ";
    cin >> inputuser;

    cout << "enter your password: ";
    cin >> inputpassword;

    if(inputuser == user && inputpassword == password){
        cout << "acesso permitido" << endl;
    } else{
        cout << "acesso negado" << endl;
    }   
}