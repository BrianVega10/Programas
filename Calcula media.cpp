#include<stdio.h>
#include<math.h>

int main(void){
	
	int arr[30]={20,19,18,16,19,20,22,21,19,20,22,14,24,21,26,20,19,18,16,19,20,22,21,19,20,22,14,24,21,26};

	int i,sum;
	float mean;
	
	for(i=1;i<31;i++)
	sum=sum+arr[i];
	mean=sum/30;
	printf("La media de las temperaturas del mes es%f",mean);

return 0;
}
