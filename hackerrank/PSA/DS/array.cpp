#include <stdio.h>
main(){
    int arr[1000];
    int N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);

    }
    i--;
    for(;i>=0;i--)printf("%d ",arr[i]);
}
