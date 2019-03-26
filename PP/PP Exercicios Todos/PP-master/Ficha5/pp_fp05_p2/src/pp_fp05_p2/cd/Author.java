
package pp_fp05_p2.cd;

/**
 *
 * @author Isabel Silva
 */
public class Author {
    /**
     * Nome({@link Author})
     */
    protected String name;
    /**
     * Idade({@link Author})
     */
    protected int idade;
    /**
     * Morada({@link Author})
     */
    protected String morada;
    /**
     * NIF({@link Author})
     */
    protected int nif;
    /**
     * NIB({@link Author})
     */
    protected int nib;
    
    /**
     * Metodo construtor obrigatorio
     * @param idade Nome({@link Author})
     * @param name Idade({@link Author})
     */
    Author(int idade, String name){
        this.idade = idade;
        this.name = name;
    }
    /**
     * Metodo Construtor para criacao da instancia de ({@link Author}), tendo por
     * base todos os atributos do Track({@link Author})
     * @param idade Nome({@link Author})
     * @param name Idade({@link Author})
     * @param morada Morada({@link Author})
     * @param nif NIF({@link Author})
     * @param nib NIB({@link Author})
     */
    Author(int idade, String name, String morada, int nif, int nib){
        this.idade = idade;
        this.morada = morada;
        this.name = name;
        this.nib = nib;
        this.nif = nif;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public String getMorada() {
        return morada;
    }

    public void setMorada(String morada) {
        this.morada = morada;
    }

    public int getNif() {
        return nif;
    }

    public void setNif(int nif) {
        this.nif = nif;
    }

    public int getNib() {
        return nib;
    }

    public void setNib(int nib) {
        this.nib = nib;
    }
    
}
