/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab8;

/**
 *
 * @author jao
 */
public class Main {

    /**
     * Creates new form Main
     */
    public Main() {
        initComponents();
    }


    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        Calculadora c = new Calculadora();
        c.setVisible(true);
        Triangulo t = new Triangulo();
        t.setVisible(true);
        Parametros p = new Parametros();
        p.setVisible(true);
    }


}
