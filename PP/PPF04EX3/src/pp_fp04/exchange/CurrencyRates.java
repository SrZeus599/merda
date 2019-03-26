/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp04.exchange;

/**
 *
 * @author José Pedro
 */
public class CurrencyRates {
     protected double cambio[][] = new double[4][3];
    
    public CurrencyRates() {
        cambio[0][0] = 1.00000;
        cambio[0][1] = 0.76900;
        cambio[0][2] = 96.1141;
        cambio[0][3] = 0.67131;
        cambio[1][0] = 1.30030;
        cambio[1][1] = 1.00000;
        cambio[1][2] = 124.989;
        cambio[1][3] = 0.87290;
        cambio[2][0] = 96.06148;
        cambio[2][1] = 125.000;
        cambio[2][2] = 1.00000;
        cambio[2][3] = 143.26648;
        
    }
    
    public double convert(double quantidadeDinheiro, char nomeMoeda, char moedaConverter){
        double money = 0.0;
        
        switch (moedaConverter) {
            case 'D':
                switch (nomeMoeda) {
                    case 'D':
                        money = quantidadeDinheiro;
                        break;
                    case 'E':
                        money = cambio[0][1] * quantidadeDinheiro;
                        break;
                    case 'I':
                        money = cambio[0][2] * quantidadeDinheiro;
                        break;
                    case 'G':
                        money = cambio[0][3] * quantidadeDinheiro;
                        break;
                    default:
                        break;
                }   break;
            case 'E':
                switch (nomeMoeda) {
                    case 'D':
                        money = cambio[1][0] * quantidadeDinheiro;
                        break;
                    case 'E':
                        money = quantidadeDinheiro;
                        break;
                    case 'I':
                        money = cambio[1][2] * quantidadeDinheiro;
                        break;
                    case 'G':
                        money = cambio[1][3] * quantidadeDinheiro;
                        break;
                    default:
                        break;
                }   break;
            case 'I':
                switch (nomeMoeda) {
                    case 'D':
                        money = cambio[2][0] * quantidadeDinheiro;
                        break;
                    case 'E':
                        money = cambio[2][2] * quantidadeDinheiro;
                        break;
                    case 'I':
                        money = quantidadeDinheiro;
                        break;
                    case 'G':
                        money = cambio[2][3] * quantidadeDinheiro;
                        break;
                    default:
                        break;
                }   break;
            default:
                break;
        }
        
        return money;
    }
}

