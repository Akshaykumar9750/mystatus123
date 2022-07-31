/*
//Q.1
int main()
{
    int sum=0,N,i=1;
    printf("Enter a number :");
    scanf("%d",&N);
    while(i<=N)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
    return 0;
}
*/
/*
//Q.2
int main()
{
    int sum=0,N,i=1;
    printf("Enter a number :");
    scanf("%d",&N);
    while(i<=N)
    {
        sum=sum+i*2;
        i++;
    }
    printf("%d",sum);
    return 0;
}
/*
//Q.3
int main()
{
    int sum=0,N,i=1;
    printf("Enter a number :");
    scanf("%d",&N);
    while(i<=N)
    {
        sum=sum+i*2-1;
        i++;
    }
    printf("%d",sum);
    return 0;
}
*/
/*
//Q.4
int main()
{
    int sum=0,N,i=1;
    printf("Enter a number :");
    scanf("%d",&N);
    while(i<=N)
    {
        sum=sum+i*i;
        i++;
    }
    printf("%d",sum);
    return 0;
}
*/
/*
//Q.5
int main()
{
    int sum=0,N,i=1;
    printf("Enter a number :");
    scanf("%d",&N);
    while(i<=N)
    {
        sum=sum+i*i*i;
        i++;
    }
    printf("%d",sum);
    return 0;
}
*/
/*
//Q.6
int main()
{
    int Fact=1,i=2,N;
    printf("Enter a number");
    scanf("%d",&N);
    if(N==0||N==1)
    {
        printf("1");
    }
    else
    {
        while(i<=N)
        {
        Fact=Fact*i;
        i++;
        }
        printf("%d",Fact);
    }
    return 0;
}
*/
/*
//Q.7
int main()
{
    int N,count;
    printf("Enter a number");
    scanf("%d",&N);
    while(N)
    {
        N=N/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
*/
/*
//Q.8
int main()
{
    int N,i=2,count=0;
    printf("Ente a number");
    scanf("%d",&N);
    while(i<=N)
    {
        if(N%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==1)
        printf("Prime number");
    return 0;
}
*/
/*
//Q.9
int main()
{
    int a,b,Gr;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    if(a>b)
        Gr=a;
    else
        Gr=b;
    while(1)
    {
        if(Gr%a==0&Gr%b==0)
        {
            printf("LCM is :%d ",Gr);
            break;
        }
        Gr++;
    }
    return 0;
}
*/

//Q.10
int main()
{
    int a,x,y=0;
    printf("Enter a number");
    scanf("%d",&a);
    while(a)
    {
        x=a%10;
        a=a/10;
        y=y*10+x;
    }
    printf("%d",y);
    return 0;
}





















