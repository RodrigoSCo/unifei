/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab02;

import java.util.Scanner;

/**
 *
 * @author aluno
 */
public class Lab02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        String k = new String();
        k = "GCUUUUUAA";
        int b=0;
        
        System.out.println("Please enter a RNA Sequence: ");
        k = input.nextLine();
        StringRNA o = new StringRNA(k);
        System.out.println("The RNA Sequence you enterd is: "+o.toString());
        System.out.println("Chose a String position: ");
        b = input.nextInt();
        System.out.println("The Char at "+b+" position is: "+o.charAt(b));
        System.out.println("This String lenght is: "+o.length());
        System.out.print("Aminoacids: ");
        o.aminoacidos();
        o.sAminoacidos();
    }
    
}
