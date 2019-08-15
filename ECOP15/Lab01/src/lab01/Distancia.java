/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab01;

import java.util.Scanner;
import static java.lang.Math.sin;
import static java.lang.Math.toRadians;

/**
 *
 * @author aluno
 */
public class Distancia {
    public double dis;
    public void getDis(double d){
        this.dis=d;
    }
    public void distancia(int v,int an){
        double g = 9.8 ;
        double a = toRadians(an);
        this.dis =((v*v*sin(2*a))/g);
        System.out.println("Distancia: "+this.dis);
    }
}
