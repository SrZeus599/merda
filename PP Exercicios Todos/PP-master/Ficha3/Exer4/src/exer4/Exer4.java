/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exer4;

import static java.lang.System.out;

/**
 *
 * @author osboxes
 */
public class Exer4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        double radianos;
	
        radianos= Double.parseDouble(args[0]) * (Math.PI)/180;
	out.println("Conversão "+radianos+" radianos");
    }
    
}
