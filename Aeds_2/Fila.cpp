#include <iostream>
#include <cstdlib>
using namespace std;

class filaE{
    private:
        int qtd; // Quantidade
        int fila[5];

    public:
        int ini;
        int fim;
        filaE(); 
      //  ~filaE();
        void entrarFila(int valorEntrada);
        void sairFila();
        void imprimir();
        

};

filaE::filaE(){
    qtd = 0;
    ini = 0;
    fim = 0;
    for(int i=0; i<=5; i++){
        fila[i] = 0;
    }
}

void filaE::entrarFila(int valorEntrada){
    if(qtd < 5){
        if(fim < 5){
            fila[fim] = valorEntrada;
        }else{
                fim = 0;
                fila[fim] = valorEntrada;
            }
            qtd++;
            fim++;
           // cout << "depois de add "<< qtd << endl;
        
    }else{
        cout << "Fila cheia" << endl;
    }
}

void filaE::sairFila(){
    if(qtd > 0){
        if(ini < 5){
            fila[ini] = -1;
            cout << "O Ini esta em" << ini << endl;
           // cout << "Antes de sub "<< qtd << endl;

        }else{
            ini = 0;
            fila[ini] = -1;
            cout << "O Ini esta em" << ini << endl;
           // cout << "Antes de sub "<< qtd << endl;
        }

        ini++;
        qtd--;
        //cout << "depois de sub "<< qtd << endl;
    }else{
        cout << "Fila vazia" << endl;
    }
}

void filaE::imprimir(){
    
    if(qtd > 0 && qtd <= 5){
        if(ini > fim-1){
            //cout <<"Passou aqui em" << endl;
            int i = ini;

            while (i != fim-1)
            {
                
                if(i < 5){
                    cout << "|"<< fila[i] << "|" << endl;
                    i++;
                    
                }else{
                    for(i = 0; i<fim; i++){
                        cout << "|"<< fila[i] << "|" << endl;
                    }
                    i--;

                }
            }
            
        }else{
            for(int i=ini; i < fim; i++){
                cout << "|"<< fila[i] << "|" << endl;
            }
           // cout << "IMPRI 1" << endl;
            
        }
        
    }else{
        cout << "Pilha vazia" << endl;
    }

    
}


int main (void){
    filaE filaEstatica; //verificar ****
    int opcaoMenu = 0;
    int valorEntrada=0;
    
    
    do{
        cout << "1 - Inserir na fila " << endl << "2 - Remover da fila" << endl << "3 - Imprimir" << endl << "4 - Sair" << endl << "Selecione a opcao desejada :";
        cin  >> opcaoMenu;

        if (opcaoMenu == 1) {
            cout << "Informe o valor que deseja adicionar :";
            cin  >> valorEntrada;
            filaEstatica.entrarFila(valorEntrada);
   
        }else if(opcaoMenu == 2){
            filaEstatica.sairFila();
        }else if(opcaoMenu == 3){
            filaEstatica.imprimir();
        }
    }while (opcaoMenu != 4);
    
    return 0;
}

