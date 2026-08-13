#include <iostream>
using namespace std;


void criar_fila(float fila[]);
void adicionar_fila(float fila[], int &final, int &ocupados, int valorEntrada);


int main (){
    float fila[5];
    int opcaoMenu = 0;
    int top = 0;
    int final = 0;
    int ocupados = 0; // variaveis auxiliar para definir qunatos campos do vetor esta sendo utilizados
    int valorEntrada = 0;

    criar_fila(fila);
    
    do{
        cout << "Digite a opção desejada : \n 1 - Adicionar na fila \n 0 - Sair";
        cin  >> opcaoMenu;

        if (opcaoMenu == 1) {
            cout << "Informe o valor que deseja adicionar :";
            cin  >> valorEntrada;

            adicionar_fila(fila, final, ocupados, valorEntrada);
        }
    }while (opcaoMenu != 0);
    
    return 0;
}



void criar_fila(float fila[]){
    for (int i=0; i<5; i++) {
        fila[i] = 0;
    }
}


void adicionar_fila(float fila[], int &final, int &ocupados, int valorEntrada){
    if (ocupados <= 5){
        fila[final] = valorEntrada; 
        ocupados++;
        if(final < 5){
            final++;
        }
        
    }
}