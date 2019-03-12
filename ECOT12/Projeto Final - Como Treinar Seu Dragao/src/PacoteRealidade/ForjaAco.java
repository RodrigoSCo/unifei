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
public class ForjaAco extends Local implements Forja{

    @Override
    public Armadura makeArmadura() {
        return new ArmaduraAco();
    }

    @Override
    public Espada makeEspada() {
        return new EspadaAco();
    }

    @Override
    public Machado makeMachado() {
        return new MachadoAco();
    }

    @Override
    public Sela makeSela() {
        return new SelaAco();
    }
    
    
}
