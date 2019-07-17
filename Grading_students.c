#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int temp[n];
	
	
	int res[n],i;
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
		printf("\n");
		temp[i]=arr[i];
	}
	
	
	for(i=0;i<n;i++)
	{ if(arr[i]>40 ){
	     
		while(arr[i]%5!=0){
				arr[i]=arr[i]+1;
				}
		
		
		res[i]=arr[i];
		if(res[i]-temp[i]>=3){
			res[i]=temp[i];
		}
		
		
     }
	}
	for(i=0;i<n;i++){
		printf("\n%d",res[i]);
	}
getch();
return 0;
	
}
    
    


