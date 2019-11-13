/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab11;

import java.awt.Color;
import java.awt.event.ComponentAdapter;
import java.awt.event.ComponentEvent;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JPanel;

/**
 *
 * @author rodrigo
 */
class ThreadAnimacaoPanel extends JPanel {

    public ThreadAnimacao array[];
    public int count = 0;
    private ImageIcon imagens[];

    public void init() {
        imagens = new ImageIcon[30];
        for( int i = 0; i < 30; i ++){
            imagens[i] = new ImageIcon(getClass().getResource("animacao"+i+".JPG"));
        }

        setBackground(Color.BLACK);

        array = new ThreadAnimacao[10000];

        addMouseListener(new MouseAdapter() {
            public void mousePressed(MouseEvent event) {
                if (count < array.length) {
                    array[count] = new ThreadAnimacao(
                            getWidth(), getHeight(),
                            getGraphics(),
                            event.getX(), event.getY(),
                            imagens, ThreadAnimacaoPanel.this);

                    array[count].start();
                    count++;
                }
            }
        });

        addComponentListener(new ComponentAdapter() {
            public void componentResized(ComponentEvent e) {
                for (int i = 0; i < count; i++) {
                    array[i].setXY(getWidth(), getHeight());
                }
            }
        });
    }

    public static void main(String args[]) {
        JFrame application = new JFrame("Threads");
        application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        ThreadAnimacaoPanel appletObject = new ThreadAnimacaoPanel();
        appletObject.init();
        // appletObject.start();
        application.getContentPane().add(appletObject);
        application.setSize(500, 400);
        application.setVisible(true);
    }
}
