#include<stdio.h>
#include<math.h>
//
int Demtungso(unsigned long long at );
bool Kiemtraat(unsigned long long at, int k);
//

int main()
{
    printf("tong cac so Amstrong = ");
    int k=1;
    unsigned long long at = 1;
    while(/*k*int(pow(9,k))>=int(pow(9,k-1))*/at<=100000000)
    {
        k= Demtungso(at);
        if(Kiemtraat(at,k))
        {
            printf("%lld ",at);
        }
        at++;
    }
}
int Demtungso(unsigned long long at )
{
    int count=0;
    while( at > 0)
    {
        at=at/10;
        count++;
    }
    return count;
}
bool Kiemtraat(unsigned long long at, int k)
{
    unsigned long long S = 0;
    unsigned long long temp= at ;
    while(at>0)
    {
        S=S+pow(at%10,k);
        at=at/10;      
    }
    return temp==S;
}