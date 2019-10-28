/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Lab08;

import java.util.StringTokenizer;
import javax.swing.JFrame;
import javax.swing.JLabel;

/**
 *
 * @author rodrigo
 */

public class Demo{

	public static void demo(StringTokenizer st) {
		try {
                        String[] args= new String[4];
                        for (int i = 0; i < 4; i ++){
                            args[i] = st.nextToken();
                        }

			int a1 = Integer.parseInt(args[0]);
			int a2 = Integer.parseInt(args[1]);
			int b1 = Integer.parseInt(args[2]);
			int b2 = Integer.parseInt(args[3]);

			int resultado = a1/a2+b1/b2;
                        JFrame janela = new JFrame("Resultado");
                        JLabel label = new JLabel("O resultado é "+resultado);
                        janela.add(label);
                        janela.setLocationRelativeTo(null);
                        janela.setSize(label.getMinimumSize());
                        janela.setVisible(true);

		}
                catch(java.util.NoSuchElementException e){
                    JFrame janela = new JFrame("Mensagem de erro");
                    JLabel erro = new JLabel("Erro: Não foram inseridos parâmetros o suficiente.");
                    janela.add(erro);
                    janela.setLocationRelativeTo(null);
                    janela.setSize(erro.getMinimumSize());
                    janela.setVisible(true);
                }
                catch(java.lang.NumberFormatException e){
                    JFrame janela = new JFrame("Mensagem de erro");
                    JLabel erro = new JLabel("Erro: Os parâmetros inseridos não são números.");
                    janela.add(erro);
                    janela.setLocationRelativeTo(null);
                    janela.setSize(erro.getMinimumSize());
                    janela.setVisible(true);
                }
                catch(java.lang.ArithmeticException e){
                    JFrame janela = new JFrame("Mensagem de erro");
                    JLabel erro = new JLabel("Erro: Divisão por zero.");
                    janela.add(erro);
                    janela.setLocationRelativeTo(null);
                    janela.setSize(erro.getMinimumSize());
                    janela.setVisible(true);
                }
                catch (Exception e)
		{
			System.out.println("Uma exceção ocorreu: "+e);
			e.printStackTrace();
		}
	}
}
