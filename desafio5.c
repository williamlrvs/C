#include <stdio.h>

int main() {

  int op, a, b;
  scanf("%d", &op);
  scanf("%d", &a);
  scanf("%d", &b);

  if(op==1) { 
    printf("%d \n", a + b);
  }
  else if(op==2) { 
    printf("%d\n", a - b);
  }
  else if(op==3) { 
    printf("%d\n", a / b);
  }
  else if(op==4) { 
    printf("%d\n", a * b);
  }
  else if(op>=5) { 
    printf("Operacao invalida\n");
  }

}