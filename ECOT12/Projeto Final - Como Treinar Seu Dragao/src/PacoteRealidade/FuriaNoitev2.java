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
public class FuriaNoitev2 extends FuriaNoitev1{
    private boolean flaps;
    public FuriaNoitev2(FuriaNoitev1 v1){
        setNome(v1.getNome());
        setNascimento(v1.getNascimento());
        setDisparos(v1.getDisparos());
        setVelocidade(v1.getVelocidade());
        setAlfa(v1.isAlfa());
        setForca(v1.getForca());
        setTipoFogo(v1.getTipoFogo());
        setDentes(v1.isDentes());
        setCavalheiro(v1.getCavalheiro());
        setSela(v1.getSela());
        
    }
    
    public boolean isFlaps() {
        return flaps;
    }

    public void setFlaps(boolean flaps) {
        this.flaps = flaps;
      if(flaps==true){
         this.velocidade+=5;
      }
      if(flaps==false){
          this.velocidade = 15;
      }
    }
    
}

    
    

