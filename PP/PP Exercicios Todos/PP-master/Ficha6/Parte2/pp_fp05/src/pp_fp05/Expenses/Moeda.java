/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp05.Expenses;

/**
 *
 * @author Acer
 */
public enum MOEDA {
    EURO, LIBRA, DOLAR;
    
    public void Tipo(MOEDA t){
        System.out.print(t);
    }
}
