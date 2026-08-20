public class Contato {
    public String tipoContato;
    public String informacao;

    public Contato(String tipoContato, String informacao){
        this.tipoContato = tipoContato;
        this.informacao = informacao;
    }

    public String retornaDaos(){
        return tipoContato + ": " + informacao;
    }
}
