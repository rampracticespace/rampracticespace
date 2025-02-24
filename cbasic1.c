#include <stdio.h>

int main()
{
    int i = 9;
    printf("entered is %d %d",scanf("%d %d",&i,&i),i);

    return 0;
}



//output : 
//90 
//98
//entered is 2 9
/*here scanf just read's the number and returns how many args it took instead value*/


/* improved code

#include <stdio.h>

int main()
{
    int i = 9;
    printf("entered is %d %d\n",scanf("%d %d",&i,&i),i);
    printf("final value is %d",i);
    
    
    return 0;
}

*/



//output:


//1234
//5678
//entered is 2 9
//final value is 5678
