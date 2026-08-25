import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Agenda agendaContatos = new Agenda();
        //Pessoa p = new Pessoa();

    int opcao = 0;

    do{
        System.out.println("1 - Inserir Pessoa \n" + "2 - Imprimir pessoa \n" + "3 - imprimir agenda \n" + "0 - Sair \n" +"Selecione uma das opcaoes: ");
        opcao = input.nextInt();
        switch (opcao){
            case 1->{
                Pessoa p = new Pessoa();
                System.out.println("Digite o nome da pessoa: ");
                p.nome = input.next();

                int opcao2 = 0; // variavrl para controle do 2 DoWhile;
                do{
                    System.out.println("Digite o tipo do contato: ");
                    String tipo = input.next();
                    System.out.println("Digite o numero do contatos");
                    String info = input.next();

                    Contato c = new Contato(tipo, info); // Iniciando o objeto Contato e instanciando, como o objeto possui duas passagem de parametros e necessario cria-los antes de utilizar;
                    p.adicionarContato(c);

                    System.out.println("Deseja continuar? 1 - Sim 0 - Não");
                    opcao2 = input.nextInt();
                }while (opcao2!=0);
                agendaContatos.adicionarPessoa(p);

            }case 2->{
                System.out.println("Digite o nome do contato: ");
                String pContatos = input.next();
                Pessoa p = new Pessoa();
                int i=0;
                for(i=0; i<agendaContatos.caderneta.size()|| !pContatos.equals(agendaContatos.caderneta) ; i++){
                    if(pContatos.equals(agendaContatos.caderneta)){
                        p.imprimirPessoa();
                    }else if(i==agendaContatos.caderneta.size()){
                        System.out.println("Não encontrado");
                        p.imprimirPessoa();
                    }
                }

             //   p.imprimirPessoa();

            }case 3->{
                agendaContatos.imprimir();

            }default -> {System.out.println( "Digite uma opcao valida");}
        }
    }while(opcao !=0);

    }
}
