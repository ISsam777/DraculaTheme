#include<stdio.h>
int main()
{
    int op,a,b,x;
    printf("choose the operator\n");
    printf("1.+ 2.- 3.* 4./ 5.sqrt 6.ln");
    scanf("%d",op);
    switch(op){
        case 1:
          printf("give a et b: ");
          scanf("%d %d",&a,&b);
          printf("%d",a+b);
        break;

        case 2:
          printf("give a et b: ");
          scanf("%d %d",&a,&b);
          printf("%d",a-b);
        break;

        case 3:
          printf("give a et b: ");
          scanf("%d %d",&a,&b);
          printf("%d",a*b);
        break;

        case 4:
          printf("give a et b: ");
          scanf("%d %d",&a,&b);
          printf("%d",a/b);
        break;
        default:
        printf("error enter a valid number");
        break;
    }


}