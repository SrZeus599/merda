package pp_fp05.Expenses;

import java.util.Date;

/**
 * @author Isabel Silva
 */
public class Expense {
   /**
    * Numero de identificação da despesa ({@link Expense})
    */ 
    private int number;
    /** 
     * Tipo da despesa ({@link Expense})
     */
    private DESPESA type;
    /**
     * Valor da despesa ({@link Expense})
     */
    private float value;
    /**
     * Data da despesa ({@link Expense})
     */
    private Date data;
    /**
     * Tipo de MOEDA ({@link Expense})
     */
    private MOEDA Moeda;
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
    
    Expense(int tempNumber, DESPESA tempType, float tempValue, Date tempDate){
        this.number = tempNumber;
        this.type = tempType;
        this.value = tempValue;
        this.data = tempDate;
    }
    Expense(int tempNumber, DESPESA tempType, float tempValue, Date tempDate, MOEDA currencyType){
        if(currencyType.equals(this.Moeda)){
            this.number = tempNumber;
            this.type = tempType;
            this.value = tempValue;
            this.data = tempDate;
            this.Moeda = currencyType;
        }
    }

    public int getNumber() {
        return this.number;
    }

    public DESPESA getType() {
        return this.type;
    }

    public float getValue() {
        return this.value;
    }

    public Date getData() {
        return this.data;
    }

    public MOEDA getMoeda() {
        return this.Moeda;
    }

    public void setMoeda(MOEDA Moeda) {
        this.Moeda = Moeda;
    }

    public void setNumber(int number) {
        this.number = number;
    }

    public void setType(DESPESA type) {
        this.type = type;
    }

    public void setValue(float value) {
        this.value = value;
    }

    public void setData(Date data) {
        this.data = data;
    }
    
}
