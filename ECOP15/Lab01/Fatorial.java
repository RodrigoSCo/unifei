/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab01;
import java.util.Scanner;
/**
 *
 * @author aluno
 */
public class Fatorial {
    public int fat;
    public void fatorial(int num){
        int x=1, sum=1;
        while(x<=num){
        sum = x*sum;
        x++;
        }
        this.fat=sum;
        System.out.println("Fatorial: "+this.fat);
    }
    
}
