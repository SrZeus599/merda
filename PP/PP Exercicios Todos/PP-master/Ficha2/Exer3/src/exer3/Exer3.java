/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exer3;
import static java.lang.System.out;
/**
 *
 * @author Isabel Silva
 */
public class Exer3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int[] lista={12,5,-21,10,-345,22,50,-125,80,-1};
	int maior=0,flag=0,c=0,multi=1;

	for(int i=0;i<lista.length;i++){
            c = (lista[i]<0) ? (c+1):c;
            multi = (lista[i]>0) ? multi : multi*lista[i];
            if(flag == 0){
		maior = lista[i];
		flag=1;
            }
            else{
		if(lista[i] > maior){
                    maior = lista[i];
		}
            }
	}

        out.println("Multiplicação de numeros positivos: "+multi);
	out.println("Numero de numeros negativos: "+c);
	out.println("Maior numero: "+maior);
    }
    
}
