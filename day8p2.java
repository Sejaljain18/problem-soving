import java.util.Scanner;
public class day8p2 {
    public static void main(String args[])
    {
        System.out.println("enter two numbers:");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println("enter a digit:");
        int k=sc.nextInt();
        double m=Math.pow(a,b);
        double c=0;
        for(int i=1;i<=k;i++)
        {
            c=m%10;
            m/=10;
        }
        System.out.println((int)c);
    }
}
