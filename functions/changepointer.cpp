#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct User{
    string nome;
    int idade;
    string cargo;
};

void aniversario(User* u){
    u->idade++;
}

int main(){
    vector<User> users;

    users.push_back({"Arthur",16,"estagio"});
    users.push_back({"Roberto",18,"auxiliar"});

    for(int i = 0;i < users.size();i++){
        cout << "-------------------" << endl;
        cout << "indice: " << i+1 << endl;
        cout << "nome: " << users[i].nome << endl;
        cout << "idade: " << users[i].idade << endl;
        cout << "cargo: " << users[i].cargo << endl; 
    }

    cout << "-------------------" << endl;


    int index;
    cout << "insira o indice do funcionario para aumentar a idade em um ano: ";
    cin >> index;

    if(index >= 1 && index <= users.size()){
        aniversario(&users[index - 1]);
    } else{
        cout << "insira um valor valido" << endl;
    }

    for(int i = 0;i < users.size();i++){
        cout << "-------------------" << endl;
        cout << "indice: " << i+1 << endl;
        cout << "nome: " << users[i].nome << endl;
        cout << "idade: " << users[i].idade << endl;
        cout << "cargo: " << users[i].cargo << endl; 
    }

    cout << "-------------------" << endl;

}