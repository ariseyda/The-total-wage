#include<stdio.h>
#include<math.h>

//Write the recursive function together with the main () function, 
//which takes twice as much as the previous day and takes the number of days worked by the worker, 
//whose first day's wages are only 3 pounds, and returns the total wage.

int _wages(int n,int sum){
    
	sum+=3*pow(2,n-1);
	if(n>=2){
		_wages(n-1,sum);
	}
	
	
}
int main(){
	
	int m;
	printf("Enter the number of days worked by the worker:");
	scanf("%d",&m);
	int s=0;
	int result=_wages(m,s);
	
	printf("The total wages:%d",result);
	
	
	return 0;
}
