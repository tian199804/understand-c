#include<stdio.h>
int main(){
	int a;
	int b;
	printf("请输入两个整数:\n");
	scanf("%d%d", &a, &b);
	printf("前者是后者的%f\n",a / b);
	return 0;
}