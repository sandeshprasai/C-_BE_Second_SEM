#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int number()
{
    int num;
    
    input:
    printf("Enter a number");
    scanf("%d",&num);
	fflush(stdin);
    if(num>=0)
    {
        return (num);
    }
    else{
    goto input;
    }

}
int main(void)
{

    int x=number();
    printf("The Entred number was %d",x);
    //return 0;
    
}
