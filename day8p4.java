import java.util.Scanner;
public class day8p4 {   
    Boolean balancedNumber(String n)
    {
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<n.length()/2;i++){
            sum1+=n.charAt(i)-'0';
            sum2+=n.charAt(n.length()-i-1)-'0';
        }
        if(sum1 == sum2)
        return true;
        else
        return false;
}
public static void main(String args[]) {
    System.out.println("enter a number having odd no of digits");
    Scanner sc=new Scanner(System.in);
    String n=sc.next();
    if(new day8p4().balancedNumber(n))
    System.out.println("yes");
    else
    System.out.println("no");
}
}
