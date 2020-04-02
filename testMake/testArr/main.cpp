#include <stdio.h>

int main()
{
  int a[2][2];// = new int[3][2];
  int b[3];
  b[0] = 71;
  int** c = new int*[2];
  c[0] = new int[2];
  c[1] = new int[2];
  c[0][0] = 112;
  c[0][1] = 113;
  c[1][0] = 114;
  a[0][0] = 112;
  a[0][1] = 113;
  a[1][0] = 114;
  //a[1][1] = 22;
  //a[2][0] = 33;
  //a[2][1] = 34;
/*
  a[0][0] = 10;
  a[0][1] = 11;
  a[1][0] = 12;
  a[1][1] = 13;
*/
  printf("show %d\n", *b);
  printf("show %d\n", *(b+1));
  printf("show %d\n", *(b+2));
  printf("show %d\n", *(b+3));

  printf("show a[0][1] %d\n", a[0][1]);
  printf("show a[0][2] %d\n", a[0][2]);
  printf("show c[0][1] %d\n", c[0][1]);
  printf("show c[0][2] %d\n", c[0][2]);

  
  
  //printf("array size = %d\n",sizeof(a));
  //printf("ele size = %d\n",sizeof(a[0]));
  return 0;
}
