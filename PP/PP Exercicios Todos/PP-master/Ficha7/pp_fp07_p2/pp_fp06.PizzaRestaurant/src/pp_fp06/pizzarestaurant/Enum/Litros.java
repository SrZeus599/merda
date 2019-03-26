/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp06.pizzarestaurant.Enum;

/**
 *
 * @author Acer
 */
public enum Litros {
    /**
     * Tamanhos disponiveis({@link Gramas})
     */
    MILILITRO, CENTILITRO, LITRO;
    /**
     * Devolve uma string com qual sera a Unidade de medida do Ingrediente({@link PizzaIngredients})
     * @param litro Tamanho da Pizza({@link Litro})
     * @return String
     */
    public static String LitrosToString(Litros litro){
        switch(litro){
            case MILILITRO:
                return "In mililitro.";
            case CENTILITRO:
                return "In centilitro.";
            case LITRO:
                return "In litro.";
            default:
                return "In centilitro.";
        }
    }
}
