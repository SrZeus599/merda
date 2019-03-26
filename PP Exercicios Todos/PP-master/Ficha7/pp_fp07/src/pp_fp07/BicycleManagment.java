/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp07;

import pp_fp07.bicycle.Bicycle;

public class BicycleManagment {
    private final int MAX_BIC = 20;
    private Bicycle[] bicicletas;
    private int count;
    
    public BicycleManagment() {
        
        this.count = 0;
        this.bicicletas = new Bicycle[this.MAX_BIC];
    }

    public Bicycle[] getBicicletas() {
        return bicicletas;
    }

    public void setBicicletas(Bicycle bicicletas) {
        this.bicicletas[this.count] = bicicletas;
        this.count++;
    }

    public void printBicicletas(){
        for(int i=0;i<this.count;i++){
            System.out.println("Registada no store - Id: " + bicicletas[i].getId());
        }
    }
}
