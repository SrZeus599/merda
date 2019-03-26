package pp_fp05.Expenses;

import java.util.Date;

/**
 *
 * @author Isabel Silva
 */
public class User {
    private static final int ID_SIZE = 3;
    /**
     * Identificação do utilizador, contituido por 3 caracteres
     */
    protected char[] id;
    /**
     * Nome do utilizador ({@link User})
     */
    protected String name;
    /**
     * Email do utilizador do utilizador ({@link User})
     */
    protected String email;
    /**
     * Data de nascimento (dia/mes/ano) do utilizador ({@link User})
     */
    protected Date birthDate;
    /**
     * Despesas({@link Expense}) do utilizador({@link User})
     */
    protected Expense[] expenses;
    /**
     * Estatuto({@link User})
     */
    protected String estatuto;
    /**
     * Datas relativas a estatuto({@link User})
     */
    protected Date[] dateEstatuto;
    /**
     * Dias com Premium({@link User})
     */
    protected int diasPremium;
    /**
     * Metodo Construtor para a criação de uma instancia de ({@link User}),
     * tendo por base todos os atributos de ({@link User})
     * 
     * @param tempId identificação do utilizador constituida por 3 caracteres
     * @param tempName Nome do utilizador ({@link User})
     * @param tempEmail Email do utilizador ({@link User})
     * @param tempBithDate Data de nascimento ({@link Expense}) do utilizador
     * ({@link User})
     * @param tempExpenses Colecao de despesas({@link Expense}) do utilizador
     * ({@link User})
     */
    public User(char[] tempId, String tempName, String tempEmail, Date tempBithDate, Expense[] tempExpenses){
        this.id = tempId;
        this.name = tempName;
        this.email = tempEmail;
        this.birthDate = tempBithDate;
        this.expenses = tempExpenses;
        this.estatuto = "Free";
        this.verificaEstatuto();
    }

    public char[] getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public String getEmail() {
        return email;
    }

    public Date getBirthDate() {
        return birthDate;
    }

    public Expense[] getExpenses() {
        return expenses;
    }
    private void verificaEstatuto(){
        int cont=0,j=0;
        for (Expense expense : this.expenses) {
            if (expense.value >= 1) {
                cont = 5;
                this.dateEstatuto[j] = expense.data;
                j++;
            }
        }
        this.diasPremium = cont;
    }
    
    public void Premium(String typeDespesas, Date inicio, Date fim){
        boolean x = true;
        float maior = 0.0F, custo = 0.0F;
        String type = "";
        if(this.diasPremium > 0){
            for (Expense expense : this.expenses) {
                if (expense.data == inicio || x == true) {
                    System.out.println("Tipo de despesa: " + expense.type);
                    System.out.println("Valor: " + expense.value);
                    System.out.println("Data: " + expense.data);
                    maior = expense.value;
                    type = expense.type;
                    custo += expense.value;
                    x=false;
                }
                if(!x){
                    System.out.println("Tipo de despesa: " + expense.type);
                    System.out.println("Valor: " + expense.value);
                    System.out.println("Data: " + expense.data);
                    if(maior < expense.value){
                        maior = expense.value;
                        type = expense.type;
                    }
                    custo += expense.value;
                }
                if(custo > 0){
                    System.out.println("Despesa total: " + custo);
                    System.out.println("Maior despesa: " + maior);
                    System.out.println("Tipo da despesa com maior valor: " + type);
                }
            }
        }
    }
}