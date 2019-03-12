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
public class FuriaNoitev3 extends FuriaNoitev2{
    public FuriaNoitev3(FuriaNoitev2 v2){
        super (v2);
        setNome(v2.getNome());
        setNascimento(v2.getNascimento());
        setDisparos(v2.getDisparos());
        setVelocidade(v2.getVelocidade());
        setAlfa(v2.isAlfa());
        setForca(v2.getForca());
        setTipoFogo(v2.getTipoFogo());
        setDentes(v2.isDentes());
        setCavalheiro(v2.getCavalheiro());
        setSela(v2.getSela());
        setFlaps(v2.isFlaps());
        
    }
    public void powerUp(){
        setForca(15);
        setDisparos(1000);//era para ser infinito
        
    }
    
}
