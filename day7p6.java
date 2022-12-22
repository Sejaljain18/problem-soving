import java.util.Scanner;
public class day7p6 {
    public static void main(String[] args) {
        System.out.print("Enter two strings\n");
        Scanner sc=new Scanner(System.in);
        String s1=sc.nextLine().toLowerCase();
        String s2=sc.nextLine().toLowerCase();
        char[] c1=s1.toCharArray();
        char[] c2=s2.toCharArray();
        int i=0,j=0,count=0;
        if(c1.length==c2.length)
        {
        while(i<c1.length&&j<c2.length)
        {
            if(c1[i]==c2[j]){
            i++;
            j++;
            count++;
            }
            else{
            System.out.print("strings not equal\n");
            break;
        }
        }
        if(count==c1.length)
        System.out.print("strings are equal\n");
        else
        System.out.print("strings not equal\n");
    }
}
}
