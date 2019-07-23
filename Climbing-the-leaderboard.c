#include<stdio.h>
#include<math.h>
int main(){
    int n,p,m;
    scanf("%d",&n);
    int arr[n];

    for(p=0;p<n;p++){
    scanf("%d",&arr[p]);
    
    }
    scanf("%d",&m);

    int alice[m];
    for(p=0;p<m;p++){
    scanf("%d",&alice[p]);
    
    }
    int aliceRank[m];
    int ranking[n],i=0,j,count=1;
    ranking[0]=count;
    for(j=1;i<n-1;j++){
            
            if(arr[i]==arr[j]){
                ranking[i]=ranking[j]=count;
            }else if(arr[i]>arr[j]){
                count++;
                ranking[j]=count;
            }
            i++;
        }    
   
        j=n-1;
for(i=0;i<m;i++)
    {
        
        while(j>=0 && alice[i]>arr[j]){
            j--;}
        if(j==-1 && alice[i]>alice[2])
            aliceRank[i]=1;

        else if(alice[i] == arr[j])
            aliceRank[i]=ranking[j];

        else if(alice[i] < arr[j])
            aliceRank[i]=ranking[j]+1;

        else if( alice[i]<alice[2]){
            aliceRank[i]=ranking[j]+2;
        }    
        
    }
   
    for(i=0;i<m;i++){
    printf("%d",aliceRank[i]);
    printf("\n");
    
    }
    
    getchar();
    return 0;
}
