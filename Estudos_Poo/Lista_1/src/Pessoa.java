public class Pessoa{
    public String nome;
    public Contato[] contatos;

    public Pessoa(){
        nome = "";
        contatos = new Contato[6]; // cada possição nula pois nao foi instanciado
    }

    public void adicionarContato(Contato c){
        for (int i=0; i < contatos.length; i++){
            if(contatos[i] == null){
                contatos[i] = c;
                break;
            }
        }
    }

    public void imprimirPessoa(){
        String impressao = "Nome: " + nome + "\n";
        //FOR EACH criar um objeto temporario e vai andando ate encontrar null
        for(Contato temp:contatos){
            if(temp != null){
                impressao += temp.retornaDaos() + "\n";
            }
            // OU COM FOR
            /*
            for(int i=0; i< contatos.length; i++){
            if(contatos[i]!= null)
                impressao += contatos[i].retornaDados()+ "\n";
             }
             */
            System.out.println(impressao);

        }

    }
};


