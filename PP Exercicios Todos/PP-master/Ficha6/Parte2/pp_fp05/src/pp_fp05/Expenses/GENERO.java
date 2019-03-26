/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp05.Expenses;

/**
 *
 * @author Acer
 */
public enum GENERO {
    FEMININO, MASCULINO;
    
    public void imprime(GENERO g){
        switch (g){
            case FEMININO:
                System.out.println("Genero Feminino");
                break;
            case MASCULINO:
                System.out.println("Genero Masculino ");
                break;
            default:
                System.out.println("Nao definido");
                break;
        }
    }
}
