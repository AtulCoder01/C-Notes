#include<stdio.h>
void main()
{
int i,j,temp,r;
printf("Enter range of Array:>");
scanf("%d",&r);
int A[r],A1[r],C1[100],B[r],C[100],count=0;


for(i=0;i<r;i++)
{
printf("Enter %dst element:>",i+1);
scanf("%d",&A1[i]);
A[i]=A1[i];
}

printf("A[%d]  ",r);
for(i=0;i<r;i++)
printf("%d, ",A[i]);

for(i=0;i<r-1;i++)
{
if(A1[0]<A1[i+1])
{
temp=A1[0];
A1[0]=A1[i+1];
A1[i+1]=temp;
}
else
continue;
}

for(i=0;i<=A1[0];i++)
{
for(j=0;j<r;j++)
{
if(i==A[j])
{
count++;
}
else
continue;
}
C1[i]=count;
count=0;
}

printf("Greatest No = %d\n",A1[0]);
printf("C1[%d] ",A1[0]);
for(i=0;i<=A1[0];i++)
printf("%d, ",C1[i]);


for(i=0;i<=A1[0];i++)
{
if(i==0)
C[i]=C1[i];
C[i+1]=C[i]+C1[i+1];
}

printf("\n");
printf("C[%d]  ",A1[0]);
for(i=0;i<=A1[0];i++)
printf("%d, ",C[i]);

for(i=r-1;i>=0;i--)
{
B[C[A[i]]]=A[i];
C[A[i]]--;
}
printf("\n");
printf("B[%d]  ",r);
for(i=1;i<=r;i++)
printf("%d, ",B[i]);

printf("\n");

printf("C[%d]  ",A1[0]);
for(i=0;i<=A1[0];i++)
printf("%d, ",C[i]);
printf("\n");
}
