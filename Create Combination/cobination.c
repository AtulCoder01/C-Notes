#include<stdio.h>
#include<string.h>
#define N 10
void print(char *num, int n);
int main()
{
    char num[N];
    char temp;
    int i, n, j;
    printf("\nHow many number you want to enter: ");
        scanf("%d", &n);
    printf("\nEnter a string to see all combinations:\n");
    scanf("%s", &num[i]);
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
 
void print(char *num, int n)
{
    printf("%s", num);
    printf("\n");
}
