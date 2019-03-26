/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exer1;

import java.util.Scanner;
import static java.lang.System.out;

/**
 *
 * @author Isabel Silva
 */
public class Exer1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        final int N=3;
	Scanner input=new Scanner(System.in);
	int[][] A= new int[N][N];
	int[][] B= new int[N][N];
	int i,j;
	
	for(i=0;i<N;i++){
            for(j=0;j<N;j++){
		out.print("Numero: ");
		A[i][j]= input.nextInt();
            }
	}
	for(i=0;i<N;i++){
            for(j=0;j<N;j++){		
		B[j][i]=A[i][j];
            }
	}
	for(i=0;i<N;i++){
            for(j=0;j<N;j++){
		out.print(A[i][j]+ "\t");
            }
            out.println("\n");
	}
	out.println("\nTransposta: ");
	for(i=0;i<N;i++){
            for(j=0;j<N;j++){
		out.print(B[i][j]+ "\t");
            }
            out.println("\n");
	}
    }
}
