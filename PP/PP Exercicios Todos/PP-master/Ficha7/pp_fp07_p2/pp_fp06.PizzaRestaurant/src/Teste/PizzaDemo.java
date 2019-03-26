/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Teste;

import pp_fp06.pizzarestaurant.Enum.PizzaSize;
import pp_fp06.pizzarestaurant.Pizza;
import pp_fp07.PizzaRestaurant.Ingredients.Base;
import pp_fp07.PizzaRestaurant.Ingredients.Ingredientes.Meat;
import pp_fp07.PizzaRestaurant.Ingredients.Ingredients;
import pp_fp07.PizzaRestaurant.Ingredients.IngredientsUnit;
import pp_fp07.PizzaRestaurant.Ingredients.Topping;
import pp_fp07.PizzaRestaurant.Ingredients.Unites.MeatType;
import pp_fp07.PizzaRestaurant.Ingredients.Unites.TypeMassa;

/**
 *
 * @author Acer
 */
public class PizzaDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Pizza[] pedido = {
            new Pizza(123,"Peperoni","Pizza Completa",(float) 23.3,PizzaSize.MEDIUM),
            new Pizza(549,"Atum","Pizza Completa",(float) 50.3,PizzaSize.KING)
        };
        Ingredients n = null;
        
        Base base1 = new Base(TypeMassa.FINA, 121, "Massa", IngredientsUnit.GRAMAS, (float) 15.2);
        Topping topping1 = new Topping(192, "Pepperoni", IngredientsUnit.GRAMAS, (float) 21.9);
        Meat carne = new Meat(MeatType.FRANGO, 321, "Frango", IngredientsUnit.GRAMAS, (float) 23.2);
        n = base1;
        
        pedido[0].getIngredientes();
        
        for (Pizza pedido1 : pedido) {
            System.out.println("Codigo: " + pedido1.getCodigoPizza());
            System.out.println("Nome: " + pedido1.getNomePizza());
            System.out.println("Descrição: " + pedido1.getDescricaoPizza());
            System.out.println("Preço: "+ pedido1.getPrecoPizza());
            System.out.println("Tamanho: " + pedido1.getTamanhoPizza());
        }
    }
    
}
