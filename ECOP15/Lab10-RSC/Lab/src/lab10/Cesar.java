package lab10;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.nio.file.Paths;
import java.util.Formatter;
import java.util.FormatterClosedException;
import java.util.NoSuchElementException;
import java.util.Scanner;

public class Cesar {

    private static Formatter file_out;
    private static Scanner input;
    static String texto = new String();
    
    public static void openFileout(String s){
        
        try{
            file_out = new Formatter(s);
 
        }
        catch(SecurityException securityException){
            System.err.println("Write permission denied. Terminating.");
            System.exit(1);
        }
        catch(FileNotFoundException fileNotFoundExecption){
            System.err.println("Error opening file. Terminating.");
            System.exit(1);
        }
    }
    
    public static void addRecords(int c){
        String saida = new String();
        
            try{
                for(int i = 0;i < texto.length();i++){
                    saida += (char)(texto.charAt(i) + c);
                }
                file_out.format("%s",saida);
            }
            catch(FormatterClosedException formatterClosedExecption){
                System.err.println("Error");
                
            }
            catch(NoSuchElementException elementException){
                System.err.println("Error");

            }
        
    }
    
    public static void openFilein(String s){
        try{
            input = new Scanner(Paths.get(s));
        }
        catch(IOException ioExcepiton){
            System.err.println("Error opening file. Terminating.");
            System.exit(1);
        }
    }
    
    public static void readRecords(){
        try{
            while(input.hasNext()){
                texto += input.next();
            }
           
       }
       catch(NoSuchElementException elementException){
            System.err.println ("File improperly formed . Terminating");
       }
        catch(IllegalStateException stateException){
            System.err.println("Error reading from file. Terminating");
        }
    }
    
    public static void closeFile(){
        if(file_out != null){
            file_out.close();
        }
        if(input != null){
            input.close();
        }
    }
    
    public static void main(String[] args) {

           Scanner in = new Scanner(System.in);
           String f1,f2;
           int key;
           
           System.out.println("Enter the file name to read: ");
           f1 = in.next();
           System.out.println("Enter the file name to write");
           f2 = in.next();
           System.out.println("Enter the key word to encrypt");
           key = in.nextInt();
           
           openFilein(f1);
           readRecords();
           openFileout(f2);
           addRecords(key);
           closeFile();
           
    }
    
}
