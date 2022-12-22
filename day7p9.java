import java.util.Scanner;
public class day7p9{
public static void main(String[] args){
    System.out.println("Enter a string");
        Scanner sc=new Scanner(System.in);
        String s1=sc.nextLine();
        StringBuffer st=new StringBuffer(s1);
        st=st.reverse();
        for(int i=0;i<st.length();i++)
        {
            System.out.println(st.substring(0,i+1));
        }
        
}
}



