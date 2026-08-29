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
            String sign = "";
            for(int i =0;palavras[i] != null && i < quantPalavras; i++){
                System.out.println("Palavra: "+ palavras[i].termo +"\nSignificado: ");
                for(int j=0; palavras[i].significado[j] != null && j<palavras[i].quantSignifcado; j++){
                    sign += palavras[i].significado[j] + ", ";
                    System.out.println("teste 01");
                }
                System.out.println(sign);
                System.out.println("teste2");
            }
        }
    }
}
