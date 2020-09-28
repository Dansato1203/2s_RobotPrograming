#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.1415926539

int main() { 
  int flg = 0, z = 0;
  double n, rst, x, y, i, ang;
  char sw, ka, da;
  
  printf("最初の数字を入力\n");
  scanf("%lf", &x);
  getchar();

  printf("関数電卓なら'f'、四則演算なら'a'を入力してください。\n");
  scanf("%c", &da);
  getchar();

  if(da == 'f'){
   
    printf("関数電卓です。sinならs,cosならc,tanならtを数字の頭につけて入力してください。\n");
    printf("終了時はqqを入力\n");
    printf("ex)+c30\n");
  
    while(1){
      scanf("%c", &sw);
      if(sw == '\n'){
        scanf("%c", &sw);
      }
      scanf("%c", &ka);
      if(scanf("%lf", &ang) != 1){
       printf("....Powor OFF\n");
       exit(0);
      }
      if (ka == 's'){
          rst = sin(ang);
          y = sin(ang * PI/180.0);
          printf("sin%.1lf(deg) = %.3lf\n", ang, y);
      }
      else if(ka == 'c'){ 
        rst = cos(ang);
        y = cos(ang * PI/180.0);
        printf("cos%.1lf(deg) = %.3lf\n", ang, y);
      }
      else if(ka == 't'){
        rst = tan(ang);
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
     printf("--> ready:%lf", x);
   }
   printf(".... Power OFF\n");
  }

  if(da == 'a'){
    printf("四則演算を入力してください。終了時はqqを入力してください。\n");
    printf("ex)+10\n");
    while (1) {
     scanf("%c", &sw)
     if(sw == f){
       break;
     }
     scanf("%lf", &y)
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
          printf("Error!(０では割れません)\n");
          continue;
        }
        x = x / y;
        break;
      default:
        printf("Error!(演算記号が間違っています)\n");
        continue;
      }
      printf("--> %lf", x);
    } 
    printf(".... Powor OFF\n");
  }
  else{
    printf("....Powor OFF\n");
    exit(0);
  }
}

