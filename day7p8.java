import java.util.Scanner;
public class day7p8 {
    public static void main(String[] args){
    System.out.println("Enter a string");
        Scanner sc=new Scanner(System.in);
        String s1=sc.nextLine();
        char []c=s1.toCharArray();
        for(int i=0;i<c.length;i++)
        {
            for(int j=0;j<=i;j++)
            System.out.print(c[j]);
        
        System.out.println();
        }
}
}
