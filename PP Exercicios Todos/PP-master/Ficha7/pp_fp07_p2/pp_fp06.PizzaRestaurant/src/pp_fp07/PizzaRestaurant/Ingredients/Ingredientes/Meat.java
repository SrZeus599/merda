/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp07.PizzaRestaurant.Ingredients.Ingredientes;

import pp_fp07.PizzaRestaurant.Ingredients.IngredientsUnit;
import pp_fp07.PizzaRestaurant.Ingredients.Topping;
import pp_fp07.PizzaRestaurant.Ingredients.Unites.MeatType;

/**
 *
 * @author Acer
 */
public class Meat extends Topping{
    private MeatType type;

    public Meat(MeatType type, int id, String name, IngredientsUnit unit, float calories) {
        super(id, name, unit, calories);
        this.type = type;
    }

    public MeatType getType() {
        return type;
    }

    public void setType(MeatType type) {
        this.type = type;
    }
    
}
