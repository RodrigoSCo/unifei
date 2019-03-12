/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package PacoteRealidade;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;

/**
 *
 * @author rodrigo
 */
public class Aldeia extends Local{
    protected Viking lider;
    protected Date fundacao;
    protected ArrayList<Local> componentes = new ArrayList<>();

    public Viking getLider() {
        return lider;
    }

    public void setLider(Viking lider) {
        this.lider = lider;
    }

    public Date getFundacao() {
        return fundacao;
    }

    public void setFundacao(Date fundacao) {
        this.fundacao = fundacao;
    }

    public List<Local> getComponentes() {
        return componentes;
    }

    public void setComponentes(ArrayList<Local> componentes) {
        this.componentes = componentes;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getArea() {
        return area;
    }

    public List<Personagem> getMoradores() {
        return moradores;
    }

    public void setMoradores(List<Personagem> moradores) {
        this.moradores = moradores;
    }
    

    public void setArea(double area) {
        this.area = area;
    }

    public int getPopulacao() {
        return populacao;
    }

    public void setPopulacao(int populacao) {
        this.populacao = populacao;
    }
    
}
