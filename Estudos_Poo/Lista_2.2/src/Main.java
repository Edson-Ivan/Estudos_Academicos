import javax.swing.*;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList <Pedido> listaPedidos = new ArrayList<>();
        int opcao =0;

        do{
            opcao = Integer.parseInt(JOptionPane.showInputDialog(null, "0 - Sair \n" +
                                                                                               "1 - Cadastrar Pedido \n" +
                                                                                               "2 - Inserir (mais) 1 item em 1 pedido especifico \n" +
                                                                                               "3 - Imprimir 1 pedido \n" +
                                                                                               "4 - Imprimir todos os pedidos \n" +
                                                                                               "Digite uma das opcoes a cima:", "Lista de Pedidos", JOptionPane.QUESTION_MESSAGE));

            if(opcao == 1){
                String descricao = JOptionPane.showInputDialog(null, "Informe uma descrição do pedido: \n", "Pedido", JOptionPane.QUESTION_MESSAGE);
                String data = JOptionPane.showInputDialog(null, "Informe a data: ", "Pedido", JOptionPane.QUESTION_MESSAGE);

                Pedido pedidos = new Pedido(descricao, data);
                listaPedidos.add(pedidos);

            }else if(opcao == 2){
                int numPedido = Integer.parseInt(JOptionPane.showInputDialog(null, "Informe o numero do pedido: ", "Item Pedido", JOptionPane.QUESTION_MESSAGE));

                        if(numPedido >= 0 && numPedido < listaPedidos.size()){
                            String produto= JOptionPane.showInputDialog(null, "Informe o produto desejado: ", "Item Pedido", JOptionPane.QUESTION_MESSAGE);
                            int quant = Integer.parseInt(JOptionPane.showInputDialog(null, "Informe a quantidade: ", "Item Pedido", JOptionPane.QUESTION_MESSAGE));
                            float valorTotal= Float.parseFloat(JOptionPane.showInputDialog(null, "Informe o valor total: ", "Item Pedido", JOptionPane.QUESTION_MESSAGE));

                            ItemPedido itens = new ItemPedido(produto, quant, valorTotal);
                            listaPedidos.get(numPedido).inserirItem(itens);
                        }
            }else if(opcao == 3){
                int numPedido = Integer.parseInt(JOptionPane.showInputDialog(null, "Informe o numero do pedido: ", "Item Pedido", JOptionPane.QUESTION_MESSAGE));
                if(numPedido >= 0 && numPedido < listaPedidos.size()){
                    String impressao = "";
                for(int i=0; listaPedidos.get(numPedido).itens[i] != null; i++){
                    impressao += listaPedidos.get(numPedido).itens[i].retornaItemPedido() + "\n\n";
                }

                    JOptionPane.showMessageDialog(null, impressao, "Pedido", JOptionPane.INFORMATION_MESSAGE);
                }
            }else if (opcao == 4){
                for (int i=0; i<listaPedidos.size(); i++){
                    String impressao = "";
                    for(int j=0; listaPedidos.get(i).itens[j] != null; j++){
                        impressao += listaPedidos.get(i).itens[j].retornaItemPedido() + "\n\n";
                    }

                    JOptionPane.showMessageDialog(null, impressao, "Pedido", JOptionPane.INFORMATION_MESSAGE);
                }

            }
        }while(opcao != 0);

    }
}