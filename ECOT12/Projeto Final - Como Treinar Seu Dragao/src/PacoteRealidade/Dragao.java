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
public class Dragao extends Personagem{
    protected int disparos;
    protected int velocidade;
    protected int forca;
    protected FogoEnum tipoFogo;
    protected boolean alfa;
    protected Sela sela;
    protected Viking cavalheiro;

    public Sela getSela() {
        return sela;
    }

    public void setSela(Sela sela) {
        if( sela instanceof SelaAco){
            velocidade=velocidade +2 ;
        }
        else if(sela instanceof SelaCouro){
            velocidade=velocidade +5 ;
        }
        
        this.sela = sela;
    }

    public int getDisparos() {
        return disparos;
    }

    public void setDisparos(int disparos) {
        this.disparos = disparos;
    }

    public int getVelocidade() {
        return velocidade;
    }

    public void setVelocidade(int velocidade) {
        this.velocidade = velocidade;
    }

    public int getForca() {
        return forca;
    }

    public void setForca(int forca) {
        this.forca = forca;
    }

    public FogoEnum getTipoFogo() {
        return tipoFogo;
    }

    public void setTipoFogo(FogoEnum tipoFogo) {
        this.tipoFogo = tipoFogo;
    }

    public boolean isAlfa() {
        return alfa;
    }

    public void setAlfa(boolean alfa) {
        this.alfa = alfa;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Date getNascimento() {
        return nascimento;
    }

    public void setNascimento(Date nascimento) {
        this.nascimento = nascimento;
    }

    public Viking getCavalheiro() {
        return cavalheiro;
    }

    public void setCavalheiro(Viking cavalheiro) {
        this.cavalheiro = cavalheiro;
    }
    
    
}
