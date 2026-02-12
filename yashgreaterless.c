#include<stdio.h>
int main()
{int a,b;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
if(a==b){printf("both numbers are exactly the same.\n");
}
else if (a>b){
    printf("%d is greater than %d.\n");
}
else{
    printf("%d is less than %d.\n");
}
return 0;
}