/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp05.Expenses;

import java.util.Date;
import static java.lang.System.out;
import java.util.Arrays;
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
        Date data1 = new Date(2017,04,01);
        Despesas dep = new Despesas();
        /* DESPESAS */
        
        Expense[] despesa1 = new Expense[3];
        despesa1[0] = new Expense(12,DESPESA.AUTOMOVEL, (float) 23.34,data);
        despesa1[1] = new Expense(29,DESPESA.AUTOMOVEL, (float) 10,data);
        Expense despesa2 = new Expense(15,DESPESA.AUTOMOVEL, (float) 55.34,data1);
        
        dep.setDespesas(despesa1[0]);
        dep.setDespesas(despesa1[1]);
        dep.setDespesas(despesa2);
        dep.alteraInforDespesa(12, DESPESA.ALIMENTACAO);
        char[] tpId = new char[]{'A','C','F'};
        /* UTILIZADOR 1*/
        User utilizador1 = new User(tpId,"Isabel Silva","isabel.6.06@hotmail.com",data,despesa1,GENERO.FEMININO);
        
        /* Prints 
        
        out.println("Id: " + Arrays.toString(utilizador1.getId()));
        out.println("Nome: " + utilizador1.getName());
        out.println("Email: " + utilizador1.getEmail());
        out.println("Data de nascimento: " + utilizador1.getBirthDate());
        utilizador1.getGenero();
        for(int i = 0; i < 3; i++){
            out.println("Despesa: ");
            out.println("Numero: " + utilizador1.getExpenses()[i].getNumber());
            out.println("Data: " + utilizador1.getExpenses()[i].getData());
            out.println("Tipo de despesa: " + utilizador1.getExpenses()[i].getType());
            out.println("Value: " + utilizador1.getExpenses()[i].getValue());
        }
        */
        for(int i = 0; i < 3; i++){
            out.println("Despesa: ");
            out.println("Numero: " + dep.getDespesas()[i].getNumber());
            out.println("Data: " + dep.getDespesas()[i].getData());
            out.println("Tipo de despesa: " + dep.getDespesas()[i].getType());
            out.println("Value: " + dep.getDespesas()[i].getValue());
        }
    }
    
}
