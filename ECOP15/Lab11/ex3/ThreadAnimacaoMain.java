import java.awt.*; 	import java.awt.event.*;
import javax.swing.*; 	import javax.swing.event.*;
 
public class ThreadAnimacaoMain extends JApplet{
	public ThreadAnimacao array[];
	public int count = 0;
	private ImageIcon imagens[];
	
	public void init(){
		
		CarregaImagens();
		
      	getContentPane().setBackground(Color.BLACK);

		array = new ThreadAnimacao[10000];

      	addMouseListener(  new MouseAdapter(){
		      public void mousePressed( MouseEvent event ) {
		           if( count < array.length)
		           {
                    	array[count] = new ThreadAnimacao(
							getWidth(), getHeight(),
							getGraphics(),
							event.getX(), event.getY(),
							imagens	);
							
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

  public void CarregaImagens()
  {
		String title; 		// título da imagem
		int counter = 0; // conta número de imagens

      title = getParameter( "title" + counter ); // obtém o primeiro nome da imagen
	  // faz um loop para contar os objetos que vem do html
      while ( title != null ) 
      {
		 counter++;
         title = getParameter( "title" + counter ); // obtém o próximo título do site	  
	  }

	  //alocar o vetor de imagens
	  imagens = new ImageIcon[counter];
	  
	  counter = 0; 
	  title = getParameter( "title" + counter );
	  while ( title != null ) 
      {
		imagens[counter] = new ImageIcon(title);
		counter++;
        title = getParameter( "title" + counter );
	  }
  }
  
  public static void main(String args[])
  {
   JFrame application = new JFrame( "Threads" );
      application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE );
      ThreadAnimacaoMain appletObject = new ThreadAnimacaoMain();
      appletObject.init();
      appletObject.start();
      application.getContentPane().add( appletObject );
      application.setSize( 500, 400 );
      application.setVisible( true );
  }
}
