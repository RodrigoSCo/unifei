/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package PacoteRealidade;

import java.util.Date;

/**
 *
 * @author rodrigo
 */
public abstract class Personagem {
    protected String nome;
    protected Date nascimento;
    
    public void conversar(String c){
        System.out.print(nome+": "+ c );
    
    }
}
