#include <stdio.h> 
#include <unistd.h>

int num,i;
int rounds;
int count = 0;
int main() {
    scanf("%d",&rounds) ;
    i = 0;
    int order[rounds];

    while (rounds > i) {
        scanf("%d",&num);
        order[i] = num;
        i++;
    }
    i--;
    while (rounds > count)
    {
        printf("%d",order[i]);
        i--;
        count++;
    }
    
    return (0);
}