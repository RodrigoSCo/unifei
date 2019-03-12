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
public class ForjaFerro extends Local implements Forja{
    @Override
    public Espada makeEspada(){
        return new EspadaFerro();
    }
    @Override
    public Machado makeMachado(){
        return new MachadoFerro();
    }

    @Override
    public Armadura makeArmadura() {
        throw new UnsupportedOperationException("Not supported.");
    }

    @Override
    public Sela makeSela() {
        throw new UnsupportedOperationException("Not supported."); 
    }
}
