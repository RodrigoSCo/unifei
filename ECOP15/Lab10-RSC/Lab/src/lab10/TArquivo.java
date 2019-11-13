package lab10;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;


public class TArquivo {
    public void executar() throws IOException{
        String c="";
        Scanner in = new Scanner(System. in);
        System.out.print("Escreva uma palavra:");
        c=in.nextLine();
        if(c.length()<6){
        File fil = new File("under6.txt");
            FileWriter fir = new FileWriter(fil, true);
            fir.write(c+"\n");
            fir.close();
        }
        if((c.length()>6) && (c.length()<10)){
            File fi = new File("6to10.txt");
            FileWriter f = new FileWriter(fi, true);
            f.write(c+"\n");
            f.close();
        }
        if(c.length()>10){
            File file = new File("over.txt");
            FileWriter fr = new FileWriter(file, true);
            fr.write(c+"\n");
            fr.close();
        
        }
    }
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        TArquivo q = new TArquivo();
        q.executar();
        q.executar();
        q.executar();
    }
    
}
