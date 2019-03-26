/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp04;
import static java.lang.System.out;
import pp_fp04.exchange.CurrencyRates;
/**
 *
 * @author Alex 
 */
public class PP_FP04 {

    /**
     * @param args the command line arguments
     */
    static User user1;
    static User user2;
    static Expense despesasUser1;
    static Expense despesasUser2;
    CurrencyRates conversao = new CurrencyRates();
    
    public static void main(String[] args) {
        double totalGasto = 0.0, medioGasto = 0.0;
        char[] id,name,email;
        double[] carValues,foodValues;
        int number1, number2;
                
        /* USER 1 */
        
        id = new char[]{'A','B','C'};
        
        name = new char[]{'B','r','u','n','o'};
        email = new char[]{'b','m','o','@','e','t','g','f','.','i','p','p','.','p','t'};
        
        number1 = 2;
        carValues = new double[]{23.2, 12.0};
        
        number2 = 2;
        foodValues = new double[]{32.2, 9.5};
        
        despesasUser1 = new Expense(number1,carValues,number2,foodValues);
        user1 = new User(id,name,email,despesasUser1);
              
        out.println("------ User 1 ------");
        out.print("ID: ");
        out.println(user1.getId());
        out.print("Name: ");
        out.println(user1.getName());
        out.print("Email: ");
        out.println(user1.getEmail());
        out.print("Dias com despesas do automovel: ");
        out.println(despesasUser1.getNumber1());
        out.print("Despesas: ");
        
        double[] aux = despesasUser1.getCarValues();
        for(int i=0;i<despesasUser1.getNumber1();i++){
            
            out.print(aux[i]);
            
            if(i < despesasUser1.getNumber1() - 1){
                out.print(" - ");
            }
            totalGasto += aux[i];
        }
        medioGasto = totalGasto / despesasUser1.getNumber1();
        out.println("\nTotal de Gastos: " + totalGasto);
        out.println("Media de Gastos: " + medioGasto);
        out.print("Descrição do Carro: ");
        out.println(despesasUser1.getDescriptionCar());
        out.print("Dias com despesas alimentares: ");
        out.println(despesasUser1.getNumber2());
        out.print("Despesas alimentares: ");
        double[] aux2 = despesasUser1.getFoodValues();
        for(int i=0;i<despesasUser1.getNumber2();i++){
            
            out.print(aux[i]);
            
            if(i < despesasUser1.getNumber2() - 1){
                out.print(" - ");
            }
        }
        out.print("\nDescrição: ");
        out.println(despesasUser1.getDesciptionFood());
        
        /* USER 2 */
        
        id = new char[]{'X','F','X'};
        name = new char[]{'J','o','s','é'};
        email = new char[]{'j','o','s','é','@','e','t','g','f','.','i','p','p','.','p','t'};
        
        number1 = 2;
        carValues = new double[]{98.2, 5.0};
        number2 = 2;
        foodValues = new double[]{32.2, 9.5};
        
        despesasUser2 = new Expense(number1,carValues,number2,foodValues);
        user2 = new User(id,name,email,despesasUser2);
              
        out.println("------ User 2 ------");
        out.print("ID: ");
        out.println(user2.getId());
        out.print("Name: ");
        out.println(user2.getName());
        out.print("Email: ");
        out.println(user2.getEmail());
        out.print("Dias com despesas do automovel: ");
        out.println(despesasUser2.getNumber1());
        out.print("Despesas: ");
        
        double[] c = despesasUser2.getCarValues();
        for(int i=0;i<despesasUser2.getNumber1();i++){
            
            out.print(c[i]);
            
            if(i < despesasUser2.getNumber1() - 1){
                out.print(" - ");
            }
            totalGasto += c[i];
        }
        medioGasto = totalGasto / despesasUser2.getNumber1();
        out.println("\nTotal de Gastos: " + totalGasto);
        out.println("Media de Gastos: " + medioGasto);
        out.print("Descrição do Carro: ");
        out.println(despesasUser2.getDescriptionCar());
        out.print("Dias com despesas alimentares: ");
        out.println(despesasUser2.getNumber2());
        out.print("Despesas alimentares: ");
        double[] c2 = despesasUser2.getFoodValues();
        for(int i=0;i<despesasUser2.getNumber2();i++){
            
            out.print(c2[i]);
            
            if(i < despesasUser2.getNumber2() - 1){
                out.print(" - ");
            }
        }
        out.print("\nDescrição: ");
        out.println(despesasUser2.getDesciptionFood());
        // exer 3.2
    }
}
