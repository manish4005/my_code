#include <stdio.h>
#include <stdbool.h>

int sqroot(int x){
    int i=1;
    int res=1;
    if (x==0| x ==1)
        return x;
    while (res <=x){
        if (res == x)
            return i;
         i++;
         res = i*i;
         
   
    }
    return i-1;
}

int sqroot_better(int x){
    int start,end,mid,res;
    if (x==0| x ==1)
        return x;
    start = 1;
    end = x/2;
    
    while(start <= end){
         mid = (start + end)/2;
         res = mid*mid;
         if (res  == x)
            return mid;
         else if (res < x){
           start = mid+1;
           }
         else 
            end = mid-1;
    }
    return mid;
    
  
}

int main() {
    int j;
    j= sqroot_better(5);
    printf("sqaure root of 10 is %d \n",j );
    return 1;
}