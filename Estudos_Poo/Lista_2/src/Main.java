import javax.swing.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int opcao=0;
        //System.out.println("Informe o numero total de palavras que deseja imprimir ?");
        //int quantPalavras = entrada.nextInt();
        int quantPalavras = Integer.parseInt(JOptionPane.showInputDialog(null, "Informe o numero total de palavras que deseja imprimir ?", "Dicionario", JOptionPane.QUESTION_MESSAGE));
        Dicionario diconario = new Dicionario(quantPalavras);

        do {
            opcao = Integer.parseInt(JOptionPane.showInputDialog(null, "0 - sair \n" +
                    "1 - inserir palavra \n" +
                    "2 - Pesquisar palavra \n" +
                    "3 - imprimir dicionario completo \n" +
                    "4 - Alterar 1 significado de 1 palavra \n" +
                    "5 - Excluir uma palavra do dicionario   \n" +
                    "Selecione uma das opçoes : ", "Dicionario", JOptionPane.QUESTION_MESSAGE));
        if(opcao != 0)
        {
            switch (opcao) {
                case 1 -> {
                    String termo = JOptionPane.showInputDialog(null, "Digite a palavra/(Termo) que deseja inserir", "Dicionario", JOptionPane.QUESTION_MESSAGE);
                    //System.out.println("Digite a palavra/(Termo) que deseja inserir");
                    //String termo = entrada.next();
                    int quantSignificado = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite o total de significado que essa palavra possui", "Dicionario", JOptionPane.QUESTION_MESSAGE));
                    //System.out.println("Digite o total de significado que essa palavra possui");
                    //int quantSignificado = entrada.nextInt();
                    Palavra palavra = new Palavra(termo, quantSignificado);
                    diconario.inserePalavra(palavra);
                    int opcao2 = 0;
                    do {
                        String significado = JOptionPane.showInputDialog(null, "informe o significado :", "Dicionario", JOptionPane.QUESTION_MESSAGE);
                        //System.out.println("informe o significado :");
                        //String significado = entrada.next();
                        JOptionPane.showMessageDialog(null, significado, "Dicionario", JOptionPane.QUESTION_MESSAGE);
                        //System.out.println(significado);
                        palavra.incluiSignificado(significado);
                        opcao2 = JOptionPane.showConfirmDialog(null, "Deseja incluir mais significaods : 1-SIM 2-NAO", "Dicionario", JOptionPane.YES_NO_OPTION);
                        //System.out.println("Deseja incluir mais significaods : 1-SIM 2-NAO");
                        //opcao2 = entrada.nextInt();

                    } while (opcao2 == JOptionPane.YES_OPTION);


                }
                case 2 -> {
                }
                case 3 -> {
                    diconario.imprimirDicionario();
                }
                case 4 -> {
                }
                case 5 -> {
                }
                default -> JOptionPane.showMessageDialog(null, "Digite uma opção valida", "Dicionario", JOptionPane.INFORMATION_MESSAGE);//System.out.println("Digite uma opção valida");
            }
        }
        }while(opcao != 0);
    }
}