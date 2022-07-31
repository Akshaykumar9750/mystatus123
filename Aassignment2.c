/*
//Q.1
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("%d",a%10);
    return 0;
}
*/
/*
//Q.2
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("%d",a/10);
    return 0;
}
*/
/*
//Q.3
int main()
{
    int a,b,c;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
    return 0;
}
*/
/*
//Q.4
int main()
{
    int a,b,c;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    return 0;
}
*/
/*
//Q.5
int main()
{
    int a,b,sum=0;
    printf("Enter three digit number");
    scanf("%d",&a);
    while(a)
        {
             b=a%10;
             sum=sum+b;
             a=a/10;
        }
    printf("%d",sum);
    return 0;
}
*/
/*
//Q.6
int main()
{
    char a;
    printf("Enter a number");
    scanf("%c",&a);
    printf("%d",a);
    return 0;
}
*/
/*
//Q.8
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a & 1==1)
        printf("Odd number");
    else
        printf("Even number");
    return 0;
}
*/
/*
//Q.9
int main()
{
    int a,x;
    float b;
    char c;
    double d;
    printf("Enter int float char double number ");
    scanf("%d%f%c%lf",&a,&b,&c,&d);
    printf("%d",  sizeof(a));
    printf("%f",  sizeof(b));
    printf("%c",  sizeof(c));
    printf("%lf",  sizeof(d));
}
*/
/*
//Q.10
int main()
{
    int a,x;
    printf("Enter a number");
    scanf("%d",&a);
    x=a/10;
    x=x*10;
    printf("%d",x);
    return 0;
}
*/
/*
//Q.11
int main()
{
    int a,b,x;
    printf("Enter number :");
    scanf("%d",&a);
    printf("\nEnter digit :");
    scanf("%d",&b);
    a=a*10;
    a=a+b;
    printf("%d",a);
    return 0;
}
*/
/*
//Q.12
int main()
{
    float INR,USD;
    printf("Enter amount in INR :");
    scanf("%f",&INR);
    USD=INR/76.23;
    printf("%f",USD);
    return 0;
}
*/

//Q.13
int main()
{
    int a,x=0,b;
    printf("Enter a number");
    scanf("%d",&a);
    while(a)
    {
        b=a%10;
        x=x*10+b;
        a=a/10;
    }
    printf("%d",x);
    return 0;
}



































