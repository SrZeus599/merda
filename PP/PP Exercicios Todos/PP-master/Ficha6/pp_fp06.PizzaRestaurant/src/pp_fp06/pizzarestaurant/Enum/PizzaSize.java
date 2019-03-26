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
public enum PizzaSize {
    /**
     * Tamanhos disponiveis({@link PizzaSize})
     */
    SMALL, MEDIUM, BIG, KING;
    /**
     * Devolve uma string com qual sera o tamanho da Pizza({@link Pizza})
     * @param size Tamanho da Pizza({@link PizzaSize})
     * @return String
     */
    public static String PizzaSizeToString(PizzaSize size){
        switch(size){
            case SMALL:
                return "The pizza is small.";
            case MEDIUM:
                return "The pizza is medium.";
            case BIG:
                return "The pizza is big.";
            case KING:
                return "The pizza is king.";
            default:
                return "The pizza is medium.";
        }
    }
}
