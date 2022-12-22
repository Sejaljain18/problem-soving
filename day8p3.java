import java.util.Scanner;
public class day8p3 {
    int sum(int n)
    {
        while(n>9)
        {
            n=calc(n);
        }
        return n;
    }
    int calc(int n){
        int sum=0,rem=0;
        while(n>0)
        {
            rem=n%10;
            sum+=rem;
            n/=10;
        }
        return sum;
    }
    public static void main(String[] args)
    {
        System.out.println("enter a number");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        day8p3 ob=new day8p3();
        int ans=ob.sum(n);
        System.out.println(ans);
    }
}   