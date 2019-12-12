#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

int main(){
	int t;
	
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	     vector<long long int> array;
		int temp = 0;
	
		while(temp++<n){
			long long int val;
			cin>>val;
			array.push_back(val);
		}
		int count2=0,count0=0;
		
		for(int i =0;i<n;i++){
			if(array[i]==0){
				++count0;
			}
			else if(array[i]==2)++count2;
		}
		
		int sum0=0;
		for(int i = count0-1;i>0;i--){
			sum0 = sum0 + i;
		}
		int sum2=0;
		for(int j = count2-1;j>0;j--){
			sum0 = sum0 + j;
		}
		
		int t=sum0+sum2;
		cout<<t<<endl;
		
	}
	return 0;
	
}
