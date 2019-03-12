/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package PacoteRealidade;

import java.util.List;

/**
 *
 * @author rodrigo
 */
public class Casa extends Local{
    private int comodos;
    private int andares;
    private Viking dono;

    public int getComodos() {
        return comodos;
    }

    public void setComodos(int comodos) {
        this.comodos = comodos;
    }

    public int getAndares() {
        return andares;
    }

    public void setAndares(int andares) {
        this.andares = andares;
    }

    public Viking getDono() {
        return dono;
    }

    public void setDono(Viking dono) {
        this.dono = dono;
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

    public void setArea(double area) {
        this.area = area;
    }

    public int getPopulacao() {
        return populacao;
    }

    public void setPopulacao(int populacao) {
        this.populacao = populacao;
    }

    public List<Personagem> getMoradores() {
        return moradores;
    }

    public void setMoradores(List<Personagem> moradores) {
        this.moradores = moradores;
    }
    
    
}
