public class Palavra {
    public String termo;
    public String[] significado;
    public int quantSignifcado;

    public Palavra(String termo, int quantSignifcado){
        this.termo = termo; //This faz referencia ao termo da class, termo sem o this e o do metodo;
        this.quantSignifcado = quantSignifcado;
        significado = new String[this.quantSignifcado];
    }
    public void incluiSignificado(String significado){
        int i=0;
        for(i=0; i<quantSignifcado; i++){
                if(this.significado[i] != null){ // isBlanck confirma se tem algum dados escritp na posição inemply valida se
                    this.significado[i] = significado;
                    break;
                }
        }
    }

    public void alteraSignificado(String significado, int posicao){
        this.significado[posicao] = significado;
    }
}
