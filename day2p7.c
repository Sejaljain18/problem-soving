#include <stdio.h>
void main() {
   int i,s,n,k = 0,c= 0,y= 0;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i = 1; i <=n; ++i)
    {
      for (s= 1;s<=n- i;s++)
       {
         printf("  ");
         c++;
      }
      while (k!=2*i-1) {
         if (c<=n-1) {
            printf("%d ",i-k);
            c++;
         } else {
            y++;
            printf("%d ",(i-k+2*y));
         }
         k++;
      }
      y= 0;
      c= 0;
      k =0;
      printf("\n");
   }
}



