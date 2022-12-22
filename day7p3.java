import java.util.Scanner;

public class day7p3 {
        static boolean isPalindrome(String str)
        {
            int i=0,j=str.length()-1;
            while (i<j) {
                if (str.charAt(i)!= str.charAt(j))
                    return false;
                i++;
                j--;
            }
            return true;
        }
        public static void main(String[] args)
        {
            Scanner sc=new Scanner(System.in);
            System.out.println("enter a string");
            String str= sc.nextLine();
            str=str.toLowerCase();
            if(isPalindrome(str))
                System.out.print("Yes,it is palindrome");
            else
                System.out.print("No,it is not palindrome");
        }
    }

