#include<stdio.h>
#include<limits.h>
/*Find the second lagest elements in the given array*/
int main(){
    int arr[8]={1,4,6,8,12,88,43,99};
    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0;i<8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<8;i++){
        if(smax<arr[i]  && arr[i]!=max){
        smax=arr[i];
        }
    }
    printf("%d", smax);
    return 0;
}