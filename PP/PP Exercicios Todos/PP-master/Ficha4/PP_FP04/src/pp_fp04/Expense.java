/*
 * <h3>
 * ESTGF- Escola Superior de Tecnologia e Gestão de Felgueiras
 * IPP - Instituto Politécnico do Porto
 * LSIRC - Licenciatura em Segurança e Informática em Redes de Computadores
 * PP - Paradigmas de Programação
 * </h3>
 * <p>
 * <strong>Description: </strong>
 * Class that represents the user structure
 * </p>
 */
package pp_fp04;

public class Expense {
    private static final int NUMBER_OF_DAYS = 31; //para o mes de março
    
    //Para despesas com o automovel
    private static int number1;
    /**
     * Vetor com o valor das despesas de automovel durante o dia do mês
     * (o indice do vetor corresponde ao dia do mes) 
     */
    private static double[] carValues = new double[NUMBER_OF_DAYS];//em euros
    private static char[] descriptionCar = new char[]{'C','A','R'};
    
    //Para despesas alimentares
    private static int number2;
    private static double[] foodValues = new double[NUMBER_OF_DAYS];//em euros
    private static char[] desciptionFood = new char[]{'F','O','O','D'};

    public Expense(int number1, double[] carValues, int number2, double[] foodValues) {
        Expense.number1 = number1;
        Expense.number2 = number2;
        Expense.carValues = carValues;
        Expense.foodValues = foodValues;
    }

    public static int getNumber1() {
        return number1;
    }

    public static double[] getCarValues() {
        return carValues;
    }

    public static int getNumber2() {
        return number2;
    }

    public static double[] getFoodValues() {
        return foodValues;
    }

    public static char[] getDescriptionCar() {
        return descriptionCar;
    }

    public static char[] getDesciptionFood() {
        return desciptionFood;
    }
    
    
}
