/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exer2;
import static java.lang.System.out;
/**
 *
 * @author osboxes
 */
public class Exer2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int[] vetor={2,3,6,28,4,10};
	int perfeito=1,elemento,primo;
	
        //Numeros Perfeitos verificação
	for(int i=0;i<vetor.length;i++){
            perfeito=0;
            elemento=vetor[i];
            primo=1;
            for(int j=1;j<elemento;j++){
		if((elemento % j) == 0){
                    perfeito += j;
                    primo++;
		}			
            }		
            if(perfeito == vetor[i]){
		out.println(vetor[i]+" é um numero perfeito");
            }
            if(primo == 2){
		out.println(vetor[i]+" é primo");
            }
	}
    }
    
}
