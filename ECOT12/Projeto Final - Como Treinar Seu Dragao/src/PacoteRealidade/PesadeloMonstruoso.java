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
public class PesadeloMonstruoso extends Dragao{
    PesadeloMonstruoso(){
        this.setDisparos(10);
        this.setVelocidade(16);
        this.setForca(15);
        this.setTipoFogo(FogoEnum.GEL_QUEROSENE);
    }
    private boolean fogoPele = false;

    public boolean isFogoPele() {
        return fogoPele;
    }

    public void setFogoPele(boolean fogoPele) {
        this.fogoPele = fogoPele;
        if(fogoPele==true)
            System.out.print(nome+" está em chamas!!");
    }
    
    
}
