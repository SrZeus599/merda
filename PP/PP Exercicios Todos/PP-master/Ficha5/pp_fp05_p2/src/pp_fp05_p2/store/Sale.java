/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pp_fp05_p2.store;
import pp_fp05_p2.cd.CD;

/**
 *
 * @author Isabel Silva
 */
public class Sale {
    private int saled;
    private int day;
    private int month;
    private int year;
    private CD[] cds;
    private float custo;

    public Sale(int saled, int day, int month, int year, CD[] cds, float custo) {
        this.saled = saled;
        this.day = day;
        this.month = month;
        this.year = year;
        this.cds = cds;
        this.custo = custo;
    }

    public int getSaled() {
        return saled;
    }

    public void setSaled(int saled) {
        this.saled = saled;
    }

    public int getDay() {
        return day;
    }

    public void setDay(int day) {
        this.day = day;
    }

    public int getMonth() {
        return month;
    }

    public void setMonth(int month) {
        this.month = month;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public CD[] getCds() {
        return cds;
    }

    public void setCds(CD[] cds) {
        this.cds = cds;
    }

    public float getCusto() {
        return custo;
    }

    public void setCusto(float custo) {
        this.custo = custo;
    }
    
    
}
