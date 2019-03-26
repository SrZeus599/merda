/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp05_p2.cd;

/**
 *
 * @author Isabel Silva
 */
public class Track {
    
    private final int LIMITE_AUTOR = 5;
    /**
     * Numero da musica({@link Track})
     */
    protected int numero_Musica;
    /**
     * Nome da Musica({@link Track})
     */
    protected String nome;
    /**
     * Tempo em minutos da musica({@link Track})
     */
    protected int min;
    /**
     * Nome do autor da musica({@link Track})
     */
    protected Author[] author =  new Author[LIMITE_AUTOR];

    /**
     * Metodo Construtor para criacao da instancia de ({@link Track}), tendo por
     * base todos os atributos do Track({@link Track})
     * @param numero_Musica Numero da musica({@link Track})
     * @param nome Nome da musica({@link Track})
     * @param min Tempo em minutos da musica({@link Track})
     * @param author Nome do cantor({@link Track})
     */
    Track(int numero_Musica, String nome, int min, Author[] author) {
        this.numero_Musica = numero_Musica;
        this.nome = nome;
        this.min = min;
        this.author = author;
    }

    public int getNumero_Musica() {
        return numero_Musica;
    }

    public void setNumero_Musica(int numero_Musica) {
        this.numero_Musica = numero_Musica;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getMin() {
        return min;
    }

    public void setMin(int min) {
        this.min = min;
    }

    public Author[] getAuthor() {
        return author;
    }

    public void setAuthor(Author[] author) {
        this.author = author;
    }
    
}
