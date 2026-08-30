import javax.swing.*;

public class Dicionario {
    public Palavra[] palavras;
    public int quantPalavras;

    public  Dicionario(int quantPalavras){
        this.quantPalavras = quantPalavras;
        palavras = new Palavra[this.quantPalavras]; //inicializando o vetor palavras
    }

    public void inserePalavra(Palavra palavra){
        for(int i=0; i<quantPalavras; i++){
            if(this.palavras[i] == null){ // como e um objeto criado e nao instanciado verifico se e null pois e um objs que aponta para o "nada"
                this.palavras[i] = palavra;
                break;
            }
        }
    }

    public void excluirPalavra(int posicao){
        palavras[posicao] = null;
    }

    public void imprimirDicionario(){

        if(quantPalavras >0){

            for(int i =0; i < quantPalavras && palavras[i] != null; i++){
                String sign = "";
                //System.out.println("Palavra: "+ palavras[i].termo +"\nSignificado: ");
                for(int j=0; j<palavras[i].quantSignifcado  && palavras[i].significado[j] != null; j++){
                    sign += palavras[i].significado[j] + ", ";
                }
                JOptionPane.showMessageDialog(null, "Palavra: "+ palavras[i].termo +"\nSignificado: "+ sign, "Dicionario", JOptionPane.INFORMATION_MESSAGE);
                //System.out.println(sign);

            }
        }
    }
}
