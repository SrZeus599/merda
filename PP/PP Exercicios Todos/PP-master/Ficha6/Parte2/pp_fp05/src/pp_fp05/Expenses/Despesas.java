/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp05.Expenses;
import java.util.Date;

/**
 *
 * @author Acer
 */
public class Despesas {
    private Expense[] despesas;
    private final int MAX = 30;
    private int n;
    
    public Despesas() {
        this.n = 0;
        this.despesas = new Expense[MAX];
    }

    public void setDespesas(Expense despesas) {
        this.despesas[this.n] = despesas;
        this.n++;
    }
    
    public void removeDespesa(int id){
        int f = -1,i;
        for(i=0;i<this.n;i++){
            if(this.despesas[i].getNumber() == id){
                f = i;
            }
        }
        if(f != -1){
            for(int j = i; j< this.n-1;i++){
                this.despesas[j] = this.despesas[j++];
            }
            this.n--;
        }
    }
    public void removeDespesaTodooMes(Date data){
        int f = -1,i;
        for(i=0;i<this.n;i++){
            if(this.despesas[i].getData().getMonth() == data.getMonth()){
                f = i;
            }
        }
        if(f != -1){
            for(int j = i; j< this.n-1;i++){
                this.despesas[j] = this.despesas[j++];
            }
            this.n--;
        }
    }
    public void alteraInforDespesa(int id, DESPESA tipo){
        int f = -1,i;
        for(i=0;i<this.n;i++){
            if(this.despesas[i].getNumber() == id){
                f = i;
            }
        }
        if(f != -1){//incompleto
            this.despesas[f].setType(tipo);
        }
    }

    public Expense[] getDespesas() {
        return despesas;
    }
    
}
