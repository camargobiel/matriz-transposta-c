#include <stdio.h>
#include <iostream>

int main(){

    using namespace std;

    int t;
    cout << "Digite o tamanho da matriz quadrada: ";
    cin >> t;

    int matriz[t][t];

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            printf("Digite o elemento %d%d da matriz: ", i,j);
            cin >> matriz[i][j];
        }
    }

    cout << "\n\nMatriz digitada: \n\n";
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            cout << matriz[i][j] << " ";
            if(j==t-1){
                cout << "\n";
            }

        }
    }

    cout << "\n\nMatriz transposta: \n\n";
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            cout << matriz[j][i] << " ";
            if(j==t-1){
                cout << "\n";
            }

        }
    }

    return 0;
}
