/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp07.bikeStore;

import pp_fp07.Enums.MountainBikeSuspension;
import pp_fp07.Component.BikeTools;
import pp_fp07.bicycle.Bicycle;

/**
 *
 * @author Isabel Silva
 */
public class MountainBike extends Bicycle{
    /**
     * Numero de luzes{@link MountainBike}
     */
    private int numberOfLight;
    /**
     * Tipo de suspensão{@link MountainBike}
     */
    private MountainBikeSuspension suspension;
    /**
     * Utensilios existentes neste tipo de bicicleta{@link MountainBike}
     */
    private BikeTools[] bikeTools;

    /**
     * 
     * @param numberOfLight Numero de luzes
     * @param suspension Tipo de suspensão
     * @param bikeTools Utensilios existentes neste tipo de bicicleta
     * @param id Identificador da bicicleta
     * @param numberOfGears Numero de Velocidades
     * @param mainColor Cor da bicicleta
     * @param weelSize Diamentro das rodas
     * @param bikeLenght Comprimento da bicicleta
     * @param adjustableSeatpost Saber se e ajustavel
     * @param price Preço da bicicleta
     */
    public MountainBike(int numberOfLight, MountainBikeSuspension suspension, BikeTools[] bikeTools, int id, int numberOfGears, String mainColor, float weelSize, float bikeLenght, boolean adjustableSeatpost, float price) {
        super(id, numberOfGears, mainColor, weelSize, bikeLenght, adjustableSeatpost, price);
        this.numberOfLight = numberOfLight;
        this.suspension = suspension;
        this.bikeTools = bikeTools;
    }

    public int getNumberOfLight() {
        return numberOfLight;
    }

    public void setNumberOfLight(int numberOfLight) {
        this.numberOfLight = numberOfLight;
    }

    public MountainBikeSuspension getSuspension() {
        return suspension;
    }

    public void setSuspension(MountainBikeSuspension suspension) {
        this.suspension = suspension;
    }

    public BikeTools[] getBikeTools() {
        return bikeTools;
    }

    public void setBikeTools(BikeTools[] bikeTools) {
        this.bikeTools = bikeTools;
    }
    
    
}
