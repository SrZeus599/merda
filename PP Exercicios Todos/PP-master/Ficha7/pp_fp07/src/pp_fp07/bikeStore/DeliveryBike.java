/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp07.bikeStore;

import pp_fp07.Component.Sponsor;
import pp_fp07.bicycle.Bicycle;

/**
 *
 * @author Isabel Silva
 */
public class DeliveryBike extends Bicycle{
    private float basketCapacity;
    private boolean isFrontBasket;
    private final int SPONSOR_SIZE = 10;
    private Sponsor[] sponsors;
    private int numberOfSponsor;

    public DeliveryBike(float basketCapacity, boolean isFrontBasket, Sponsor[] sponsors, int numberOfSponsor, int id, int numberOfGears, String mainColor, float weelSize, float bikeLenght, boolean adjustableSeatpost, float price) {
        super(id, numberOfGears, mainColor, weelSize, bikeLenght, adjustableSeatpost, price);
        this.basketCapacity = basketCapacity;
        this.isFrontBasket = isFrontBasket;
        this.sponsors = sponsors;
        this.numberOfSponsor = numberOfSponsor;
    }

    public float getBasketCapacity() {
        return basketCapacity;
    }

    public void setBasketCapacity(float basketCapacity) {
        this.basketCapacity = basketCapacity;
    }

    public boolean isIsFrontBasket() {
        return isFrontBasket;
    }

    public void setIsFrontBasket(boolean isFrontBasket) {
        this.isFrontBasket = isFrontBasket;
    }

    public Sponsor[] getSponsors() {
        return sponsors;
    }

    public void setSponsors(Sponsor[] sponsors) {
        this.sponsors = sponsors;
    }

    public int getNumberOfSponsor() {
        return numberOfSponsor;
    }

    public void setNumberOfSponsor(int numberOfSponsor) {
        this.numberOfSponsor = numberOfSponsor;
    }
    
}
