package lab10;

import java.io.IOException;
import java.lang.IllegalStateException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.NoSuchElementException;
import java.util.Scanner;

public class Compare {

    private static Scanner arq1;
    private static Scanner arq2;
    
    public static void main(String[] args) {
        openFile();
        readRecords();
        closeFile();
    }
    public static void openFile()
    {
    try
        {
            arq1 = new Scanner(Paths.get("clients.txt"));
            arq2 = new Scanner(Paths.get("clients.txt"));
        }
        catch (IOException ioException)
        {
            System.err.println("Error opening file. Terminating.");
            System.exit(1);
        }
    }
    public static void readRecords()
    {
        try
        {
            while (arq1.hasNext() && arq2.hasNext()) // enquanto houver mais para ler
            {
                if((arq1.next().equals(arq2.next()))==true){
                    System.out.printf("IGUAL\n");
                } else {
                    System.out.printf("DIFERENTE\n");
                    System.exit(1);
                }
            }
        }
        catch (NoSuchElementException elementException)
        {
            System.err.println("File improperly formed. Terminating.");
        }
        catch (IllegalStateException stateException)
        {
            System.err.println("Error reading from file. Terminating.");
        }
    }
    
    public static void closeFile()
    {
        if (arq1 != null)
        arq1.close();
        
        if (arq2 != null)
        arq2.close();
    }
}
