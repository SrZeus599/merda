/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exer6;

import static java.lang.System.out;

/**
 *
 * @author osboxes
 */
public class Exer6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int euro,n=Integer.parseInt(args[1]),c=1,div;

	if(args[0].equals("euros")){
            if(Integer.parseInt(args[1]) < 1000){
		while(n > 10){
                    n = n/10;
                    c++;
		}
		div=c*10;
		out.println(n+" euros e "+ Integer.parseInt(args[1])%div + " centimos");
            }
	}
	else{
            out.println("ERRO");
	}
    }
    
}
