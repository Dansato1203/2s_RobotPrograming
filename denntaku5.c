#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.1415926539

int main() { 
  int flg = 0, z = 0;
  double n, rst, x, y, i, ang;
  char sw, ka, da;
  
  printf("\x1b[36m");
  printf("Please set the first number!\n");
  printf("ex) 3\n");
  printf("\x1b[39m");
  printf("--> ");
  scanf("%lf", &x);
  printf("\x1b[36m");
  getchar();

  for(;;){
    while(flg == 0){
      if(z == 0){
        printf("\x1b[36m");
        printf("Alithmetic mode.\n");
        printf("Please enter a number!\n");
        printf("ex) +10\n");
        printf("If you  want to switch to function mode, press f.\n");
        printf("When finished, press q\n");
        printf("\x1b[39m");
        printf("--> %lf", x);
        z = 1;
      }
     scanf("%c", &sw);
     if(sw == '\n'){
       scanf("%c", &sw);
       }
     if(sw == 'f'){
       flg = 1;
       break;
     }
     else if(sw == 'q'){
       printf("....Powor OFF\n");
       exit(0);
     }
     scanf("%lf", &y);
     printf("\x1b[36m");
      getchar();
      switch (sw){
      case '+':
        x = x + y;
        break;
      case '-':
        x = x - y;
        break;
      case '*':
        x = x * y;
        break;
      case '/':
        if ( y  == 0) {
          printf("Error!(Can't divide by zero!!)\n");
          continue;
        }
        x = x / y;
        break;
      default:
        printf("Error!(The caluculation symbol is incorrect!)\n");
        continue;
      }
      if(z == 1){
      printf("\x1b[39m");
      }
      printf("--> %lf", x);
      break;
    }
    while(flg == 1){
     if(z == 1){
        printf("\x1b[36m");
        printf("Function mode.\n");
        printf("Please enter a number!\n");
        printf("ex) +c30\n");
        printf("If you  want to switch to Alithmetic mode, press a.\n");
        printf("When finished, press q\n");
        printf("\x1b[39m");
        printf("--> %lf", x);
        z = 0;
     }
      scanf("%c", &sw);
      if(sw == '\n'){
        scanf("%c", &sw);
      }
      if(sw == 'a'){
        flg = 0;
        break;
      }
      else if(sw == 'q'){
        printf("....Powor OFF\n");
        exit(0);
      }
      scanf("%c", &ka);
      scanf("%lf", &ang);
      printf("\x1b[36m");
      if (ka == 's'){
         // rst = sin(ang);
          y = sin(ang * PI/180.0);
          printf("sin%.1lf(deg) = %.3lf\n", ang, y);
      }
      else if(ka == 'c'){ 
       // rst = cos(ang);
        y = cos(ang * PI/180.0);
        printf("cos%.1lf(deg) = %.3lf\n", ang, y);
      }
      else if(ka == 't'){
       // rst = tan(ang);
        y = tan(ang * PI/180.0);
        printf("tan%.1lf(deg) = %.3lf\n", ang, y);
      }
      else{
        break;
      }

      switch (sw){
      case '+':
        printf("%.3lf + %.3lf =", x ,y);
        x = x + y;
        printf("%lf\n", x);
        break;
      case '-':
        printf("%.3lf - %.3lf = ", x, y);
        x = x - y;
        printf("%lf\n", x);
        break;
      case '*':
        printf("%.3lf * %.3lf = ", x, y);
        x = x * y;
        printf("%lf\n", x);
        break;
      case '/':
        printf("%.3lf / %.3lf = ", x, y);
        x = x / y;
        printf("%lf\n", x);
        break;
      default:
        printf("Error!\n");
        continue;
      }
      if(z == 0){
       printf("\x1b[39m");
      }
      printf("--> %lf", x);
      break;
    }
  }
  return 0;
}
