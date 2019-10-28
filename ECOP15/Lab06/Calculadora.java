
package ecop15.lab06;

import java.awt.BorderLayout;
import java.awt.Font;
import java.awt.GridLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.SwingConstants;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author rodrigo
 */
public class Calculadora extends JFrame{
    private String vetor[] = {"7","8","9","/",
                              "4","5","6","*",
                              "1","2","3","-",
                              "0",",","+","="};
    
    private JButton botoes[] = new JButton[vetor.length];
    private JTextField display = new JTextField();
    private JPanel teclado = new JPanel();
    public Calculadora(){
        super("Calculadora sem funcao");
        teclado.setLayout(new GridLayout(4,4,2,2));
        for(int i =0; i<vetor.length; i++){
            
            botoes[i] = new JButton(vetor[i]);
            teclado.add(botoes[i]);
        }
        display.setFont(new Font("Sans Serif",Font.PLAIN,36));
        display.setHorizontalAlignment(SwingConstants.RIGHT);
        add(display, BorderLayout.NORTH);
        add(teclado, BorderLayout.CENTER);
    }
   
}
