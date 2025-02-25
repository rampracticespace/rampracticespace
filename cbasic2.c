#include<stdio.h>

int main()
{
    int cnt = 0;
    while((printf("%d\n",cnt++)) && cnt < 100);
    return 0;
}
