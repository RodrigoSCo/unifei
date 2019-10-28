/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab01;

/**
 *
 * @author Rodrigo Coelho
 */
public class BinToDec {
    public int dec;
    public void convert(int bin){
        int temp,mult=0;
        while(bin!=0){
            temp = bin%10;
            bin = bin/10;
            this.dec = (int) (temp*Math.pow(2,mult)+this.dec);
            mult++;
        }
        System.out.println("Decimal: "+this.dec);
    }
    
}
