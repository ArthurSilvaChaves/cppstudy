#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Todolist{
    string nometarefa;
    int dia;
    int mes;
    bool status;
};

int main(){
    vector<Todolist> tarefas;
    
    while (true)
    {
        int escolha;

        cout << "1.listar tarefas" << endl << "2.adicionar tarefa" << endl << "3.remover tarefa" << endl << "4.marcar como tarefa feita" << endl << "5.sair" << endl << "escolha: ";
        cin >> escolha;

        if(escolha == 1){
            if(tarefas.size() <= 0){
                cout << "adicione uma tarefa" << endl;
            } else{
                for(int i = 0;i < tarefas.size();i++){
                    cout << "--------------------------" << endl;
                    cout << i+1 <<  "." << endl;
                    cout << "tarefa: " << tarefas[i].nometarefa << endl;
                    if (tarefas[i].dia >= 10){
                        cout << "dia: " << tarefas[i].dia;
                    } else{
                        cout << "dia: " << "0" << tarefas[i].dia;
                    }  

                    if (tarefas[i].mes >= 10){
                        cout << "/" << tarefas[i].mes << endl;
                    } else{
                        cout << "/" << "0" << tarefas[i].mes << endl;
                    }
                    cout << "status: " << (tarefas[i].status ? "completa":"nao completa") << endl;
                }
                cout << "--------------------------" << endl ;
            }
            
        } else if (escolha == 2){
            string novatarefanome;
            int novatarefadia;
            int novatarefames;

            cout << "insira o nome da nova tarefa: ";
            cin.ignore();
            getline(cin,novatarefanome);

            cout << "insira o dia de termino: ";
            cin >> novatarefadia;

            cout << "insira o mes de termino: ";
            cin >> novatarefames;

            tarefas.push_back({novatarefanome,novatarefadia,novatarefames,false});

            cout << "tarefa criada com sucesso!" << endl;
        } else if(escolha == 3){
            int indice;
            int index;
            cout << "insira o numero da tarefa para apagar: ";
            cin >> indice;

            if(indice >= 1 && indice <= tarefas.size()){
                
            } else{
                cout << "escolha um valor valido(esta tarefa nao existe)" << endl;
            }

        } else if(escolha == 4){

        } else if(escolha == 5){
            cout << "saindo..." << endl;
            break;
        } else{

        }
        
    }
    
}