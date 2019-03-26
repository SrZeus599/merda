/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp07;

import pp_fp07.bikeStore.MountainBike;
import pp_fp07.Component.BikeTools;
import pp_fp07.Enums.MountainBikeSuspension;
import static java.lang.System.out;

/**
 *
 * @author Acer
 */
public class Pp_fp07 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        BikeTools[] bikeTools;
        bikeTools = new BikeTools[2];
        bikeTools[0] = new BikeTools(false,false);
        bikeTools[1] = new BikeTools(true,false);
        MountainBike bike = new MountainBike(23, MountainBikeSuspension.INTERMEDIA, bikeTools, 24, 2, "Amarelo", (float) 23.2, (float) 12.2, false, (float) 12.2);
        
        out.println("Preço: " + bike.getPrice());
        
        BicycleManagment man = new BicycleManagment();
        man.setBicicletas(bike);
        man.printBicicletas();
    }
        
}
