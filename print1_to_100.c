#include<stdio.h>

void print(int n){
    if (n >= 100) return;
    else{
        printf("%d\t",++n);
        print(n);
    }
}


int main()
{
    int cnt = 0;
    print(cnt);
    return 0;
}
