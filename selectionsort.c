#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a[6]={1,8,5,2,7,4};
    int index;
    for(int i=0;i<6-1;i++)
    {
        index=i;
        for(int j=i+1;j<6;j++)
        {
            if(a[j] <a[index])
            {
                index=j;
            }
        }
        swap(&a[i],&a[index]);

    }


    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
