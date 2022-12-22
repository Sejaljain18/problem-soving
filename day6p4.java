import java.util.*; 
class day6p4 { 
    static int n=3; 
    static void rotateMatrix(int mat[][]) 
    { 
        for (int i=n-1;i>=0;i--) { 
            for (int j=n-1;j>=0;j--) 
                System.out.print(mat[i][j] + " "); 
            System.out.println(); 
        } 
    } 
    public static void main(String[] args) 
    { 
        int[][] a = { { 1, 2, 3 }, 
                        { 4, 5, 6 }, 
                        { 7, 8, 9 } }; 
        rotateMatrix(a); 
    } 
} 