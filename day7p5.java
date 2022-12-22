import java.util.Scanner;
import javax.lang.model.util.ElementScanner14;
class day7p5{
public static void main(String[] args){
System.out.print("Enter string in lowercase/uppercase:");
Scanner sc=new Scanner(System.in);
String str=sc.nextLine();
for(int i=0;i<str.length();i++)
{
int ch=str.charAt(i);
if(ch>64 && ch<91)
{
ch=ch+32;
System.out.print((char)ch);
}
else if(ch>96 && ch<123){
ch=ch-32; 
System.out.print((char)ch);
}
if(ch==' ')
System.out.print(" ");
}
System.out.println();
}
}