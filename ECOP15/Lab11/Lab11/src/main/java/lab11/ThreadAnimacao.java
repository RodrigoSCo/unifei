/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab11;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

/**
 *
 * @author rodrigo
 */
class ThreadAnimacao extends Thread {

    private int sleepTime, x, y, contx = 1, conty = 1;
    private int tamx, tamy, fatorZoom;
    private Graphics g;
    private ImageIcon imagens[];
    private int indiceImagemAtual;
    private JPanel componente = null;
    private Timer timer;

    public ThreadAnimacao(int tx, int ty,
            Graphics gext,
            int _x, int _y,
            ImageIcon _imagens[],
            JPanel painel
    ) {
        // guarda o contexo grafico que veio como parametro
        g = gext;
        // gera o valor que será usado como intervalo da animação
        sleepTime = (int) (Math.random() * 50) + 10;
        //guarda as dimensoes que de onde a imagens poderá ser desenhada
        tamx = tx;
        tamy = ty;
        // gera um fator de zoom para as imagens
        fatorZoom = (int) (Math.random() * 5) + 1;
        // guarada a posiçao inicial da imagem na tela
        x = _x;
        y = _y;

        // guarda a referencia do vetor de imagens passado como parametro
        imagens = _imagens;

        // iniciar pela imagem 0
        indiceImagemAtual = 0;

        // local onde a imagens será desenhada
        componente = painel;

        timer = new Timer(50, new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                indiceImagemAtual++;
                indiceImagemAtual %= imagens.length;
            }
        });
        timer.start();
    }

    public ThreadAnimacao(int tx, int ty,
            Graphics gext,
            int _x, int _y,
            ImageIcon _imagens[]
    ) {
        // guarda o contexo grafico que veio como parametro
        g = gext;
        // gera o valor que será usado como intervalo da animação
        sleepTime = 30;//(int) ( Math.random() * 50 ) + 10;
        //guarda as dimensoes que de onde a imagens poderá ser desenhada
        tamx = tx;
        tamy = ty;
        // gera um fator de zoom para as imagens
        fatorZoom = 1;
        // guarada a posiçao inicial da imagem na tela
        x = _x;
        y = _y;

        // guarda a referencia do vetor de imagens passado como parametro
        imagens = _imagens;

        // iniciar pela imagem 0
        indiceImagemAtual = 0;
        /*
	  timer = new Timer(50, new ActionListener()
	  {
		public void actionPerformed(ActionEvent e)
		{
		   indiceImagemAtual++;
		   indiceImagemAtual %= imagens.length;
		}
	  });
	  timer.start();*/

    }

    public void run() {
        int largura, altura;
        largura = imagens[indiceImagemAtual].getIconWidth() * fatorZoom;
        altura = imagens[indiceImagemAtual].getIconHeight() * fatorZoom;
        do {
            // limpar o conteudo anterior da imagem, desenhando um retangulo com a cor do fundo
            g.setColor(Color.BLACK);
            g.fillRect(x, y, largura, altura);

            // atualiza a posição da imagem em x
            if (x < 0) {
                contx *= -1;
            }
            if (x > (tamx - largura)) {
                contx *= -1;
            }
            x += contx;

            // atualiza a posição da imagem em y
            if (y < 0) {
                conty *= -1;
            }
            if (y > (tamy - altura)) {
                conty *= -1;
            }
            y += conty;

            //desenha a imagem
            g.drawImage(imagens[indiceImagemAtual].getImage(), x, y, largura, altura, componente);
            indiceImagemAtual++;
            indiceImagemAtual %= imagens.length;

            try {
                sleep(sleepTime);
            } catch (InterruptedException ie) {
                ie.printStackTrace();
            }
            //sleepTime--;
            //if(sleepTime==10) sleepTime= 50;

        } while (true);
    }

    public void setXY(int tx, int ty) {
        tamx = tx;
        tamy = ty;
    }
}
