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
public class Price {
    /**
     * Preço do CD({@link CD})
     */
    protected float preço;
    /*
    * Metodo construtor sem valor associado
    */
    Price(){}
    /**
     * Metodo construtor
     * Preco do CD({@link CD})
     * @param preço 
     */
    Price(float preço){
        this.preço = preço;
    }

    public float getPreço() {
        return preço;
    }

    public void setPreço(float preço) {
        this.preço = preço;
    }
    
}
