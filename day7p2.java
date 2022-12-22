public class day7p2 {
    public static void main(String[] args) {
        String str1 = "sejal";
        String rev = "";
        int len=str1.length();
        for(int i=len-1;i>=0;i--)
        rev = rev+str1.charAt(i);
        System.out.println("\nString before reversal : "+str1);
        System.out.println("String after reversal : "+ rev);
        }
        }

