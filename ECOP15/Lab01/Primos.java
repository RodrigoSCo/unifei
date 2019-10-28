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
public class Primos {
    public int lista[];
    public void print(){
        int a=3,b,c=1,d=0,e=1;
        System.out.print("1 2 ");
        while(e==1){
            for(b=2; b<a-1; b++){
                if(a%b==0){
                    a++;
                    d=1;
                    break;
                }
                d=0;
            }
            if(d==0){
                System.out.print(a+" ");
                a++;
                c++;
            }
            if(c==20){
            break;
            }
        }
    System.out.println();
    }
    
    
}
