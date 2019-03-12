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
public class EspadaFerro extends Espada {
    private static final ClassificacaoEnum peso = ClassificacaoEnum.MEDIO;
    private static final ClassificacaoEnum resistencia = ClassificacaoEnum.MEDIO;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
}
