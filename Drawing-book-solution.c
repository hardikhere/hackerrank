#include<stdio.h>
 #include<conio.h>
 
 int main(){
 	int i,j,count=-1;
 	int n,p;
 	scanf("%d %d",&n,&p);
 if(p == 0|| p==n){
 
 count = 0;
 }      
 else if(p <= n/2)
		{
        	count = p/2;
				
			}
      else
		 {
			if(n%2 == 0){
				count = (n-p +1)/2;
			}else count = (n-p)/2;
			}
      printf("%d",count);
        getch();
        return 0;
 	
 }
