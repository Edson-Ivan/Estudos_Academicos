public class Pedido {
    public String descricao;
    public String data;
    public ItemPedido[] itens;

    public Pedido(String descricao, String data){
        this.descricao = descricao;
        this.data = data;
        itens = new ItemPedido[10];
    }

}
