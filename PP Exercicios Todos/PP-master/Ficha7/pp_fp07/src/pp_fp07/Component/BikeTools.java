/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp07.Component;

/**
 *
 * @author Isabel Silva
 */
public class BikeTools {
    /**
    * Se contem Luvas{@link BikeTools}
    */
    private boolean luvas;
    /**
    * Se contem Capacete{@link BikeTools}
    */
    private boolean capacete;

    /**
     * 
     * @param luvas Se contem Luvas
     * @param capacete Se contem Capacete
     */
    public BikeTools(boolean luvas, boolean capacete) {
        this.luvas = luvas;
        this.capacete = capacete;
    }
    /**
     * Retorna o {@link BikeTools#luvas} de uma Ferramentas
     * @return 
     */
    public boolean isLuvas() {
        return luvas;
    }
    /**
     * Retorna o {@link BikeTools#luvas} de uma Ferramentas
     * @param luvas 
     */
    public void setLuvas(boolean luvas) {
        this.luvas = luvas;
    }
    /**
     * Retorna o {@link BikeTools#capacete} de uma Ferramentas
     * @return 
     */
    public boolean isCapacete() {
        return capacete;
    }
    /**
     * Retorna o {@link BikeTools#luvas} de uma Ferramentas
     * @param capacete 
     */
    public void setCapacete(boolean capacete) {
        this.capacete = capacete;
    }
    
    
}
