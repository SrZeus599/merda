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
        char[] nome={'A','n','a',' ','S','a','n','t','o','s','\n'};
	int i=0,c1=0,c2=0,vogais=0,consoantes=0;

	char[] name;
	name = new char[20];
	char[] apelido;
	apelido= new char[20];

	while(nome[i] != 32){ //enquanto nao encontrar o espaço guarda o nome
			
            name[c1]=nome[i];
            if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u' || nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U'){ //verifica se e vogal o caracter independemente de ser maiuscula ou minuscula
		vogais++;
            }
            else{
		consoantes++;
            }
            c1++;i++;
	}
	if(nome[i]==32){ //caso encontre o espaco vai guardar o apelido
            i++;
            while(nome[i] != '\n'){
				
		apelido[c2]=nome[i];
		if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u' || nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U'){ //verifica se e vogal o caracter independemente de ser maiuscula ou minuscula
                    vogais++;
                }
                else{
                    consoantes++;
		}
		c2++;i++;
            }
	}
	out.print("Apelido: ");
	for(int j=0;j<apelido.length;j++){
            out.print(apelido[j]);
	}
	out.print("\nNome: ");
	for(int k=0;k<name.length;k++){
            out.print(name[k]);
	}
	out.println("\nNumero de consoantes: "+ consoantes+ "\nNumero de vogais: "+ vogais);
    }
    
}
