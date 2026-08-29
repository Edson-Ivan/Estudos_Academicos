import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int opcao=0;
        System.out.println("Informe o numero total de palavras que deseja imprimir ?");
        int quantPalavras = entrada.nextInt();
        Dicionario diconario = new Dicionario(quantPalavras);

        do{
            System.out.println("0 - sair \n" +
                               "1 - inserir palavra \n" +
                               "2 - Pesquisar palavra \n" +
                               "3 - imprimir dicionario completo \n" +
                               "4 - Alterar 1 significado de 1 palavra \n" +
                               "5 - Excluir uma palavra do dicionario   \n" +
                               "Selecione uma das opçoes : ");
            opcao = entrada.nextInt();

            switch(opcao)
            {
                case 1->{

                    System.out.println("Digite a palavra/(Termo) que deseja inserir");
                    String termo = entrada.next();
                    System.out.println("Digite o total de significado que essa palavra possui");
                    int quantSignificado = entrada.nextInt();
                    Palavra palavra = new Palavra(termo, quantSignificado);
                    diconario.inserePalavra(palavra);
                    int opcao2=0;
                    do{
                        System.out.println("informe o significado :");
                        String significado = entrada.next();
                        System.out.println(significado);
                        palavra.incluiSignificado(significado);
                        System.out.println("Deseja incluir mais significaods : 1-SIM 2-NAO");
                        opcao2 = entrada.nextInt();

                    }while(opcao2 != 2);





                }
                case 2->{}
                case 3->{ diconario.imprimirDicionario();}
                case 4->{}
                case 5->{}
                default -> System.out.println("Digite uma opção valida");
            }

        }while(opcao != 0);
    }
}