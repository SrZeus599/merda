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
public class Book {
    private final static int MAX_CRITICAS = 3;
    private static char[] titulo;
    private static char[] editor;
    private static Authors author;
    private static int year;
    private static int numeroPaginas;
    private static int[] cotacao = new int[MAX_CRITICAS];

    public Book(char[] titulo, char[] editor, Authors author, int year, int numeroPaginas, int[] cotacao) {
        Book.titulo = titulo;
        Book.editor = editor;
        Book.author = author;
        Book.year = year;
        Book.numeroPaginas = numeroPaginas;
        Book.cotacao = cotacao;
    }

    public char[] getTitulo() {
        return titulo;
    }

    public char[] getEditor() {
        return editor;
    }

    public Authors getAuthor() {
        return author;
    }

    public int getYear() {
        return year;
    }

    public int getNumeroPaginas() {
        return numeroPaginas;
    }

    public int[] getCotacao() {
        return cotacao;
    }

    
}
