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
public class Gronkle extends Dragao{
    Gronkle(){
        this.setDisparos(8);
        this.setVelocidade(4);
        this.setForca(14);
        this.setTipoFogo(FogoEnum.HEPTANO);
}
    public void bolaLava(){
        System.out.print("O "+ nome +" cuspiu uma bola de lava");
    }
    
}
