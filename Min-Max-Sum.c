#include<stdio.h>
#include<math.h>
int main(){
    long int arr[5],i,j,temp;
    long int max=0,min=0;
    for(i=0;i<=5;i++){


        scanf("%ld",&arr[i]);
    }
    for(i=0;i<5;i++){
        j=i+1;
        for(j=0;j<4;j++){
            
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    

    for(i=0;i<4;i++){
        max=max+arr[i];
    }
    for(i=4;i>=1;i--){
        min=min+arr[i];
    }
    

    printf("%ld %ld",min,max);
    
    
    getchar();
    return 0;
    
    
    
}
