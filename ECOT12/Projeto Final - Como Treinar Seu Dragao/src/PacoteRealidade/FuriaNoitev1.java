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
public class FuriaNoitev1 extends Dragao{
    
    FuriaNoitev1(){
        this.setDisparos(8);
        this.setVelocidade(15);
        this.setForca(15);
        this.setTipoFogo(FogoEnum.ACETILENO);
    }
    private boolean dentes = false;

    public boolean isDentes() {
        return dentes;
    }

    public void setDentes(boolean dentes) {
        this.dentes = dentes;
        
    }
    
    
}
