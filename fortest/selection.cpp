#include <iostream>
using namespace std;

void selectionSort(int vetor[],int tamanho){
    int i, j;
    int menor, temp;

    for(i = 0;i < tamanho;i++){
        menor = i;

        for(j = i + 1;j < tamanho;j++){
            
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }

        temp = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = temp;
    }

}

int main(){
    int vetor[] = {9,8,7,6,5,4,3,2,1};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    cout << "antes |";
    for(int i = 0;i < tamanho;i++){
        cout << " " << vetor[i];        
    }
    cout <<  "|" << endl;

    selectionSort(vetor,tamanho);


    cout << " depois|";
    for(int i = 0;i < tamanho;i++){
        cout << " " << vetor[i];
    }
    cout << "|" << endl;

}