#include <stdio.h>
/*
 * Add `int max_of_four(int a, int b, int c, int d)` here.
 * */
int max_of_four(int a, int b, int c, int d) {
	int nums[4] = {a, b, c, d};
	int max = a;
	for(int i = 1; i < 4; i++) {
		if(nums[i] > max) {
			max=nums[i];
		}
	}
	return max;
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);
			    
	return 0;
}
