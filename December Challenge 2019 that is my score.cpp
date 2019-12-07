#include<iostream>
using namespace std;
int sum=0,n,temp,t;
int qnum,score;
struct arr{
	int array[11]={0};
};
int main(){
	
	cin>> t;
	while(t){
		 n;
		struct arr * array = new arr;
		cin>>n;//number of submissions made
		temp =n;
	    
		while(temp--){
			
			cin>>qnum>>score;
			if(array->array[qnum]<score){
				array->array[qnum]=score;
			}
			
		}
		
	 sum=0;
		for(int i =1;i<9;i++){
			sum = sum+  array->array[i];
		}
		cout<<sum<<endl;
	t--;	
	}
	return 0;
}
