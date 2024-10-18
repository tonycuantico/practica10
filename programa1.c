/* Luis Antonio Rodriguez Arreguin
programa para una matriz de 3*3 */
#include <stdio.h>
int main()
{
int arr[3][3] = {{1,2,3}, {4,5,6}, {1,2,3}};
int i,j;
printf("Imprimir matriz\n");
for(i=0; i<3; i++)
{
    for(j = 0; j < 3; j++)
      {
          printf("%d | ", arr[i][j]);
      }
      printf("\n");
}
return 0;
}
