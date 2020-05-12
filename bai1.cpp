#include<stdio.h>
#include<math.h>
//
void Covert10to2(int n);
int Convert(int n);
void Nhap(int &n);
//
int main()
{
    int n;
    Nhap(n);
    Covert10to2(n);
}
void Covert10to2(int n)
{
    for(int i=1; i<=n;i++)
    {
        int binary = Convert(i);
        printf("%d ",binary);
    }
}
int Convert(int n)
{
    int nbinary = 0;
    int count=0;
    while(n>0)
    {
        nbinary=(n%2)*pow(10,count)+ nbinary;
        count++;
        n=n/2;
    }
    return nbinary;
}
void Nhap(int &n)
{
    printf("Nhap n : ");
    scanf("%d",&n);
}