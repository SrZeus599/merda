/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exer7;

/**
 *
 * @author Isabel Silva
 */
public class Exer7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        try {
            int divisor = Integer.parseInt(args[0]);
            int dividendo = Integer.parseInt(args[1]);
            float n = divisor/dividendo;
            int num = divisor%dividendo;
            System.out.println("Divisão: " + n);
            System.out.println("Resto da Divisão: " + num);
        } catch (Exception e) {
            System.out.println("No file found");
        }
    }
    
}
