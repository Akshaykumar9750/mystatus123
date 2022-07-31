/*
//Q.1
int main()
{
    int N,a=-1,b=1,c,i=1;
    printf("Enter a number");
    scanf("%d",&N);
    while(N)
    {
        c=a+b;
        a=b;
        b=c;
        N--;
    }
    printf("%d",c);
    return 0;
}
*/
/*
//Q.2
int main()
{
    int N,a=-1,b=1,c;
    printf("Enter a number");
    scanf("%d",&N);
    while(N)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
        N--;
    }
    return 0;
}
*/
/*
//Q.3
int main()
{
    int N,a=-1,i=1,b=1,c;
    printf("Enter a number");
    scanf("%d",&N);
    while(i<=N)
    {
        c=a+b;
        a=b;
        b=c;
        if(N==c)
           {
             printf("%d\n",c);
             break;
           }
        i++;
    }
    return 0;
}
*/
/*
//Q.4
int main()
{
    int a,b,s;
    printf("Enterb two number");
    scanf("%d%d",&a,&b);
    if(a>b)
        s=a;
    else
        s=b;
    while(s)
    {
        if(a%s==0&b%s==0)
        {
            printf("HCF is :%d",s);
            break;
        }
        s--;
    }
    return 0;
}
*/
/*
//Q.5
int main()
{
    int a,b,s;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    if(a>b)
        s=a;
    else
        s=b;
    while(s)
    {
        if(a%s==0&b%s==0)
        {
            break;
        }
        s--;
    }
    if(s==1)
    {
        printf("Number is co-prime");
    }
    else
    {
        printf("Number is Not co-prime");
    }
    return 0;
}
*/
/*
//Q.6
int main()
{
    int i=2,j=2,count;
    while(i<=100)
    {
        count=0;
        j=2;
        while(j<=i)
        {
            if(i%j==0)
            {
                count++;
            }
            j++;
        }
         if(count==1)
            {
                printf("%d\n",i);
            }
        i++;
    }
    return 0;
}
*/
/*
//Q.7
int main()
{
    int a,b,j=2,count;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    while(a<=b)
    {
        count=0;
        j=2;
        while(j<=a)
        {
            if(a%j==0)
            {
                count++;
            }
            j++;
        }
         if(count==1)
            {
                printf("%d ",a);
            }
        a++;
    }
    return 0;
}
*/
/*
//Q.8
int main()
{
    int i,N,count,p;
    printf("Enter a number");
    scanf("%d",&N);
    p=N+1;
    while(p<=p+1)
    {
        count=0;
        i=2;
        while(i<p)
        {
            if(p%i==0)
            {
                count++;
            }
            i++;
        }
        if(count==0)
        {
            printf("%d",p);
            break;
        }
        p++;
    }
    return 0;
}
*/
/*
//Q.9
int main()
{
    int  N,c,s=0,a,b;
    printf("Enter a number :");
    scanf("%d",&N);
    a=N;
    while(N)
    {
        c=N%10;
        b=c*c*c;
        s=s+b;
        N=N/10;
    }
    if(a==s)
        printf("Armstrong number ");
    else
        printf("Not Armstrong number");
    return 0;
}
*/
//Q.9
int main()
{
    int  N,i=1,c,s=0,a,b;
    while(i<=1000)
    {
         a=i;
         while(i)
       {
           c=i%10;
           b=c*c*c;
           s=s+b;
           i=i/10;
       }
       if(a==s)
       {
            printf("Armstrong number is %d\n",a);
       }
       i++;
    }
    return 0;
}












