/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ecop15.lab04;

import java.awt.FlowLayout;
import java.awt.PopupMenu;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;

/**
 *
 * @author aluno
 */
public class Pascal  extends JFrame{
    JTextField texto;
    JTextArea display;
    JScrollPane saida;
    
    public Pascal(){
        super ("triangulo de pascal");
        setLayout(new FlowLayout());
        add(new JLabel("Entre com o numero de linhas"));
        texto = new JTextField(5);
        add(texto);
        display = new JTextArea(20,20);
        saida = new JScrollPane(display);
        add(saida);
        texto.addActionListener((ActionEvent ae) -> {
            int linha = Integer.parseInt(texto.getText());//To change body of generated methods, choose Tools | Templates.
            
            
            int mat[][];
            mat = new int [linha][];
            for(int i = 0 ; i< mat.length; i++){
                mat[i] = new int [i+2];
                mat[i][0]=1;
                mat[i][mat[i].length-1]=1;
            }
            String triangulo = " " ; 
            
            for(int i = 1; i < mat.length; i++){
                for(int j = 1; j< mat[i].length-1; j++){
                    
                    mat[i][j]= mat[i-1][j]+mat[i-1][j-1];
                    
                }
            }
            for(int i = 0; i < mat.length; i++){
                for(int j = 0; j< mat[i].length; j++){
                    
                    triangulo += " " + mat[i][j];
                    
                }
                triangulo += "\n " ;
            }
            display.setText(triangulo);
        });
            
        //int linha = Integer.parseInt(texto.getText());
       
 //montar a interface de saida.
       

   
    }
// ou


//Alocar a Matriz triagular
   
}
