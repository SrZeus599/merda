package pp_fp05.Expenses;
import pp_fp05.Expenses.GENERO;
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
    private char[] id;
    /**
     * Nome do utilizador ({@link User})
     */
    private String name;
    /**
     * Email do utilizador do utilizador ({@link User})
     */
    private String email;
    /**
     * Data de nascimento (dia/mes/ano) do utilizador ({@link User})
     */
    private Date birthDate;
    /**
     * Despesas({@link Expense}) do utilizador({@link User})
     */
    private Expense[] expenses;
    /**
     * Estatuto({@link User})
     */
    private String estatuto;
    /**
     * Datas relativas a estatuto({@link User})
     */
    private GENERO genero;
    
    private final int NUMERO_LIMITE = 10;
    
    private Date[] dateEstatuto = new Date[NUMERO_LIMITE];
    /**
     * Dias com Premium({@link User})
     */
    private int diasPremium;
    private int n;
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
     * @param genero MASC/FEM
     */
    public User(char[] tempId, String tempName, String tempEmail, Date tempBithDate, Expense[] tempExpenses, GENERO genero){
        this.id = tempId;
        this.name = tempName;
        this.email = tempEmail;
        this.birthDate = tempBithDate;
        this.expenses = tempExpenses;
        this.estatuto = "Free";
        this.genero = genero;
        this.n=0;
    }

    public char[] getId() {
        return this.id;
    }

    public void setId(char[] id) {
        this.id = id;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getEmail() {
        return this.email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public Date getBirthDate() {
        return this.birthDate;
    }

    public void setBirthDate(Date birthDate) {
        this.birthDate = birthDate;
    }

    public Expense[] getExpenses() {
        return this.expenses;
    }

    public void setExpenses(Expense[] expenses) {
        this.expenses = expenses;
    }

    public String getEstatuto() {
        return this.estatuto;
    }

    public void setEstatuto(String estatuto) {
        this.estatuto = estatuto;
    }

    public Date[] getDateEstatuto() {
        return this.dateEstatuto;
    }

    public void setDateEstatuto(Date dateEstatuto) {
        this.dateEstatuto[this.n] = dateEstatuto;
        this.n++;
    }

    public int getDiasPremium() {
        return diasPremium;
    }

    public void setDiasPremium(int diasPremium) {
        this.diasPremium = diasPremium;
    }

    public void getGenero() {
        this.genero.imprime(this.genero);
    }
    private void verificaEstatuto(){
        int cont=0,j=0;
        for (int i=0;i<this.expenses.length;i++) {
            if (this.expenses[i].getValue() >= 1) {
                cont = 5;
                this.setDateEstatuto(this.expenses[i].getData());
                j++;
            }
        }
        this.diasPremium = cont;
    }
    
    public void Premium(DESPESA typeDespesas, Date inicio, Date fim){
        boolean x = true;
        float maior = 0.0F, custo = 0.0F;
        DESPESA type;
        if(this.diasPremium > 0){
            for (Expense expense : this.expenses) {
                if (expense.getData() == inicio || x == true) {
                    System.out.println("Tipo de despesa: " + expense.getType());
                    System.out.println("Valor: " + expense.getValue());
                    System.out.println("Data: " + expense.getData());
                    maior = expense.getValue();
                    type = expense.getType();
                    custo += expense.getValue();
                    x=false;
                }
                if(!x){
                    System.out.println("Tipo de despesa: " + expense.getType());
                    System.out.println("Valor: " + expense.getValue());
                    System.out.println("Data: " + expense.getData());
                    if(maior < expense.getValue()){
                        maior = expense.getValue();
                        type = expense.getType();
                    }
                    custo += expense.getValue();
                }
                if(custo > 0){
                    System.out.println("Despesa total: " + custo);
                    System.out.println("Maior despesa: " + maior);
                }
            }
        }
    }
}