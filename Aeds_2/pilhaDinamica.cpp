//#include <cstddef>
#include <iostream>
#include <cstdlib>

using namespace std;

class No {
    public:
    int valor;
    No *ant;
    No();
};

No::No (){
    valor = 0;
    ant = NULL;
}

class Pilhad{
    private:
    int qtd;
    No *topo;

    public:
    Pilhad();
    ~Pilhad();
    void desempilhar();
    void empilhar(int valor);
    void imprimir ();

};


Pilhad::Pilhad(){
    qtd = 0;
    topo = NULL;
}

Pilhad::~Pilhad(){
    while (qtd > 0)
    {
        desempilhar();
    }
    
}

void Pilhad::empilhar(int valor){
    No *nodo = new No();
    nodo->valor = valor;
    if (qtd == 0){
        topo = nodo;
        
    }else{
        nodo->ant =  topo;
        topo = nodo;
    }
    qtd++;
}

void Pilhad::desempilhar(){
    if (qtd > 0){
        No *aux= topo;
        if(qtd == 1){
            topo = NULL;
        }else {
            topo = topo->ant;
        }
        delete aux;
        qtd--;
    }else {
        cout << "Pilha vazia";
    }
}

void Pilhad::imprimir(){
    if(qtd > 0){
        No *aux = topo;
        if(aux != NULL){

            for(int i = qtd; i > 0; i--){
                
                cout << "|" << aux->valor << "|" << endl;
                aux = aux->ant;

            }
            
        }
    }else{
        cout << "Pilha Vazia";
    }
}

int main(int argc, char const *argv[])
{   
    int opcao = 0;
    Pilhad *pilhaDina = new Pilhad();
    No *noEntrada = new No();
    do{
        cout << "Selecione uma das opcoes: \n 1 - Empilhar \n 2 - Desenpilhar \n 3 - Imprimir \n 4 - Sair \n";
        cin >> opcao;
        cout << endl;

        if(opcao == 1){
            cout << "Digite o valor que deseja empilhar: \n";
            cin  >>  noEntrada->valor;
            pilhaDina->empilhar(noEntrada->valor);

        }else if (opcao == 2) {
                pilhaDina->desempilhar();

        }else if (opcao == 3) {
            pilhaDina->imprimir();
            
        }else if (opcao > 4 || opcao < 1){
            cout << "Digite uma opção valida \n";
        }
    }while(opcao != 4);

    delete pilhaDina;
    return 0;
}




