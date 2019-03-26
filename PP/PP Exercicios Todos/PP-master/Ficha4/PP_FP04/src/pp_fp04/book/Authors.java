/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp04.book;

/**
 *
 * @author Isabel Silva
 */
public class Authors {
    private final static int MAX_CHAR = 3;
    private static char[] autorAcronimo = new char[MAX_CHAR];
    private static char[] nomeAuthor;
    private static char[] nacionalidadeAuthor;

    public Authors(char[] autorAcronimo, char[] nomeAuthor, char[] nacionalidadeAuthor) {
        Authors.autorAcronimo = autorAcronimo;
        Authors.nomeAuthor = nomeAuthor;
        Authors.nacionalidadeAuthor = nacionalidadeAuthor;
    }
    
    public char[] getAutorAcronimo() {
        return autorAcronimo;
    }

    public char[] getNomeAuthor() {
        return nomeAuthor;
    }

    public char[] getNacionalidadeAuthor() {
        return nacionalidadeAuthor;
    }
}
