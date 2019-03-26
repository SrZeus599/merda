
package Expenses;

import java.util.Date;


public class Expense {
    /**
    * Numero de identificação da despesa ({@link Expense})
    */ 
    protected int number;
    /** 
     * Tipo da despesa ({@link Expense})
     */
    protected String type;
    /**
     * Valor da despesa ({@link Expense})
     */
    protected float value;
    /**
     * Data da despesa ({@link Expense})
     */
    protected Date data;
    /**
     * Tipo de Moeda ({@link Expense})
     */
    protected String Moeda;
    /**
     * Metodo construtor para a criação de uma instância de @Expense, tendo por
     * base todos os atributos de despesa ({@link Expense})
     * 
     * @param tempNumber Numero da despesa ({@link Expense})
     * @param tempType Tipo de despesa ({@link Expense})
     * @param tempValue Valor em euros da despesa realizada ({@link Expense})
     * @param tempDate Data({@link Expense}) da despesa realizada
     * ({@link Expense})
     */
    
    Expense(int tempNumber, String tempType, float tempValue, Date tempDate){
        this.number = tempNumber;
        this.type = tempType;
        this.value = tempValue;
        this.data = tempDate;
    }
    Expense(int tempNumber, String tempType, float tempValue, Date tempDate, String currencyType){
        if(currencyType.equals(this.Moeda)){
            this.number = tempNumber;
            this.type = tempType;
            this.value = tempValue;
            this.data = tempDate;
            this.Moeda = currencyType;
        }
    }
}
