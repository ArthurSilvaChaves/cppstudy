#include <iostream>

#include <vector>

using namespace std;

struct Trilha {
    string nome;
    vector<string> anotacoes;
};

int main() {
    cout << "BEM VINDO AO SUPER STUDY TERMINAL" << endl;

    vector<Trilha> trilhas;

    while(true) {
        cout << "1. ver trilhas" << endl << "2. ver uma trilha completa" << endl << "3. criar nova trilha" << endl << "4. deletar trilha" << endl << "5. continuar tilha" << endl << "6. sair" << endl << ">>> ";

        int op;
        cin >> op;

        if(op == 1) {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "Ver trilhas" << endl;
            if (trilhas.size() == 0) {
                cout << "nenhuma trilha criada; voce pode comecar uma trilha na opcao 3" << endl;
            } else {
                for (size_t i = 0;i < trilhas.size();i++) {
                    cout << i+1 << "." << trilhas[i].nome << endl;
                }
            }
            cout << "---------------------------------------------------------------------" << endl;
        } else if (op == 2) {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "Ver uma trilha completa" << endl;

            int indiceTrilha;
            cout << "indice da trilha: ";
            cin >> indiceTrilha;

            indiceTrilha--;

            if(indiceTrilha < 0 || indiceTrilha >= trilhas.size()) {
                cout << "valor invalido" << endl;
            } else {
                cout << trilhas[indiceTrilha].nome << endl;

                if(trilhas[indiceTrilha].anotacoes.empty()) {
                    cout << "sem anotacoes" << endl;
                } else {
                    for(size_t i = 0;i < trilhas[indiceTrilha].anotacoes.size();i++){
                        cout << i+1 << "." << trilhas[indiceTrilha].anotacoes[i] << endl;
                    }
                }

            }

            cout << "---------------------------------------------------------------------" << endl;
        } else if (op == 3) {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "Criar nova trilha" << endl;

            string novonometrilha;
            
            cout << "nome da trilha: ";

            cin.ignore();
            getline(cin,novonometrilha);

            trilhas.push_back({novonometrilha, {}});

            cout << "---------------------------------------------------------------------" << endl;
        } else if (op == 4) {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "Deletar trilha" << endl;
            cout << "---------------------------------------------------------------------" << endl;
        } else if (op == 5) {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "Continuar trilha" << endl;
            cout << "---------------------------------------------------------------------" << endl;
        } else if (op == 6) {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "Sair" << endl;
            cout << "---------------------------------------------------------------------" << endl;
            break;
        } else {
            cout << "---------------------------------------------------------------------" << endl;
            cout << "Opção inválida" << endl;
            cout << "---------------------------------------------------------------------" << endl;
        }

    }

}
