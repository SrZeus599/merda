/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp06.pizzarestaurant;

/**
 *
 * @author Acer
 */
public class PizzaIngredients {
    /**
     * Codigo do Ingrediente({@link PizzaIngredients})
     */
    private int codigo;
    /**
     * Nome do Ingrediente({@link PizzaIngredients})
     */
    private String nome;
    /**
     * Unidade de Medida({@link PizzaIngredients}) com ({@link Gramas})({@link Litro})
     */
    private UnidadeMedida medida;
    /**
     * Numero de Calorias({@link PizzaIngredients})
     */
    private int calorias;
    /**
     * Metodo construtor para a criação de uma instância de
     * ({@link PizzaIngredients})
     * @param codigo Codigo do <b>Ingrediente</b>
     * @param nome Nome do <b>Ingrediente</b>
     * @param medida Unidade de Medida do <b>Ingrediente</b>
     * @param calorias Unidade de Medida do <b>Ingrediente</b>
     */
    public PizzaIngredients(int codigo, String nome, UnidadeMedida medida, int calorias) {
        this.codigo = codigo;
        this.nome = nome;
        this.medida = medida;
        this.calorias = calorias;
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getNomePizza() {
        return nome;
    }

    public void setNomePizza(String nome) {
        this.nome = nome;
    }

    public UnidadeMedida getMedida() {
        return medida;
    }

    public void setMedida(UnidadeMedida medida) {
        this.medida = medida;
    }

    public int getCalorias() {
        return calorias;
    }

    public void setCalorias(int calorias) {
        this.calorias = calorias;
    }
    
}
