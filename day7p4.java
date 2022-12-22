import java.util.Scanner;
public class day7p4 {
    public static void main(String args[])
    {
        int i,count=1;
        Scanner sc=new Scanner(System.in);
	    System.out.println("Enter the string");
	    String str= sc.nextLine(); 
	    for(i=0;i<str.length();i++)
	    {
	    if(str.charAt(i)==' '&&str.charAt(i+1)!=' ')
        {
        count++;
		}	
        }    
	    System.out.print("word count is "+count);
	}
}
