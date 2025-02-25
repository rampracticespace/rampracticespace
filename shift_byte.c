#include<stdlib.h>
#include <stdio.h>

#define NUM_BITS_IN_A_BYTE    (1 << 3) 

#define NUM_SHIFT_32BIT(X)   (X = ((X>>16)|(X<<16)))
#define NUM_SHIFT_16BIT(X)   (X = ((X>>8)|(X<<8)))
#define NUM_SHIFT_8BIT(X)    (X = (((X & 0x0F)<< 4)|((X & 0xF0) >>4)))

//#define NUM_SHIFT_GEN(X,size)     (X = ((X>>size|(X << size))))
//#define NUM_SHIFT_GEN(X)     (X = ((X>>((sizeof(X)*NUM_BITS_IN_A_BYTE)>>1))|(X << ((sizeof(X)*NUM_BITS_IN_A_BYTE)>>1))))
#define NUM_SHIFT_GEN(X)     (X = (((sizeof(X)==1?(X&0XF0):X)>>((sizeof(X)*NUM_BITS_IN_A_BYTE)>>1))|(((sizeof(X)==1?(X&0x0F):X)) << ((sizeof(X)*NUM_BITS_IN_A_BYTE)>>1))))
int main()
{
    int x = 0x12345678;
    short int x2 = 0x1122;
    char x3 = 0x97;
    // x ^=~x & x;
    printf("0x%x\n",NUM_SHIFT_8BIT(x3));
    printf("0x%x\n",NUM_SHIFT_16BIT(x2));
    printf("0x%x\n",NUM_SHIFT_32BIT(x));
    printf("-----0x%X\n",x);
    //printf("0x%x\n",NUM_SHIFT_GEN(x,(sizeof(x)*8)/2));
    printf("0x%x\n",NUM_SHIFT_GEN(x));
    printf("0x%x\n",NUM_SHIFT_GEN(x2));
    printf("0x%x\n",NUM_SHIFT_GEN(x3)); //Need improvement for nibble swap o/p showing 0xFFFFFF79
    printf("0x%x\n",NUM_SHIFT_GEN(x3));
    printf("0x%x\n",NUM_SHIFT_GEN(x3));
    return 0;
}

//O/p: 

