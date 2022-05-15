#include<stdio.h>
#include<math.h>
int main()
{
    int  operand3, operand4;
    float degree, radian, result, value, operand1, operand2;
    char operator[3], s[0], c[0], t[0], l[0];
    s[0]="s";
    c[0]="c";
    t[0]="t";
    l[0]="l";
    printf("Enter the operator :");
    scanf("%s",operator);    
   switch (operator[0])
    {
    case'+':
        printf("Enter the operand 1 :");
        scanf("%f",&operand1);
        printf("Enter the operand2 :");
        scanf("%f",&operand2); 
        printf("Sum=%f",(operand2 + operand1));
        break;
    case'-':
        printf("Enter the operand 1 :");
        scanf("%f",&operand1);
        printf("Enter the operand 2 :");
        scanf("%f",&operand2); 
        printf("Sabstract=%f",(operand1 - operand2));
        break;
    case'*':
        printf("Enter the operand 1 :");
        scanf("%f",&operand1);
        printf("Enter the operand 2 :");
        scanf("%f",&operand2); 
        printf("Product=%f",(operand2*operand1));
        break;
    case'%':
        printf("Enter the operand 1 :");
        scanf("%d",&operand3);
        printf("Enter the operand 2 :");
        scanf("%d",&operand4); 
        result=(operand3 % operand4);
        printf("Modulas=%d",result);
        break;
    case'c':
        printf("Enter degree for cos:");
        scanf("%f",&degree);
        radian=degree*(3.14159/180.0000);
        printf("%f",cos(radian));
        break;
    case's':
        printf("Enter degree for sin:");
        scanf("%f",&degree);
        radian=degree*(3.14159/180.0000);
        printf("%f",sin(radian));
        break;
    case't':
        printf("Enter degree for tan:");
        scanf("%f",&degree);
        radian=degree*(3.14159/180.0000);
        printf("%f",tan(radian));
        break;
    case'l':
        printf("Enter value :");
        scanf("%f",&value);
        result=log(value);
        printf("%f",result);
        break;
    case'q':
        printf("Enter value :");
        scanf("%f",&value);
        result=sqrt(value);
        printf("%f",result);
        break;
    default:
        break;
    }
}