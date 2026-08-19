#include <cstddef>
#include <iostream>
#include <cstdlib>

using namespace std;


class No {
    public:
    int valor;
    No *prox;
    No();
};

No::No(){
    valor = 0;
    prox = NULL;
}

class filaD{
    private:
    int qtd;
    No *ini;
    No *fim;

    public:
    filaD();
    ~filaD();
     void entrarFila(int valor);
     void sairFila();
     void imprimir();
};

filaD::filaD(){
    qtd = 0;
    ini = NULL;
    fim = NULL;
}

//Destrutor

filaD::~filaD(){
    while (qtd != 0)
    {
        sairFila();
    }
    
}

void filaD::entrarFila(int valor){
    No *nodo = new No();
    nodo->valor = valor;       
    nodo->prox = NULL;

    
    if(qtd == 0){
        ini = nodo;
        fim = nodo; 
           
    }else{
        fim->prox = nodo;
        fim = nodo;
    }

    qtd++;

}

void filaD::sairFila(){
    if(ini == NULL){
        cout << "Fila vazia" << endl << endl;
        
    }else if (ini != NULL){
        No *aux = ini;

            if (qtd == 1){
                ini = NULL;
                fim = NULL;

             }else {
                    
                    ini = ini->prox;

                }
        delete aux;
        qtd--;
        
        
    }
}

void filaD::imprimir(){
    if (qtd > 0)
    {   
        No *aux = ini;
        if(aux != NULL){
            for(int i=qtd; i>0; i--){
                cout << "|" << aux->valor << "|" << endl;
                aux = aux->prox;
            }
        }
    
    }else {
        cout << "Pilha vazia" << endl << endl;
    }
    
}







int main()
{   
    filaD *filaDina = new filaD();
    int opcao = 0;
    int valor = 0;

    do{
        cout << endl << "1 - Adicionar a fila " << endl << "2 - Remover da fila" << endl << "3 - Imprimir" << endl << "4 - sair " << endl << "Selecione uma das opcoes: ";
        cin  >> opcao;
        cout << endl;
        if(opcao == 1){
            cout << "Digite um valor para adiconar a fila "<< endl;
            cin >> valor;
            filaDina->entrarFila(valor);

        }else if (opcao == 2){
            filaDina->sairFila();

        }else if (opcao == 3){
            filaDina->imprimir();
        }

    }while (opcao != 4);
    
    delete filaDina;
    
    return 0;
}


