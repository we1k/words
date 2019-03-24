#include <stdio.h>
bool isPrime(int x){
	int i;
	for (i=2;i*i<=x;i++){
		if (!(x%i)){
			return false;
		}
	}
	return true;	
};
int Max(int a,int b){
	return (a>b)?a:b;
}
int main (){
	int a,b,c;
	int num=0;
	int tot=0;
	int max=-1;
	for (a=1;a<=9;a++){
		for (b=0;b<=9;b++){
			for (c=0;c<=9;c++){
				if ((isPrime(a+b+c))&&(isPrime(a*b*c))&&(isPrime(a*a+b*b+c*c))&&(isPrime(a*100+b*10+c))){
					num++;
					tot+=a*100+b*10+c;
					max=Max(max,a*100+b*10+c);
					printf("%d\n",a*100+b*10+c);
				}
			}
		}
	}
	printf("%d %d %d",num,tot,max); 
	return 0;
} 
