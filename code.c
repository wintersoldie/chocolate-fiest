#include<stdio.h>
int main()
{
    int n,m,t,c,noc,k,k1,k2,i,j,count;
    scanf("%d\n",&t);
    for(j=0;j<t;j++)
    {
    scanf("%d %d %d",&n,&c,&m);
    noc=n/c;
    count=noc;

    for(i=0;;)
    {
        if(noc>=m)
        {
            k1=noc/m;
            count=count+k1;
            k2=noc%m;
            noc=k1+k2;
        }
        else
            break; 
    }
    printf("%d\n",count);
}
}
