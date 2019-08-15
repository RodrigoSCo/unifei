/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab01;
/**
 *
 * @author aluno
 */
public class Palindromo {
    public int num;
    public void verificar(int num){
        int p,s,t,qa,qi,pal;
        p = num/10000;
        s = num/1000-p*10;
        t = num/100-p*100-s*10;    
        qa = num/10-p*1000-s*100-t*10;    
        qi = num-p*10000-s*1000-t*100-qa*10;
        pal=p+s*10+t*100+qa*1000+qi*10000;
        if(num==pal){
            System.out.println("Este numero eh Palindromo!!!");
            this.num=num;
        }
        else
            System.out.println("Este numero não eh Palindromo!!!");
        }
     
}
