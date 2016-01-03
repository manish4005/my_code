#include <stdio.h>
void swap(int *,int *);
void selectionSort(int a[],int n) {

   int i,j, min_ind;
   for (i=0;i<n;i++) {
      min_ind = i;
      for (j=i+1;j<n;j++){
	if (a[j] < a[min_ind])
		min_ind = j;
	} 
      swap(a[i],a[min_ind]);
   }

} 

void swap(int *a, int *b) {
   int temp;
   temp = *a;
   *a=*b;
   *b= temp;
}

int main() {

   int a[] = { 1,4,3,5,7,2,11}, i=0;
   printf("Before sorting\n");
   for (int i=0;i<7;i++)
     printf("%d  ",a[i]);
   printf("After sorting\n");
   for (int i=0;i<7;i++)
     printf("%d  ",a[i]);
     
}

