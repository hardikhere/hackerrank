#include"stdio.h"
#include"math.h"
#include "stdlib.h"
int main(void){
int n,i,j,sum1=0,sum2=0,diff;
scanf("%d",&n);
int arr[n][n];

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<n;i++){
         sum1=sum1+arr[i][i];
      }


    for(i=0;i<n;i++){
        sum2=sum2+arr[i][n-1-i];

        }

if(sum1>sum2){
    diff=sum1-sum2;

}else diff=sum2-sum1;
printf("%d",diff);
getchar();
return 0;





}


