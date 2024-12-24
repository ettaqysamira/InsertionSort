#include<stdio.h>
#include<stdlib.h>
int main(){
	int Tab[]={10, 6, -2,20,30,8};
	int N=6;
	for(int i;i<N;i++){
		for(int j=i-1;j>=0;j--){
			if(Tab[j]>Tab[j+1]){
				/*******Swap*****/
				int temp=Tab[j];
				Tab[j]=Tab[j+1];
				Tab[j+1]=temp;
			}
		}	
	}
	
	for(int i=0;i<N;i++){
		printf("%d ",Tab[i]);
	}
	
}