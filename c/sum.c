#include <stdio.h>

//µİ¹éÇóºÍ 
int f(int n){
	if (n==1)
		return 1;
	else
		return f(n-1)+n;
}
	
int main(){
	printf("1+....+10=%d\n",f(10));
	printf("1+....+210=%d\n",f(210));
}
