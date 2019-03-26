/*
 * <h3>
 * ESTGF- Escola Superior de Tecnologia e Gestão de Felgueiras
 * IPP - Instituto Politécnico do Porto
 * LSIRC - Licenciatura em Segurança e Informática em Redes de Computadores
 * PP - Paradigmas de Programação
 * </h3>
 * <p>
 * <strong>Description: </strong>
 * Class that represents the user structure
 * </p>
 */
package pp_fp04.exchange;

/**
 *
 * @author Isabel Silva
 */
public class CurrencyRates {

    protected double[][] conversoes;
    
    public CurrencyRates() {
        this.conversoes[0][0] = 1.00000;
        this.conversoes[0][1] = 0.76900;
        this.conversoes[0][2] = 96.1141;
        this.conversoes[0][3] = 0.67131;
        this.conversoes[1][0] = 1.30030;
        this.conversoes[1][1] = 1.00000;
        this.conversoes[1][2] = 124.989;
        this.conversoes[1][3] = 0.87290;
        this.conversoes[2][0] = 96.06148;
        this.conversoes[2][1] = 125.000;
        this.conversoes[2][2] = 1.00000;
        this.conversoes[2][3] = 143.26648;
        
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
                        money = this.conversoes[0][1] * quantidadeDinheiro;
                        break;
                    case 'I':
                        money = this.conversoes[0][2] * quantidadeDinheiro;
                        break;
                    case 'G':
                        money = this.conversoes[0][3] * quantidadeDinheiro;
                        break;
                    default:
                        break;
                }   break;
            case 'E':
                switch (nomeMoeda) {
                    case 'D':
                        money = this.conversoes[1][0] * quantidadeDinheiro;
                        break;
                    case 'E':
                        money = quantidadeDinheiro;
                        break;
                    case 'I':
                        money = this.conversoes[1][2] * quantidadeDinheiro;
                        break;
                    case 'G':
                        money = this.conversoes[1][3] * quantidadeDinheiro;
                        break;
                    default:
                        break;
                }   break;
            case 'I':
                switch (nomeMoeda) {
                    case 'D':
                        money = this.conversoes[2][0] * quantidadeDinheiro;
                        break;
                    case 'E':
                        money = this.conversoes[2][2] * quantidadeDinheiro;
                        break;
                    case 'I':
                        money = quantidadeDinheiro;
                        break;
                    case 'G':
                        money = this.conversoes[2][3] * quantidadeDinheiro;
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
