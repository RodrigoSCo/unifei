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
public class NaderMortal extends Dragao{
    NaderMortal(){
        this.setDisparos(6);
        this.setVelocidade(8);
        this.setForca(18);
        this.setTipoFogo(FogoEnum.MAGNESIUM);
    }
    private int espinhos;
    private ClassificacaoEnum posicaoEspinhos;
    
    public int getEspinhos() {
        return espinhos;
    }

    public void setEspinhos(int espinhos) {
        this.espinhos = espinhos;
    }

    public ClassificacaoEnum getPosicaoEspinhos() {
        return posicaoEspinhos;
    }

    public void setPosicaoEspinhos(ClassificacaoEnum posicaoEspinhos) {
        this.posicaoEspinhos = posicaoEspinhos;
    }
    
    
    
}
