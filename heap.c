#include <stdio.h>
#include <stdlib.h>
int main()
{
int i, totalNum;
int total;
float average=0.0;
int *values;

printf("how many numbers you are going to enter\n");
scanf("%d", &totalNum);
values = (int *) malloc(totalNum*sizeof(int));

printf("Enter the numbers\n");

for (i=0; i<totalNum; i=i+1){
    scanf("%d", &values[i]);
    total+=&values[i];
}

average=(float) total/(float) totalNum;
printf("the average is %f", average);
}
