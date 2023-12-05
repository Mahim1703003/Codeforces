#include<stdio.h>
int main()
{
    int n,i;
    printf("Number of students: ");
    scanf("%d",&n);
    int a[n],b[21];
    printf("\nInput CT marks for %d students:\n",n);
    for(i=0;i<=n-1;i++)
    {
        printf("Student: %d\tMarks: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=20;i++)
        b[i]=0;
    for(i=0;i<=n-1;i++)
        b[a[i]]++;
    printf("\n");
    for(i=0;i<=20;i++)
        printf("Marks: %d\tCount: %d\n",i,b[i]);
    return 0;
}
