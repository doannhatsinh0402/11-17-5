#include<stdio.h>
#include<vector>
#include<time.h>
using namespace std;

//
bool Kiemtra(vector<int>&B, int max);
int Timsolemax(vector<int>&A/*,vector<int>&B*/);
void NhapMang(vector<int>&A);
int Timsoledautien(vector<int>&A);
//
int main()
{
    clock_t start, end;
    start=clock();
    vector<int> A;
    vector<int> B; //xoa duoc
    SapXep(A);
    NhapMang(A);
    int max = Timsolemax(A);  // them B
    if(Kiemtra(A/*B*/,max))
        printf("max = %d",max);
    else
        printf("khong co gi");
    end=clock();
    printf("time = %.10f ",(double(end-start))/CLOCKS_PER_SEC);
}
void SapXep(vector<int>&A)
{
    
}
bool Kiemtra(vector<int>&B, int max)
{
    vector<int>::iterator p;
    for(p=B.begin();p!=B.end();p++)
    {
        if(*p%2==0) //xoa dong nay
            if(*p>max) return 0;
    }
    return 1;
}
int Timsolemax(vector<int>&A/*,vector<int>&B*/)
{
    int maxodd = Timsoledautien(A);
    vector<int>::iterator p;
    for(p= A.begin();p!=A.begin();p++)
    {
       if(*p%2==1)
           if(*p<maxodd) maxodd = *p;
    //    else
    //    {
    //        B.push_back(*p);
    //    }
       
    }
    return maxodd;
}
int Timsoledautien(vector<int>&A)
{
    vector<int>::iterator p= A.begin();
    int temp;
    do
    {
        ++p;
    }while(*p%2!=1);
    temp=*p;
    return temp;
}
void NhapMang(vector<int>&A)
{
    int temp;
    while(temp!=-1)
    {
        scanf("%d",&temp);
        A.push_back(temp);
    }
}