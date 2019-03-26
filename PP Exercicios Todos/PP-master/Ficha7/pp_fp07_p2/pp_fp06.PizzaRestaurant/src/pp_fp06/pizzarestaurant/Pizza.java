
package pp_fp06.pizzarestaurant;
import pp_fp06.pizzarestaurant.Enum.PizzaSize;

public class Pizza {
    private final int MAX_INGREDIENTES = 5;
    /**
     * Codigo da Pizza({@link Pizza})
     */
    private int codigoPizza;
    /**
     * Nome da Pizza({@link Pizza})
     */
    private String nomePizza;
    /**
     * Descrição da Pizza({@link Pizza})
     */
    private String descricaoPizza;
    /**
     * Preço da Pizza({@link Pizza})
     */
    private float precoPizza;
    /**
     * Tamanho da Pizza({@link Pizza}) com tamanhos ja definidos({@link PizzaSize})
     */
    private PizzaSize tamanhoPizza;
    /**
     * Numero de Ingredientes({@link Pizza})
     */
    private int numeroIngredientesPizza;
    /**
     * Ingredientes da Pizza({@link Ingredientes})
     */
    private PizzaIngredients[] ingredientes;
    
    /**
     * Metodo construtor para a criação de uma instância de
     * ({@link Pizza pizza})
     * @param codigoPizza Codigo da <b>Pizza</b>
     * @param nomePizza Nome da <b>Pizza</b>
     * @param descricaoPizza Descrição da <b>Pizza</b>
     * @param precoPizza Preço da <b>Pizza</b>
     * @param tamanhoPizza Tamanho da <b>Pizza</b>
     */
    public Pizza(int codigoPizza, String nomePizza, String descricaoPizza, float precoPizza, PizzaSize tamanhoPizza){
        ingredientes = new PizzaIngredients[MAX_INGREDIENTES];
        numeroIngredientesPizza = 0;
        this.codigoPizza = codigoPizza;
        this.nomePizza = nomePizza;
        this.descricaoPizza = descricaoPizza;
        this.precoPizza = precoPizza;
        this.tamanhoPizza = tamanhoPizza;
    }

    public int getCodigoPizza() {
        return codigoPizza;
    }

    public void setCodigoPizza(int codigoPizza) {
        this.codigoPizza = codigoPizza;
    }

    public String getNomePizza() {
        return nomePizza;
    }

    public void setNomePizza(String nomePizza) {
        this.nomePizza = nomePizza;
    }

    public String getDescricaoPizza() {
        return descricaoPizza;
    }

    public void setDescricaoPizza(String descricaoPizza) {
        this.descricaoPizza = descricaoPizza;
    }

    public float getPrecoPizza() {
        return precoPizza;
    }

    public void setPrecoPizza(float precoPizza) {
        this.precoPizza = precoPizza;
    }

    public PizzaSize getTamanhoPizza() {
        return tamanhoPizza;
    }

    public void setTamanhoPizza(PizzaSize tamanhoPizza) {
        this.tamanhoPizza = tamanhoPizza;
    }

    public int getNumeroIngredientesPizza() {
        return numeroIngredientesPizza;
    }

    public PizzaIngredients[] getIngredientes() {
        return ingredientes;
    }

    public void setIngredientes(PizzaIngredients ingredientes) {
        this.ingredientes[this.numeroIngredientesPizza] = ingredientes;
        this.numeroIngredientesPizza ++;
    }
    
    /*
    public void removeIngredient(int id){
        for(int i = 0; i < this.ingredientes.length;i++){
            if(this.ingredientes[i].getCodigo() == id){
                for(int j=i; j<this.ingredientes.length;j++){
                    this.ingredientes[i] = this.ingredientes[i++];
                }
                this.numeroIngredientesPizza--;
            }
        }
    }
    public int caloriasPizza(){
        int total=0;
        for (PizzaIngredients ingrediente : this.ingredientes) {
            total += ingrediente.getCalorias();
        }
        return total;
    }
    public void descricaoDetalhada(){
        System.out.println("Detalhes: " + this.descricaoPizza);
        for (PizzaIngredients ingrediente : this.ingredientes) {
            System.out.println("Nome do Ingrediente: " + ingrediente.getNomePizza());
        }
    }*/

    
}
