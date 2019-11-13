import java.awt.*; 	import java.awt.event.*;
import javax.swing.*; 	import javax.swing.event.*;
 
public class ThreadAnimacaoPanel extends JPanel{
	public ThreadAnimacao array[];
	public int count = 0;
	private ImageIcon imagens[];
	
	public void init(){
		imagens = new ImageIcon[1];
		imagens[0] = new ImageIcon("animacao0.JPG");
		
      	setBackground(Color.BLACK);

		array = new ThreadAnimacao[10000];

      	addMouseListener(  new MouseAdapter(){
		      public void mousePressed( MouseEvent event ) {
		           if( count < array.length)
		           {
                    	array[count] = new ThreadAnimacao(
							getWidth(), getHeight(),
							getGraphics(),
							event.getX(), event.getY(),
							imagens, ThreadAnimacaoPanel.this	);
							
                    		array[count].start();
				count ++; 
		           } } } );
				   
       addComponentListener( new ComponentAdapter() {
		public void componentResized(ComponentEvent e)
		{
			for(int i = 0; i< count; i++)
				array[i].setXY(getWidth(), getHeight());
		}} );
  }

  public static void main(String args[])
  {
   JFrame application = new JFrame( "Threads" );
      application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE );
      ThreadAnimacaoPanel appletObject = new ThreadAnimacaoPanel();
      appletObject.init();
     // appletObject.start();
      application.getContentPane().add( appletObject );
      application.setSize( 500, 400 );
      application.setVisible( true );
  }
}
