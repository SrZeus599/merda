/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Teste;

import pp_fp06.pizzarestaurant.Enum.PizzaSize;
import pp_fp06.pizzarestaurant.Pizza;

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
        for (Pizza pedido1 : pedido) {
            System.out.println("Codigo: " + pedido1.getCodigoPizza());
            System.out.println("Nome: " + pedido1.getNomePizza());
            System.out.println("Descrição: " + pedido1.getDescricaoPizza());
            System.out.println("Preço: "+ pedido1.getPrecoPizza());
            System.out.println("Tamanho: " + pedido1.getTamanhoPizza());
        }
    }
    
}
