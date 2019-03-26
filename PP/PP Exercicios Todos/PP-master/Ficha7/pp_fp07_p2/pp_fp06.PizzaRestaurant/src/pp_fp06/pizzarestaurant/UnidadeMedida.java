/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp06.pizzarestaurant;

import pp_fp06.pizzarestaurant.Enum.Gramas;
import pp_fp06.pizzarestaurant.Enum.Litros;

/**
 *
 * @author Acer
 */
public class UnidadeMedida {
    private Gramas gramas;
    private Litros litro;

    public UnidadeMedida(Gramas gramas) {
        this.gramas = gramas;
    }

    public UnidadeMedida(Litros litro) {
        this.litro = litro;
    }
}
