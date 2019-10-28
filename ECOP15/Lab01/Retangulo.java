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
public class Retangulo {
    public int larg=12, alt=4;
    public char borda='x', preen='.';
    public boolean b= true;
    
    public void getLarg(int c){
        this.larg=c;
    }
     public void getAlt(int c){
        this.alt=c;
    }
    public void getBorda(char c){
        this.borda=c;
    }
    public void getPreen(char c){
        this.preen=c;
    }
    public void print(){
        char m = 0;
        int x, y;
        for(x=0;x<this.alt;x++){
            for(y=0;y<this.larg;y++){
                if(x==0 || x==this.alt-1 || y==0 || y==this.larg-1)
                    m = this.borda;
                else if(b){
                    m = this.preen;
                }
                System.out.print(m);
            }
            System.out.println();
        }
    }
}
