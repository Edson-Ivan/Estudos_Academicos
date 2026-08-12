#include <iostream>

using namespace std;

void inserirValor(float valor, float pilha[], int &top);
void removerValor(float pilha[], int &top);


int main()
{   
    float pilha [5];
    float valor = 0;
    int   top = 0;
    int opcao = 0;
    
        for (int i = 0; i <= 4; i++){
            pilha[i] = 0;
        }
        
        
        do{
            cout << " Selecione uma opção : \n 1 - Adicionar valor a pilha \n 2 - Remover valor da pilha \n 3 - Imprimir pilha \n 4 - Sair \n";
            cin >> opcao;
            
            if(opcao == 1){
                    cout << "Digite um valor para ser inserido ma pilha \n";
                    cin  >> valor;
                    inserirValor(valor, pilha, top);
                    
                }else if (opcao == 2) {
                        cout << "Removendo o ultimo valor adicionado \n";
                        removerValor(pilha, top);
                        
                    }else if (opcao == 3) {
                            for (int i = 0; i < top; i++){
                            cout <<pilha[i] <<"\n";
                            }
                    }else if (opcao <= 0 || opcao >= 5) {
                        cout << "Digite um valor valido \n";
                    }
                        
        }while(opcao != 4);
        
}


void inserirValor(float valor, float pilha[], int &top){
    if (top < 5){
        pilha[top] = valor;
        ++top;
        
        }else if (top == 5){
            cout << "******* pilha cheia ******* \n";

            }else{
                cout << "******* Erro *******\n";
             }
}


void removerValor(float pilha[], int &top){
    if (top > 0){
        top--;
        pilha[top] = 0;
    }else{
        cout << " ******* Pilha vazia ******* \n";
    }
}