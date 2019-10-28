/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab02;

/**
 *
 * @author aluno
 */
public class StringRNA {
    public String RNA;
    public String tabel[][]= {
        {"Alanine"          ,"A",   "GCU","GCC","GCA","GCG"},
        {"Arginine"         ,"R",   "CGU","CGC","CGA","CGG","AGA","AGG"},
        {"Aspartic Acid"    ,"D",   "GAU","GAC"},
        {"Arparginine"      ,"N",   "AAU","AAC"},
        {"Cysteine"         ,"C",   "UGU","UGC"},
        {"Glutamic acid"    ,"E",   "GAA","GAG"},
        {"Glutamine"        ,"Q",   "CAA","CAG"},
        {"Glycine"          ,"G",   "GGU","GGC","GGA","GGG"},
        {"Histine"          ,"H",   "CAU","CAC"},
        {"Isoleucine"       ,"I",   "AUU","AUC","AUA"},
        {"Leucine"          ,"L",   "UUA","UUG","CUU","CUC","CUA","CUG"},
        {"Lysine"           ,"K",   "AAA","AAG"},
        {"Methionine"       ,"M",   "AUG"},
        {"Phenylalanine"    ,"F",   "UUU","UUC"},
        {"Proline"          ,"P",   "CCU","CCC","CCA","CCG"},
        {"Serine"           ,"S",   "AGU","AGC","UCU","UCC","UCA","UCG"},
        {"Threonine"        ,"T",   "ACU","ACC","ACA","ACG"},
        {"Tryptophan"       ,"W",   "UGG"},
        {"Valine"           ,"V ",  "GUU","GUC","GUA","GUG"},
        {"Sinais de término ",".",  "UAA","UAG","UGA"}
    };
    public StringRNA(String a){
        this.RNA = new String();
        int i=0; boolean ok = true;
        a = a.toUpperCase();
        while(i <= a.length()){
            
            if(a.charAt(i)=='A'||a.charAt(i)=='C'||a.charAt(i)=='U'||a.charAt(i)=='G'){
                ok = true;
                
            }
            else ok = false;
        i++;
        }
        if(ok)
            this.RNA = a;
                  
        
    }
    @Override
    public String toString(){        
        return this.RNA;
    }
    
    public char charAt(int k){
        return this.RNA.charAt(k);
    }
    public int length(){
        return this.RNA.length();
    }
    public int quantosChar(char x){
        int i = 0, cont = 0;
        while(i <= RNA.length()){
            if(RNA.charAt(i)==x){
                cont++;               
            }
            i++;
        }
        return 0;
    }
    public void aminoacidos(){
        int i = 0;
        while(i <= RNA.length()){
             String x = this.RNA.substring(i, i+2);
             int col = 2, lin = 0;
             while(lin <= 20){
                 while(col <= 6){
                     if(x.compareTo(tabel[lin][col])==0){
                         System.out.print(tabel[lin][0]+" ");
                         col++;
                     }
                    lin++;
                 }
             }
            
            i=+3;
        }
        
    }
    public void sAminoacidos(){
        int i = 0;
        while(i <= RNA.length()){
             String x = this.RNA.substring(i, i+2);
             int col = 2, lin = 0;
             while(lin <= 20){
                 while(col <= 6){
                     if(x.compareTo(tabel[lin][col])==0){
                         System.out.print(tabel[lin][1]);
                     }
                 }
             }
            
            i=+3;
        }
        
    }
}
