/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex3;

/**
 *
 * @author Isabel Silva
 */
public class Ex3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        boolean canITakeHisMoney;
	int hisBalance=5;
	long myBalance=4;
	hisBalance +=8;
	canITakeHisMoney = hisBalance>myBalance;
	canITakeHisMoney= canITakeHisMoney&(hisBalance >=3);
	System.out.println(canITakeHisMoney);
    }
    
}
