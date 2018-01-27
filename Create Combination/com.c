#include<stdio.h>
#include<string.h>
#define N 10
void print(int *num, int n);
int main()
{
    int num[N];
    int *ptr;
    int temp;
    int i, n, j;
    printf("\nHow many number you want to enter: ");
        scanf("%d", &n);
    printf("\nEnter a list of numbers to see all combinations:\n");
    for (i = 0 ; i < n; i++)
        scanf("%d", &num[i]);
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n-1; j++) {
            temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
            print(num, n);
	}
    }
    return 0;
}
 
void print(int *num, int n)
{
    int i;
    for ( i = 0 ; i < n ; i++)
        printf("%d", num[i]);
    printf("\n");
}
