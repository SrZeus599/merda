/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp07.PizzaRestaurant.Ingredients;

/**
 *
 * @author Acer
 */
public class Ingredients {
    private int id;
    private String name;
    private IngredientsUnit unit;
    private float calories;

    public Ingredients(int id, String name, IngredientsUnit unit, float calories) {
        this.id = id;
        this.name = name;
        this.unit = unit;
        this.calories = calories;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public IngredientsUnit getUnit() {
        return unit;
    }

    public void setUnit(IngredientsUnit unit) {
        this.unit = unit;
    }

    public float getCalories() {
        return calories;
    }

    public void setCalories(float calories) {
        this.calories = calories;
    }
    
    
}
