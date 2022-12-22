import java.util.Scanner;
public class day7p7 {
    public static void main(String[] args) {
        System.out.print("Enter two strings\n");
        Scanner sc=new Scanner(System.in);
        String s1=sc.nextLine();
        String s2=sc.nextLine();
        String s3=s1+" "+s2;
        System.out.print("concatenated string is:"+s3);
}
}
