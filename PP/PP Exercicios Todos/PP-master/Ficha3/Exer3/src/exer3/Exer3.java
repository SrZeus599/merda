/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exer3;
import static java.lang.System.out;

/**
 *
 * @author osboxes
 */
public class Exer3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int[][] matriz= new int[4][3];
		
	matriz[0][0]=2;
	matriz[0][1]=3;
	matriz[0][2]=5;
	matriz[1][0]=10;
	matriz[1][1]=3;
	matriz[1][2]=5;
	matriz[2][0]=8;
	matriz[2][1]=4;
	matriz[2][2]=8;
	matriz[3][0]=10;
	matriz[3][1]=9;
	matriz[3][2]=3;
	
        int maior=matriz[0][0];
	int menor=matriz[0][0];
	
        //maior
	for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
		if(matriz[i][j] > maior){
                    maior=matriz[i][j];
		}
            }
	}
	out.println("Maior numero: "+ maior);
	
        //menor
	for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
		if(matriz[i][j] < menor){
                    menor=matriz[i][j];
		}
            }
	}
	out.println("Menor numero: "+ menor);
	
        //x repetido
	out.println("Falta as repeticoes");
    }
    
}
