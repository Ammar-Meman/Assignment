#include <stdio.h>
int main(){
int a;
scanf("%d",&a);

  for(int i=1;i<=a;i++){
    for(int c=1;c<=a-i;c++){
      printf(" ");
    }
    for(int j=1;j<=i;j++){
    printf("*");
    }
    printf("\n");
  }
}
