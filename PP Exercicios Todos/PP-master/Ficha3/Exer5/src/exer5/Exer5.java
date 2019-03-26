/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exer5;
import static java.lang.System.out;

/**
 *
 * @author osboxes
 */
public class Exer5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        double valor;		
	if(args[0].equals("Dolar")){
            valor = Double.parseDouble(args[1])*1.23036;
            out.println(valor);
	}
	else if(args[0].equals("Euro")){
            valor = Double.parseDouble(args[1])*0.81240;
            out.println(valor);
	}
	else{
            out.println("ERRO");
	}
    }
    
}
