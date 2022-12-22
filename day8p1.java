import java.util.Scanner;
public class day8p1{
    public static void main(String[] args)
    {
        System.out.print("enter the coefficients of the terms in quadratic equation\n");
        Scanner sc=new Scanner(System.in);
        double a=sc.nextDouble();
        double b=sc.nextDouble();
        double c=sc.nextDouble();
        double det=b*b-4*a*c;
        double fr,sr;
        if(det>0)
        {
            fr= (-b+Math.sqrt(det))/(2*a);
            sr= (-b+Math.sqrt(det))/(2*a);
            System.out.println("firstroot="+fr+"and secondroot="+sr);
        }
        if(det==0){
        fr= -b / (2 * a);
        sr=-b / (2 * a);
        }
        else
        {
            double real = -b / (2 * a);
            double imaginary = Math.sqrt(-det)/(2 * a);
            System.out.println("Firstroot="+real+"+i"+imaginary);
            System.out.println("secondroot="+real+"-i"+imaginary);
        }
}
}