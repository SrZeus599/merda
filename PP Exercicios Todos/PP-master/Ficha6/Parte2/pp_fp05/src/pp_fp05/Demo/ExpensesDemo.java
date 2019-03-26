/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp05.Demo;

import static java.lang.System.out;
import java.util.Arrays;
import java.util.Date;
import pp_fp05.Expenses.Expense;
import pp_fp05.Expenses.GENERO;
import pp_fp05.Expenses.User;

/**
 *
 * @author Acer
 */
public class ExpensesDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Date data = new Date(2017,03,12);

        /* DESPESAS */
        
        Expense[] despesa1 = new Expense[3];/**
        * despesa1[0] = new Expense(12,"Automovel", (float) 23.34,data);
        * despesa1[1] = new Expense(29,"Automovel", (float) 10,data);
        * Expense despesa2 = new Expense(15,"Automovel", (float) 55.34,data);
        */
        char[] tpId = new char[]{'A','C','F'};
        /* UTILIZADOR 1*/
        User utilizador1 = new User(tpId,"Isabel Silva","isabel.6.06@hotmail.com",data,despesa1,GENERO.FEMININO);
        
        /* Prints */
        
        out.println("Id: " + Arrays.toString(utilizador1.getId()));
        out.println("Nome: " + utilizador1.getName());
        out.println("Email: " + utilizador1.getEmail());
        out.println("Data de nascimento: " + utilizador1.getBirthDate());
        /*
        for(int i = 0; i < 2; i++){
            out.println("Despesa: ");
            out.println("Numero: " + utilizador1.expenses[i].getNumber());
            out.println("Data: " + utilizador1.expenses[i].getData());
            out.println("Tipo de despesa: " + utilizador1.expenses[i].getType());
            out.println("Value: " + utilizador1.expenses[i].getValue());
        }*/
    }
    
}
