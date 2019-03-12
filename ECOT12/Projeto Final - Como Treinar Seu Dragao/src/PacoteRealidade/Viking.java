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
public class Viking extends Personagem{
    Viking(){
        this.setProfissao(ProfEnum.CACADOR_DRAGAO);
        this.setAtaque(2);
        this.setDefesa(2);
        this.setLider(false);
    }
    private ProfEnum profissao;
    private boolean lider;
    private Dragao dragao;
    private Arma arma;
    private Armadura armadura;
    private int ataque;
    private int defesa;
    
    public int getAtaque() {
        return ataque;
    }

    public void setAtaque(int ataque) {      
        if(ataque<6)this.ataque = ataque;
        else this.ataque=5;
    }

    public int getDefesa() {
        return defesa;
    }

    public void setDefesa(int defesa) {
         if(defesa<6)this.defesa = defesa;
        else this.defesa=2;
    }
        
    
    
    public Arma getArma() {
        return arma;
    }

    public void setArma(Arma arma) {
        if( arma instanceof EspadaAco ||arma instanceof MachadoAco){
            this.ataque = 15;
        }
        else if(arma instanceof EspadaFerro||arma instanceof MachadoFerro){
            this.ataque = 10;
        }
         this.arma = arma;
    }

    public Armadura getArmadura() {
        return armadura;
    }

    public void setArmadura(Armadura armadura) {
        if( armadura instanceof ArmaduraAco){
            this.defesa = 15;
        }
        else if(armadura instanceof ArmaduraCouro){
            this.defesa = 10;
        }
        this.armadura = armadura;
    }

    public ProfEnum getProfissao() {
        return profissao;
    }

    public void setProfissao(ProfEnum profissao) {
        this.profissao = profissao;
    }

    public boolean isLider() {
        return lider;
    }

    public void setLider(boolean lider) {
        this.lider = lider;
    }

    public Dragao getDragao() {
        return dragao;
    }

    public void setDragao(Dragao dragao) {
        this.dragao = dragao;
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
    
    
}
