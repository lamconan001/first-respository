#include<stdio.h>
int a[100];
int n;
void ghinhan(){
    for(int i=0;i<n;i++){
	  printf("%d",a[i]);
	}
	printf("\n");
	}

void Try(int k) {
	for (int y = 0; y <= 1; y++) {
		a[k] = y;
		if (k == n-1) ghinhan();
		else Try(k+1);
	}
	}

int main(){
	printf("Nhap n: ");
	scanf("%d",&n);
	Try(0);
	return 0;
}
