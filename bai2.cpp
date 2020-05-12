#include<stdio.h>
#include<math.h>
//
int Dem(unsigned long long n);
bool KiemTra(unsigned long long n,int k);

//
int main()
{
    int k=1;
    unsigned long long n=1;
    while(k*pow(9,k)>=pow(10,k-1))
    {
        if(KiemTra(n,k)) 
        {
            printf("%d ",n);
        }
        n++;
        k=Dem(n);
    }
}
int Dem(unsigned long long n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}
bool KiemTra(unsigned long long n,int k)
{
    unsigned long long temp=n;
    unsigned long long S=0;
    while(n>0)
    {
       S=S+pow((n%10),k); 
       n=n/10;
    }
    return temp==S;
}