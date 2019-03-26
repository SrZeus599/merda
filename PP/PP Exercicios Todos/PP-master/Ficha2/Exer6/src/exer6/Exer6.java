/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exer6;
import static java.lang.System.out;

/**
 *
 * @author Isabel Silva
 */
public class Exer6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int[] listaA={2,-5,-121,102,-35,-2,0,-125,802,-10};
	int[] listaB={6,99,-1,12,1,-2};
	int[] unir= new int[20];
	int c1=0,i,count=0,f=0,c=0,q=0;
	int[] vetor1=new int[20];
	int[] vetor2=new int[10];
	for(i=0;i<listaA.length;i++){
            unir[i]=listaA[i];c1++;
	}
	for(i=0;i<listaB.length;i++){
            unir[c1]=listaB[i];c1++;
	}
	out.print("Vetor resultante: ");
	for(i=0;i<c1;i++){
            out.print(unir[i]+" ");
	}
	out.print("\n");

	//alinea b)

	for(i=0;i<c1-6;i++){
            for(int j=10;j<c1;j++){
                if(unir[i]==unir[j])
                    count++;
            }
	}
	out.println("Quantidade de repetições: "+count);

	//alinea c)

	for(i=0;i<listaA.length;i++){
            for(int k=0;k<listaB.length;k++){
		if(listaA[i] == listaB[k]){
                    f=k;
		}
            }
            if(f==0){
		vetor1[c]=listaA[i];
		c++;
            }
            else
                f=0;
            }		
	}
    /*
	System.out.print("Vetor com numeros nao repetidos nas dois vetores: ");
	for(int i=0;i<c;i++){
            System.out.print(vetor1[i]+" ");
	}
	System.out.print("\n");
		
	//alinea d)
		
	for(i=0;i<listaA.length;i++){
            for(int k=0;k<listaB.length;k++){
		if(listaA[i] == listaB[k]){
                    f=k;
		}
            }
            if(f !=0 ){
                vetor2[q]=listaB[f];
		q++;f=0;
            }
	}
	System.out.print("Vetor com numeros repetidos nos dois vetores: ");
	for(i=0;i<q;i++){
            System.out.print(vetor2[i]+" ");
	}
    */
    }
}