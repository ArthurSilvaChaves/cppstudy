#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    //criar vetores(arrays dinamicos)
    vector<string> users = {"Arthur","Bruno","Chester"};
    vector<int> age = {16,20,50};
    vector<bool> status = {true,true,false};

    //loop principal do app/menu
    while(true){
        int escolha;

        cout << "1. see users infos" << endl << "2. add user"<< endl << "3. delete infos" << endl << "4. exit" << endl << "what do you want to do: ";
        cin >> escolha;
        
        //se o usuario escolher ver os usuarios existentes
        if(escolha == 1){
            for(int i = 0;i < users.size(); i++){
                cout << "---------------------------------" << endl;
                cout << "id: " << i+1 << endl;
                cout << "user: " << users[i] << endl;
                cout << "age: " << age[i] << endl;
                cout << "status: " << (status[i] ? "active":"non active") << endl;
            }
            cout << "---------------------------------" << endl;
        //se o usuario escolher criar um usuario
        } else if (escolha == 2){
            string newuser;
            int newage;
            string newstatus;

            cout << "add new user name: ";
            cin >> newuser;

            cout << "add new user age: ";
            cin >> newage;

            cout << "add a new user status(y/n): ";
            cin >> newstatus;

            if(newstatus == "y"){
                status.push_back(true);

                users.push_back(newuser);
                age.push_back(newage);
            } else if (newstatus == "n"){

                users.push_back(newuser);
                age.push_back(newage);
                status.push_back(false);
            } else{
                cout << "value not accepted" << endl;
            }
        //se o usuario escolher remover um usuario existente
        } else if (escolha == 3){
            int escolhaindice;

            cout << "enter the user id to remove: ";
            cin >> escolhaindice;

            if (escolhaindice >= 1 && escolhaindice <= users.size()){
                users.erase(users.begin() + escolhaindice - 1);
                age.erase(age.begin() + escolhaindice - 1);
                status.erase(status.begin() + escolhaindice - 1);
            } else{
                cout << "choose a valid id" << endl;
            }
        //se o usuario quiser sair
        } else if (escolha == 4){
            break;
        //se o usuario nao escolher nenhum numero de 1 ate 4
        } else{
            cout << "choose a valid option" << endl;
        }
    }
    return 0;
}