#include<stdio.h>
int main()
{

int r, c, m[10][10], n[10][10], o[10][10];

   scanf("%d%d", &r, &c);

   for (int i=0; i<r; i++){

      for (int j=0; j<c; j++){

         scanf("%d", &m[i][j]);

      }

   }

   for (int i=0; i<r; i++){

      for (int j=0; j<c; j++){

         scanf("%d", &n[i][j]);

      }

   }

   int *m1 = m, *n1 = n, *o1 = o;

   for (int i=0; i<r; i++){

      for (int j=0; j<c; j++){

         *(*(o+i)+j) = *(*(m+i)+j) + *(*(n+i)+j);

      }

   }

   for (int i=0; i<r; i++){

      for (int j=0; j<c; j++){

         printf("%d ", o[i][j]);

      }

      printf("\n");

   }

}
