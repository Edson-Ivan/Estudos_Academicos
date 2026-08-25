#include <cstdlib>
#include <iostream>

class No{
    public:
        int valor;
        No *ant;
        No *prox;
        No();
};

No::No(){
    valor = 0;
    ant = NULL;
    prox = NULL;
}

class listaD{
    private:
        No *ini;
        No *fim;
        int qtd;

    public:
        listaD();
        ~listaD();
        void inserirLista(int valor);
        void removerLista(int valor);
        void imprimir();

};

listaD::listaD(){
    ini = NULL;
    fim = NULL;
    qtd = 0;
}

listaD::~listaD(){
    while (ini != NULL)
    {
        removerLista(ini->valor);
    }   
}

void listaD::inserirLista(int valor){
    No *novo = new No();
    novo->valor = valor;
    int i =0;

    if(qtd == 0)
    {
        ini->ant = novo;
        fim->ant = novo;
        novo->prox = novo;
    
    }else if(qtd > 0);
        {
            for (i=0; valor)
            {

            }

        }
        qtd++;
}

void listaD::removerLista(int valor){

}


void listaD::imprimir(){


}

int main (){
    

    return 0;
}