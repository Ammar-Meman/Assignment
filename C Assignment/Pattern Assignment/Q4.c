#include <stdio.h>
int main(){
int a;
scanf("%d",&a);

  for(int row=1;row<=a;row++){
    for(int col=1;col<=a;col++){
      printf("*");
    }
    printf("\n");
  }
}
