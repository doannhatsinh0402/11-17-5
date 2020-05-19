#include<stdio.h>
#include<vector>
using namespace std;
//

//

int main()
{
    vector<int> A;
    int temp;
    while(temp!=-1)
    {
        scanf("%d",&temp);
        A.push_back(temp);
    }
    vector<int>::iterator p;
    for(p=A.begin();p!=A.end();p++)
    {
        printf("%d",*p);
    }
}