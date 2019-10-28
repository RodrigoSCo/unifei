import java.util.*;

public class Polinomio {
  private int ordem;
	private int coefCnt;
	private float x;
	private int coef[];

  public Polinomio(int b)
  {
    this.ordem = b;
    this.coef = new int[b+1];
		if(this.ordem > 101010 || this.ordem < 0) this.ordem = 101010;
		for(int i = 0 ; i <= this.ordem ; i++) this.coef[i] = 0;
	}

  public void print()
  {
		for(int i = this.ordem ; i >= 0 ; i --){
			if(i != 0) System.out.printf(" %dx^%d  +", this.coef[i], i);
			else System.out.printf(" %d \n", this.coef[i]);
		}
	}

  public Polinomio derivative()
  {
    Polinomio derivada = new Polinomio(this.ordem - 1);

    for(int i = this.ordem ; i > 0 ; i --)
      derivada.coef[i-1] = this.coef[i] * i;

    return derivada;
  }

  public void scan()
  {
    Scanner input = new Scanner( System.in );
    for(int i = this.ordem ; i >= 0 ; i --){
      int a = input.nextInt();
			this.coef[i] = a;
		}
  }

  public double evaluate(double x){

    double resultado = 0;

    for(int i = this.ordem ; i >= 0 ; i --){
      //System.out.print(this.ordem);
      resultado += Math.pow(x, i)*this.coef[i];
    }
    return resultado;
  }

  public static void main(String args[])
  {
      Scanner input = new Scanner( System.in );
      Polinomio a = new Polinomio(2);
      Polinomio derivada;

      a.scan();
      derivada = a.derivative();

      double aprox;
      aprox = input.nextDouble();
      int iter = input.nextInt();

      for(int i = 0; i < iter; i++){
        if(derivada.evaluate(aprox) == 0) break;
        aprox = aprox - (a.evaluate(aprox)/derivada.evaluate(aprox));
      }


      System.out.print("Equacao");
      a.print();
      System.out.print("Derivada");
      derivada.print();

      System.out.printf(" Resultado da equacao é %.3f \n", aprox);


  }
}
