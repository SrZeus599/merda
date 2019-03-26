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
package pp_fp04.book;
import static java.lang.System.out;

/**
 *
 * @author Isabel Silva
 */
public class BookDemo {

    /**
     * @param args the command line arguments
     */
    static Authors autor;
    static Book livro;
    public static void main(String[] args) {
        char[] titulo = new char[]{'H','E','L','L','O'};
        char[] editor = new char[]{'S','i','l','v','a'};
        int year = 2010, nPaginas = 99;
        int[] cotacao = new int[]{7,3,9};
        char[] autorAcronimo = new char[]{'D','H','X'};
        char[] nomeAuthor = new char[]{'I','s','a','b','e','l'};
        char[] nacionalidadeAuthor = new char[]{'P','o','r','t','u','g','e','s','a'};
   
        /* LIVRO 1 */
        autor = new Authors(autorAcronimo,nomeAuthor,nacionalidadeAuthor);
        livro = new Book(titulo,editor,autor,year,nPaginas,cotacao);
        
        out.println("Titulo: " + livro.getTitulo());
        out.println("Editor: " + livro.getEditor());
        out.println("Ano: " + livro.getYear());
        out.println("Numero de paginas: " + livro.getNumeroPaginas());
        out.println("Cotação: " + livro.getCotacao());
        out.println("Autor: " + autor.getNomeAuthor());
        out.println("Acronimo: " + autor.getAutorAcronimo());
        out.println("Nacionalidade: " + autor.getNacionalidadeAuthor());
        
    }
    
}
