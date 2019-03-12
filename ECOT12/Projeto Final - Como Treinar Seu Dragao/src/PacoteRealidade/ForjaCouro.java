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
public class ForjaCouro extends Local implements Forja{
    @Override
    public Armadura makeArmadura(){
        return new ArmaduraCouro();
    }
    @Override
    public Sela  makeSela(){
        return new SelaCouro();
    }

    @Override
    public Espada makeEspada() {
        throw new UnsupportedOperationException("Not supported.");
    }

    @Override
    public Machado makeMachado() {
        throw new UnsupportedOperationException("Not supported."); //To change body of generated methods, choose Tools | Templates.
    }
}
