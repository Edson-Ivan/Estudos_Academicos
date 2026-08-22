import java.util.ArrayList;

public class Agenda {
    ArrayList <Pessoa>caderneta; // Criação do objeto lista

    public Agenda(){
        caderneta = new ArrayList<>();  // Instanciado o objeto "caderneta" e chamando o o objeto "new Array list<>"
    }

    public void adicionarPessoa (Pessoa p){
        caderneta.add(p);
    }

    public void imprimir(){
        //FOREACH
        for(Pessoa p: caderneta){
            p.imprimirPessoa();
        }
      /*
        for(int i=0; i<caderneta.size(); i++){ // Size - tamanho da lista - vem da class ArrayList
            caderneta.get(i); //Get : recupera uma posição da lista - vem da class ArrayList
        }
      */

    }
}



// ArrayList aceita somente tipos abstratos
//Wrapper Class : Classes de embrulho = int = Interger

/* conversão
* interger.parseInt(string)
* Float.parseFloat(string)
* */


//lista = new ArrayList<>(); // Instanciação