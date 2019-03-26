/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp05_p2.cd;

/**
 *
 * @author Acer
 */
public class CD {
    //Variáveis de Instância
    /**
     * Nome do CD({@link CD})
     */
    protected String name;
    /**
     * Ano do Lancamento({@link CD})
     */
    protected int year;
    /**
     * Nome do editor({@link CD})
     */
    protected String editor;
    /**
     * Numero de musicas({@link CD})
     */
    protected int numero_Musicas;
    /**
     * Musicas({@link Track}) do CD({@link CD})
     */
    protected Track[] tracks;
    
    /**
     * Metodo Construtor para criacao da instancia de ({@link CD}), tendo por
     * base todos os atributos do CD({@link CD}) e ainda do Track({@link Track})
     * @param name Nome do CD({@link CD})
     * @param year Ano do Lancamento({@link CD})
     * @param editor Nome do editor({@link CD})
     * @param numero_Musicas Numero de muscicas({@link CD})
     * @param tracks Musicas({@link Track}) do CD({@link CD})
     */
    public CD(String name, int year, String editor, int numero_Musicas, Track[] tracks) {
        this.name = name;
        this.year = year;
        this.editor = editor;
        this.tracks = tracks;
        this.numero_Musicas = numero_Musicas;
    }
    
    //Métodos de Instância
    
    /**
     * Interrogador do Name
     * @return Nome do CD({@link CD})
     */
    public String getName() {
        return name;
    }
    
    /**
     * Modificador do Nome
     * @param name 
     */
    public void setName(String name) {
        this.name = name;
    }
    /**
     * Interrogador do Ano
     * @return Ano do CD({@link CD})
     */
    public int getYear() {
        return year;
    }
    /**
     * Modificador do Ano
     * @param year 
     */
    public void setYear(int year) {
        this.year = year;
    }
    /**
     * Interrogador nome do Editor
     * @return Nome do editor({@link CD})
     */
    public String getEditor() {
        return editor;
    }
    /**
     * Modificador do nome do editor
     * @param editor 
     */
    public void setEditor(String editor) {
        this.editor = editor;
    }
    /**
     * Interrogador Numero de muscicas
     * @return Numero de muscicas({@link CD})
     */
    public int getNumero_Musicas() {
        return numero_Musicas;
    }
    /**
     * Modificador do Numero de muscicas
     * @param numero_Musicas 
     */
    public void setNumero_Musicas(int numero_Musicas) {
        this.numero_Musicas = numero_Musicas;
    }
    /**
     * Interrogador Musicas
     * @return Musicas({@link Track}) do CD({@link CD})
     */
    public Track[] getTracks() {
        return tracks;
    }
    /**
     * Modificador das Musicas
     * @param tracks 
     */
    public void setTracks(Track[] tracks) {
        this.tracks = tracks;
    }
}
