#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[100];
	for (int i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}
	int b[100];
	if (n == 1)
		b[0] = 0;
	else {
		b[0] = 0;
		int j;
		for(j = 1; j < n; j++){
		b[j] = 0;
		for (int k = 0; k < j; k++) {
			if (a[k] < a[j])
				b[j] = b[j] + 1;
		}
	}
	}
	for (int p = 0; p < n; p++) {
		printf("%d ",b[p]);
	}
	return 0;
}