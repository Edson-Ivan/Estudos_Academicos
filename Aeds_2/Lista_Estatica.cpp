#include <iostream>
#include <cstdlib>

using namespace std;

class listaE{
    private:
        int qtd;
        int dados[5];
    

    public:
        int valor;
        int fim;
        listaE();
        //~listaE();
        void inserirLista(int valor);
        void removerLista(int valor);
        void imprimir();
        
};

listaE::listaE(){
    valor = 0;
    fim = 0;
    qtd = 0;

    for (int i = 0; i < 5; i++){
        dados[i] = 0;
    }
}


void listaE::inserirLista(int valor){
    if(qtd < 5){
        if(qtd == 0){
        dados[0] = valor;

         }else {
            int i, j = 0;
            for(i = 0; i < qtd && dados[i] < valor; i++){}

            for(j = --qtd; j >= i; j-- ){
                dados[j+1] = dados[j];

            }
            dados[i] = valor;
            qtd ++;
         }
        qtd++;
    }else{
        cout << "***** Lista cheia *****" << endl;
    }
}
void listaE::removerLista(int valor){
    if(qtd != 0){
        int i=0, j=0;
        for(i=0; i < qtd && dados[i] != valor; i++){}
        if(i != qtd){
            for(j = i; j < qtd-1; j++){
                dados[j] = dados[j+1];
            }
            qtd--;

        }else {
            cout << "***** O valor nao esta na lista *****" << endl;
        }
    }else{
        cout << "***** Lista vazia *****" << endl;
    }
}
void listaE::imprimir(){
    if(qtd >0){
        for(int i=0; i<qtd; i++){
            cout << "|" << dados[i] << "|";
        }
        cout << endl;
    }else{
        cout << "***** Lista vazia *****" << endl;
    }

}


int main(){
    int opcao;
    int valor = 0;
    listaE listaEstatica;

    do{
        cout << "1 - Inserir dados " << endl << "2 - Remover dados" << endl << "3 - Imprimir dados" << endl << "4 - Sair" << endl << "Selecione uma das opcoes: ";
        cin >> opcao;
        cout << endl;
        if (opcao == 1){
            cout << "Digite o valor que deseja inserir: ";
            cin >> valor;
            cout << endl;
            listaEstatica.inserirLista(valor);
        }else if (opcao == 2){
            cout << "Digite o valor que deseja remover: ";
            cin >> valor;
            cout << endl;
            listaEstatica.removerLista(valor);

        }else if(opcao == 3){
            listaEstatica.imprimir();
        }
    }while(opcao != 4);
    
    return 0;
}