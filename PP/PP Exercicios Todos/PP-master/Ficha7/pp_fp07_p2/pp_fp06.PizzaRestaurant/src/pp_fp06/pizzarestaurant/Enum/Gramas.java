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
public enum Gramas {
    /**
     * Tamanhos disponiveis({@link Gramas})
     */
    MILIGRAMAS, GRAMAS;
    /**
     * Devolve uma string com qual sera a Unidade de medida do Ingrediente({@link PizzaIngredients})
     * @param gramas Tamanho da Pizza({@link Gramas})
     * @return String
     */
    public static String GramasToString(Gramas gramas){
        switch(gramas){
            case MILIGRAMAS:
                return "In miligramas.";
            case GRAMAS:
                return "In gramas.";
            default:
                return "In gramas.";
        }
    }
}
