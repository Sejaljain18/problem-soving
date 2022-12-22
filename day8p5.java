import java.util.Scanner;
public class day8p5 {
    static  int prime(int n)
    { int c=0;
        for(int i=1;i<=n;i++){
            if(n%i==0)
            c++;
        }
        if(c==2)
        return 1;
        else
        return 0;
    }
   static void primeFactor(int num){
        int c;
        for(int i=1;i<=num;i++){
            if(num%i==0)
            {
                c=prime(i);
                if(c==1)
                {
                    System.out.println(i);
                    break;
                }
        }
    }
}
public static void main(String[] args) {

    System.out.println("enter the range");
    Scanner sc=new Scanner(System.in);
    int a=sc.nextInt();
    System.out.println(1);
    for(int i=2;i<=a;i++)
    primeFactor(i);
}
}
