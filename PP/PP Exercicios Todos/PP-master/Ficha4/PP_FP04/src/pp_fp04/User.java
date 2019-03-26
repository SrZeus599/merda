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

/**
 *
 * @author Isabel Silva
 */
public class User {
    
    private static final int ID_SIZE = 3;
    private static char[] id = new char[ID_SIZE];
    private static char[] name;
    private static char[] email;
    private static Expense despesas;

    public User(char[] id, char[] name, char[] email, Expense despesas) {
        User.id = id;
        User.name = name;
        User.email = email;
        User.despesas = despesas;
    }

    public static char[] getId() {
        return id;
    }

    public static char[] getName() {
        return name;
    }

    public static char[] getEmail() {
        return email;
    }
}
