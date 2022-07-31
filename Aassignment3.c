/*
//Q.1
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>0)
        printf("Number is positive");
    else
        printf("Number is non positive");
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
    if(a%5==0)
        printf("Number is divisible");
    else
        printf("Number is non divisible");
    return 0;
}
*/
/*
//Q.3
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%2==0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
*/
/*
//Q.4
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a & 1==1)
        printf("Odd");
    else
        printf("Even");
    return 0;
}
*/
/*
//Q.5
int main()
{
    int a,c=0;
    printf("Enter a number");
    scanf("%d",&a);
    while(a)
    {
        a=a/10;
        c++;
    }
    if (c==3)
        printf("Three digit number");
    else
        printf(" Not three digit number ");
    return 0;
}
*/
/*
//Q.6
int main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("Greater is :%d",a);


    else
        printf("Greater is :%d",b);
    return 0;
}
*/

/*
//Q.8
int main()
{
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    if(year%100==0)
        {
        if(year%400==0)
            printf("Leap year");
        else
            printf("Not Leap year");
        }
    else
    {

        if(year%4==0)
            printf("Leap year");
        else
            printf("Not Leap year");
    }
    return 0;
}
*/
/*
//Q.9
int main()
{
    int a,b,c;
    printf("Enter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("greater is :%d",a);
        }
        else
        {
            printf("greater is :%d",c);
        }
    }
    else
    {
        if(b>c)
            printf("greater is :%d",b);
        else
            printf("greatr is :%d",c);
    }
    return 0;
}
*/
/*
//Q.10
int main()
{
    int cp,sp;
    printf("Enter cost price :");
    scanf("%d",&cp);
    printf("Enter selling price :");
    scanf("%d",&sp);
    if(sp>cp)
    {
        printf("Profit percentage is :%d%%",((sp-cp)*100)/cp);
    }
    else
    {
        printf("Loss percentage is :%d%%",((cp-sp)*100)/cp);
    }
    return 0;
}
*/
/*
//Q.11
int main()
{
    int Hindi,English,Math,Science,Computer;
    printf("Enter the number of Hindi :");
    scanf("%d",&Hindi);
    printf("Enter the number of English :");
    scanf("%d",&English);
    printf("Enter the number of Math :");
    scanf("%d",&Math);
    printf("Enter the number of Science :");
    scanf("%d",&Science);
    printf("Enter the number of Computer :");
    scanf("%d",&Computer);
    if(Hindi>=33 & English>=33 & Math>=33 & Science>=33 & Computer>=33)
        printf("Pass");
    else
        printf("Fail");
    return 0;
}
*/
/*
//Q.12
int main()
{
    char a,i;
    printf("Enter a alphabet :");
    scanf("%c",&a);
    //printf("%d",a);
    for(i=65;i<=90;i++)
        if(a==i)
        {
            printf("Uppercase");
            break;
        }

       for(i=97;i<=122;i++)
       {
           if(a==i)
           {
            printf("Lowercase");
            break;
           }
       }
}
*/
/*
//Q.13
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%3==0&a%2==0)
    {
        printf("Number is Divisible");
    }
    else
    {
        printf("Number is not Divisible");
    }
    return 0;
}
*/
/*
//Q.14
int main()
{
    int a;
    printf("Ener a number");
    scanf("%d",&a);
    if(a%7==0||a%3==0)
    {
        printf("Number is Divisible");
    }
    else
    {
        printf("Number is not divisible");
    }
    return 0;
}
*/
/*
//Q.15
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("positive");
    }
    else
    {
        if(a<0)
        {
            printf("Negative");
        }
        else
        {
            printf("Zero");
        }
    }
    return 0;
}
*/
/*
//Q.16
int main()
{
    char a,i;
    printf("Enter a alphabet :");
    scanf("%d",&a);
    if(a>=48&a<=57)
    {
        printf("Digit :%c",a);
    }
    if(a>=65&a<=90)
    {
        printf("Uppercase :%c",a);
    }
    if(a>=97&a<=122)
    {
        printf("Lowercase :%c",a);
    }

    if(a<=47||a>=58&a<=64||a>=91&a<=96||a>=123&a<=255)
    {
           printf("Special character :%c",a);

    }
       return 0;
}
*/

//Q.17
/*
int main()
{
    int a,b,c;
    printf("Enter the length of the side of Triangle :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&a>c)
    {
       if(b+c>a)
       {
           printf("Valid Triangle");
       }
    }
    if(b>a&b>c)
    {
        if(a+c>b)
        {
           printf("Valid Triangle");
        }
    }
    if(c>b&c>a)
    {
        if(a+b>c)
        {
            printf("Valid Triangle");
        }
    }
    return 0;
}
*/

//Q.18

int main()
{
    int m;
    printf("Enter a month number");
    scanf("%d",&m);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        printf("31 Days");
    }
    if(m==2)
    {
        printf("28,29 Days");
    }
    if(m==4||m==6||m==9||m==11)
    {
        printf("30 Days");
    }
    return 0;
}







































































