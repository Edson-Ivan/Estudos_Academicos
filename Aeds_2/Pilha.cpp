#include <iostream>
#include <cstdlib>
using namespace std;

class PilhaE{
    private:
        int topo;
        int pilha[5];

    public:
        PilhaE(); // \Nao possui metodo de retorno
        ~PilhaE();
        void imprimir();
        void addPilha(int valor);
        void removePilha();
        void invertePilha();
        PilhaE intercalarPilhas(PilhaE sugundaPilha);


};

PilhaE::PilhaE()
{
    topo = 0;

    for(int i =0; i<5; i++)
    {
        pilha[i] = 0;
    }

        
}

PilhaE::~PilhaE(){
    while (topo>0)
    {
        removePilha();
    }
    
}

void PilhaE::addPilha(int valor){
    if(topo<5){
       pilha[topo] = valor;
       topo++;
    }else{
        cout << "Pilha cheia" << endl;
    }
}



void PilhaE::removePilha(){
    if(topo>0){
        topo--;
        pilha[topo] = 0;
        
    }else{
        cout << "Pilha vazia" << endl;
    }
}

void PilhaE::invertePilha(){

    if(topo == 0 || topo == 1){
        cout << "Pilha vazia ou apenas com um elemento **IMPOSSIVEL INVERTER**" << endl;
    }else{
        int aux=0;
        int j=topo-1;
        
        for(int i=0; i < topo/2; i++){
            
            aux = pilha[j];
            pilha[j] = pilha[i];
            pilha[i] = aux;
            j--;
            
        }
    }

}

PilhaE PilhaE::intercalarPilhas(PilhaE segundaPilha){
    PilhaE terceiraPilha ;

    int contP1 = 0;
    int contP2 = 0;

    for(int i=0; i<(this->topo+segundaPilha.topo); i++){

        if(contP1>=this->topo && contP2>=segundaPilha.topo){
            break;
        }else{
            if(i%2 == 0 && contP1<this->topo){
                terceiraPilha.addPilha(this->pilha[contP1]);
                contP1++;
            }else if (contP1<segundaPilha.topo){
                terceiraPilha.addPilha(segundaPilha.pilha[contP2]);
                contP2++;
            }
        }
        
        
    }
    return terceiraPilha;
}
    


void PilhaE::imprimir(){
    if(topo > 0){
        for(int i=0; i<topo; i++){
        cout << "|" << pilha[i] <<"|" << endl; 
        }  
    }else{
        cout << "Pilha vazia" << endl;
    }
    
}

int main(){
    PilhaE pilhaEstatica;
    int opcao=0;
    int valor=0;

    do
    {
        cout << "0 - Sair" << endl <<
                "1 - Adicionar valor a pilha" << endl <<
                "2 - Remover valor da pilhaF" << endl <<
                "3 - Imprimir Pilha" << endl <<
                "4 - Inverter Pilha" << endl <<
                "5 - Intercalar pilhas" << endl <<
                "Selecione uma das opcoes a cima: ";
        cin >> opcao;
        cout << endl;

        if(opcao == 1){
            cout << "Digite o valior que deseja adicionar: ";
            cin >> valor;
            cout << endl;

            pilhaEstatica.addPilha(valor);

        }else if(opcao == 2){
            pilhaEstatica.removePilha();
    
        }else if(opcao == 3){
            pilhaEstatica.imprimir();
        }else if(opcao == 4){
            pilhaEstatica.invertePilha();
        }else if (opcao == 5){
            PilhaE segundaPilha;
            int opcao2 = 0;
            
            do{
                cout << "0 - Sair" << endl <<
                "1 - Adicionar valor a segunda pilha" << endl <<
                "2 - Remover valor da segunda pilhaF" << endl <<
                "3 - Imprimir segunda Pilha" << endl <<
                "4 - Inverter segunda Pilha" << endl <<
                "5 - Intercalar pilhas" << endl <<
                "Selecione uma das opcoes a cima: ";
                cin >> opcao2;
                cout << endl;

                if(opcao2 == 1){
                    cout << "Digite o valior que deseja adicionar: ";
                    cin >> valor;
                    cout << endl;

                    segundaPilha.addPilha(valor);

                }else if(opcao2 == 2){
                    segundaPilha.removePilha();
                }else if(opcao2 == 3){
                    segundaPilha.imprimir();
                }else if(opcao2 == 4){
                    segundaPilha.invertePilha();
                }else if(opcao2 == 5){
                    PilhaE terceiraPilha = pilhaEstatica.intercalarPilhas(segundaPilha);
                    cout << "Pilhas intercaladas" << endl;
                    terceiraPilha.imprimir();
                }else if (valor < 0 || valor > 5){
                    cout << "Valor invalido"<< endl;
                }

            }while (opcao2 != 0);
        }else if (valor < 0 || valor > 5){
            cout << "Valor invalido"<< endl;
        }

    } while (opcao != 0);
    
    

    return 0;
}