#include <stdio.h>
int kadane(int a[],int n){
    int i,max_so_far = 0,max_end_here=0;
    for (i=0;i<n;i++){
        max_end_here=max_end_here + a[i];
        if (max_end_here <0)
           max_end_here = 0;
        if (max_end_here > max_so_far)
            max_so_far = max_end_here;
    }
    return max_so_far;
}

int main()
{
    int i,arr[7]={-1,-2,4,-1,-2,5,-3};
    printf("the array is ");
    for (i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }
    printf ("the longest sub seqeunce %d \n",kadane(arr,7));
}
    
    

