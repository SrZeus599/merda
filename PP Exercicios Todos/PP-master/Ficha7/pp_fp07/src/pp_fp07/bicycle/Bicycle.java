
package pp_fp07.bicycle;

/**
 *
 * @author Isabel Silva
 */
public class Bicycle {
    
    /**
     * Identificador da bicicleta {@link Bicycle}
     */
    private int id;
    /**
     * Numero de Velocidades {@link Bicycle}
     */
    private int numberOfGears;
    /**
     * Cor da bicicleta {@link Bicycle}
     */
    private String mainColor;
    /**
     * Diamentro das rodas {@link Bicycle}
     */
    private float weelSize;
    /**
     * Comprimento da bicicleta {@link Bicycle}
     */
    private float bikeLenght;
    /**
     * Saber se e ajustavel {@link Bicycle}
     */
    private boolean adjustableSeatpost;
    /**
     * Preço da bicicleta {@link Bicycle}
     */
    private float price;

    /**
     * 
     * @param id Identificador da bicicleta
     * @param numberOfGears Numero de Velocidades
     * @param mainColor Cor da bicicleta
     * @param weelSize Diamentro das rodas
     * @param bikeLenght Comprimento da bicicleta
     * @param adjustableSeatpost Saber se e ajustavel
     * @param price Preço da bicicleta
     */
    public Bicycle(int id, int numberOfGears, String mainColor, float weelSize, float bikeLenght, boolean adjustableSeatpost, float price) {
        this.id = id;
        this.numberOfGears = numberOfGears;
        this.mainColor = mainColor;
        this.weelSize = weelSize;
        this.bikeLenght = bikeLenght;
        this.adjustableSeatpost = adjustableSeatpost;
        this.price = price;
    }
    /**
     * Retorna o {@link Bicycle#id} de uma bicicleta
     * @return 
     */
    public int getId() {
        return id;
    }
    /**
     * Modifica o {@link Bicycle#id} de uma bicicleta
     * @param id 
     */
    public void setId(int id) {
        this.id = id;
    }
    /**
     * Retorna o {@link Bicycle#numberOfGears} de uma bicicleta
     * @return 
     */
    public int getNumberOfGears() {
        return numberOfGears;
    }
    /**
     * Modifica o {@link Bicycle#numberOfGears} de uma bicicleta
     * @param numberOfGears 
     */
    public void setNumberOfGears(int numberOfGears) {
        this.numberOfGears = numberOfGears;
    }
    /**
     * Retorna o {@link Bicycle#mainColor} de uma bicicleta
     * @return 
     */
    public String getMainColor() {
        return mainColor;
    }
    /**
     * Modifica o {@link Bicycle#mainColor} de uma bicicleta
     * @param mainColor 
     */
    public void setMainColor(String mainColor) {
        this.mainColor = mainColor;
    }
    /**
     * Retorna o {@link Bicycle#weelSize} de uma bicicleta 
     * @return  
     */
    public float getWeelSize() {
        return weelSize;
    }
    /**
     * Modifica o {@link Bicycle#weelSize} de uma bicicleta
     * @param weelSize 
     */
    public void setWeelSize(float weelSize) {
        this.weelSize = weelSize;
    }
    /**
     * Retorna o {@link Bicycle#bikeLenght} de uma bicicleta 
     * @return  
     */
    public float getBikeLenght() {
        return bikeLenght;
    }
    /**
     * Modifica o {@link Bicycle#bikeLenght} de uma bicicleta
     * @param bikeLenght 
     */
    public void setBikeLenght(float bikeLenght) {
        this.bikeLenght = bikeLenght;
    }
    /**
     * Retorna o {@link Bicycle#adjustableSeatpost} de uma bicicleta 
     * @return  
     */
    public boolean isAdjustableSeatpost() {
        return adjustableSeatpost;
    }
    /**
     * Modifica o {@link Bicycle#adjustableSeatpost} de uma bicicleta
     * @param adjustableSeatpost 
     */
    public void setAdjustableSeatpost(boolean adjustableSeatpost) {
        this.adjustableSeatpost = adjustableSeatpost;
    }
    /**
     * Retorna o {@link Bicycle#price} de uma bicicleta 
     * @return  
     */
    public float getPrice() {
        return price;
    }
    /**
     * Modifica o {@link Bicycle#price} de uma bicicleta
     * @param price 
     */
    public void setPrice(float price) {
        this.price = price;
    }
    
    
}
