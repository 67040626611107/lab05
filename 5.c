#include <stdio.h> 
#include <unistd.h>


int s,s2;
int i,i2;
int min = 9999999;
int main() {

    scanf("%d %d",&s,&s2);
    int size[s][s2];
    i = 0;
    while (i < s)
    {
        i2 = 0;
        while (i2 < s2)
        {
            printf("Enter size [%d][%d]: ",i,i2);
            scanf("%d",&size[i][i2]);
            if (min > size[i][i2] ) {
                min = size[i][i2];
            }
            i2++;
        }
        i++;
    }
    printf("%d",min);
    return (0);
}