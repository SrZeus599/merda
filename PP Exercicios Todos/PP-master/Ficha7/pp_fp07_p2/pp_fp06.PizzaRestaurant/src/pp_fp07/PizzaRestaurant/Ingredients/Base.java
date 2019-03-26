/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp07.PizzaRestaurant.Ingredients;

import pp_fp07.PizzaRestaurant.Ingredients.Unites.TypeMassa;

/**
 *
 * @author Acer
 */
public class Base extends Ingredients{
    private TypeMassa tipoMassa;

    public Base(TypeMassa tipoMassa, int id, String name, IngredientsUnit unit, float calories) {
        super(id, name, unit, calories);
        this.tipoMassa = tipoMassa;
    }

    public TypeMassa getTipoMassa() {
        return tipoMassa;
    }

    public void setTipoMassa(TypeMassa tipoMassa) {
        this.tipoMassa = tipoMassa;
    }
}
