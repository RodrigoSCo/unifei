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
public class ZiperArrepiante extends Dragao{
    ZiperArrepiante(){
        this.setDisparos(6);
        this.setVelocidade(10);
        this.setForca(14);
        this.setTipoFogo(FogoEnum.NITRATO_AMONIA_HIDRAZINA);
    }
    private boolean nevoa;
    private boolean fagulha;

    public boolean isNevoa() {
        return nevoa;
    }

    public void setNevoa(boolean nevoa) {
        this.nevoa = nevoa;
        if(nevoa)
            System.out.print(nome+"expeliu nevoa!!");
            
    }

    public boolean isFagulha() {
        return fagulha;
    }

    public void setFagulha(boolean fagulha) {
        this.fagulha = fagulha;
        if(nevoa==true){
            if(fagulha==true){
                System.out.print(nome+"acendeu a nevoa,BOOOOOMMM!!!");
                nevoa=false;
                
            }
        }
    }
}
