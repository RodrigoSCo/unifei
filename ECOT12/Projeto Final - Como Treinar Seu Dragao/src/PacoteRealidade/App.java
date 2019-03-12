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
public class App {
    public static void main(String[] args) {
        Viking s = new Viking();
        s.setNome("Soluco");
        s.setProfissao(ProfEnum.CALAVEIRO_DRAGAO);
        FuriaNoitev1 b = new FuriaNoitev1();
        b.setNome("Banguela");
        s.setDragao(b);
        b.setCavalheiro(s);
        b.setAlfa(true);
        FuriaNoitev2 v2 = new FuriaNoitev2(b);
        FuriaNoitev3 v3 = new FuriaNoitev3(v2);
        System.out.println("Ataque de "+s.getNome()+" = "+s.getAtaque());
        System.out.println("Defesa de "+s.getNome()+" = "+s.getDefesa());
        System.out.println("A velocidade de "+v3.getNome()+" é "+v3.getVelocidade());

        
        Aldeia a = new Aldeia();
        a.setNome("Berk");
        a.setLider(s);
        Casa c = new Casa();
        c.setDono(s);
        NinhoDragoes nd = new NinhoDragoes();
        a.componentes.add(nd);
        nd.setAlfa(v3);
        System.out.print("\n"+s.getNome()+" mora em "+a.getNome()+" e ");
        if(s.isLider()){
            System.out.print(" é Lider ");
        }else System.out.print("não é Lider ");
        System.out.println("desse lugar." );
        
        ForjaAco fa= new ForjaAco();
        ForjaFerro ff = new ForjaFerro();
        ForjaCouro fc = new ForjaCouro();
        a.componentes.add(fa);
        a.componentes.add(ff);
        a.componentes.add(fc);
        System.out.println(a.getComponentes());
        System.out.println();
        
        
        Machado ma = fa.makeMachado();
        Armadura ar = fc.makeArmadura();
        Sela se= fc.makeSela();
        v3.setSela(se);
        s.setArma(ma);
        ma.setNome("Midjonir");
        s.setAtaque(6);
        System.out.println(s.getNome()+ " pega "+ma.getNome());        
        System.out.println("Ataque de "+s.getNome()+" = "+s.getAtaque());
        System.out.println(v3.getNome()+" poe a sela ");
        System.out.println("A velocidade de "+v3.getNome()+" é "+v3.getVelocidade());
        s.setArmadura(ar);
        s.setDefesa(5);
        
        System.out.println(s.getNome()+"poe uma armadura.");
        System.out.println("Defesa de "+s.getNome()+" = "+s.getDefesa());
        
    }
    
}
