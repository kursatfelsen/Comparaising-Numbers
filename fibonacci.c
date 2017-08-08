#include <stdio.h>


fibonacci(int);
void main() {
	int a;

	printf("Kac adet fibonacci sayisi istersiniz?");
	scanf("%d",&a);
	fibonacci(a);þþ
}

fibonacci(int a)
{
	int i;
	int c=1;
	for(i=1;i<=a;i++){
		printf("%d /n",c);
		c=c+c;
	}
	
	}
