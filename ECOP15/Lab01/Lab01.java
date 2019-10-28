/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab01;

import java.util.Scanner;

/**
 *
 * @author aluno
 */
public class Lab01 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        int a, l, fa, v, an;
        char b, p;
        
        Retangulo r = new Retangulo();
        System.out.print( "Largura: " ); // prompt
	l = input.nextInt();
        System.out.print( "Altura: " ); // prompt
	a = input.nextInt();
        System.out.print( "Borda: " ); // prompt
	b = input.next().charAt(0);
        System.out.print( "Preenchimento: " ); // prompt
	p = input.next().charAt(0);
        r.getAlt(a);r.getLarg(l);r.getBorda(b);r.getPreen(p);
        r.print();
        
        Fatorial f = new Fatorial();
        System.out.print( "Fatorial: " ); // prompt
	fa = input.nextInt();
        f.fatorial(fa);
        
        Distancia d = new Distancia();
        System.out.print( "Velocidade: " ); // prompt
	v = input.nextInt();
        System.out.print( "Angulo: " ); // prompt
	an = input.nextInt();
        d.distancia(v, an);
        
        Primos pr = new Primos();
        pr.print();
        
        Palindromo pa = new Palindromo();
        System.out.print("Escolha um numero para testar se ele eh um palindromo: ");
        int num = input.nextInt();
        while(((num/10000)<1) || ((num/100000)>1)){
	System.out.print("Numero invalido, por favor insira outro numero: ");
	num = input.nextInt();
        }
        pa.verificar(num);
        
        BinToDec k = new BinToDec();
        System.out.print("Escolha um numero binario para ser convertido em decimal: ");
        int bin = input.nextInt();
        k.convert(bin);
        
    
    }
    
}
