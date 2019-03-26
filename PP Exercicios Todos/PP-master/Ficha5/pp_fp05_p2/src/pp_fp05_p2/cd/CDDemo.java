/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp05_p2.cd;
import static java.lang.System.out;

/**
 *
 * @author Acer
 */
public class CDDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Author[] a ={ 
            new Author(32, "Wesley Schultz"),
            new Author(22, "Lumineers")
        };
        Track[] t = {
            new Track(1,"Ho Hey",90,a),
            new Track(2,"Stubborn Love",105,a)
        };
        CD cd = new CD("The Lumineers",2012,"Dualtone Records",15,t);
        
        out.println("Nome do CD: " + cd.getName());
        out.println("Ano de lançamento: " + cd.getYear());
        out.println("Editora: " + cd.getEditor());
        
        for(Track track : t){
            out.println("Titulo da musica numero " + track.getNumero_Musica() + " do CD: " + track.getNome());
            out.println("Duração: " + track.getMin());
            for (Author author : track.getAuthor()) {
                out.println("Autor da musica: " + author.getName());
            }
        }
    }
    
}
