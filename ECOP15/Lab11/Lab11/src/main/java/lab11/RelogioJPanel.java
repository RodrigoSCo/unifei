/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab11;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Calendar;
import java.util.GregorianCalendar;
import javax.swing.JPanel;
import javax.swing.Timer;

/**
 *
 * @author rodrigo
 */
public class RelogioJPanel extends JPanel{
    
    public RelogioJPanel(){
        Timer t = new Timer (
                        1000, 
                        new ActionListener(){
                            public void actionPerformed(ActionEvent e){
                                repaint();
                            }
                        } );
        t.start();
    }
    
    public void paintComponent(Graphics g){
        // Atualiza a hora atual.
        Calendar calendar = Calendar.getInstance();
        
        g.clearRect(0, 0, getWidth(), getHeight());
        
        int hour = calendar.get(Calendar.HOUR);
        int minute = calendar.get(Calendar.MINUTE);
        int second = calendar.get(Calendar.SECOND);
        
        double anguloSegundo = second * 6 * 3.141516 / 180;
	double anguloMinuto = minute * 6 * 3.141516 / 180;
	double anguloHora = (double)(hour + minute / 60.0) * 30 * 3.141516 / 180;
        
        int raioX = getWidth() / 2;
        int raioY = getHeight() / 2;
        
        
        // Desenho da estrutura externa do relógio.
        g.setColor(Color.white);
        g.fillOval(0, 0, getWidth(), getHeight());
        g.setColor(Color.black);
        g.drawOval(0, 0, getWidth(), getHeight());
        
        
        // Desenho dos indicadores de tempo.
        for (int i = 0; i < 12; i++){
            if ((i%3) == 0){
                g.drawLine((int)(raioX + raioX*0.85*Math.sin(i * 30 * 3.1415 / 180))
                        , (int)(raioY - raioY*0.85*Math.cos(i * 30 * 3.1415 / 180))
                        , (int)(raioX + raioX*0.95*Math.sin(i * 30 * 3.1415 / 180))
                        ,(int)(raioY - raioY*0.95*Math.cos(i * 30 * 3.1415 / 180)));
            } else {
                g.drawLine((int)(raioX + raioX*0.90*Math.sin(i * 30 * 3.1415 / 180))
                        , (int)(raioY - raioY*0.90*Math.cos(i * 30 * 3.1415 / 180))
                        , (int)(raioX + raioX*0.95*Math.sin(i * 30 * 3.1415 / 180))
                        ,(int)(raioY - raioY*0.95*Math.cos(i * 30 * 3.1415 / 180)));
            }
            
        }
        
        g.drawLine(raioX, raioY, raioX + (int)(raioX*0.70*Math.sin(anguloHora)),
		(int)(raioY - raioY*0.70*Math.cos(anguloHora)));
        
        g.drawLine(raioX, raioY, raioX + (int)(raioX*0.80*Math.sin(anguloMinuto)),
		(int)(raioY - raioY*0.80*Math.cos(anguloMinuto)));
        g.drawLine(raioX, raioY, raioX + (int)(raioX*0.85*Math.sin(anguloSegundo)),
		(int)(raioY - raioY*0.85*Math.cos(anguloSegundo)));
        
    }
}
