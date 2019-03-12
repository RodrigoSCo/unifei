/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package PacoteRealidade;

/**
 *
 * @author rodrigo
 */
public abstract class Arma {//FACADE para colocar machado ou espada como arma em um viking
    protected String nome;
    
    public abstract String getNome();

    public abstract void setNome(String nome);
}
