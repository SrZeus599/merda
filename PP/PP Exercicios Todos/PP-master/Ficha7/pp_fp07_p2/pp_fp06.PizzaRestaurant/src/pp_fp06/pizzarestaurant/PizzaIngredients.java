/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp06.pizzarestaurant;

import pp_fp07.PizzaRestaurant.Ingredients.Ingredients;

/**
 *
 * @author Acer
 */
public class PizzaIngredients {
    /**
     * 
     */
    private Ingredients ingrediente;
    private float quantity;

    public PizzaIngredients(Ingredients ingrediente, float quantity) {
        this.ingrediente = ingrediente;
        this.quantity = quantity;
    }

    public Ingredients getIngrediente() {
        return ingrediente;
    }

    public void setIngrediente(Ingredients ingrediente) {
        this.ingrediente = ingrediente;
    }

    public float getQuantity() {
        return quantity;
    }

    public void setQuantity(float quantity) {
        this.quantity = quantity;
    }
    
    
}
