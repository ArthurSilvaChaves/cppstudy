#include <iostream>
using namespace std;

int main(){
    for(int i = 2; i <= 10;i++){
        cout << "tabuada do " << i << endl;
        for(int j = 2;j <= 20;j++){
            cout << i << " x " << j << " = " << i*j << endl; 
        }
    }
    return 0;
}
