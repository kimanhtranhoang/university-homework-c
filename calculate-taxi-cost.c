#include <stdio.h>

int main() {
	float km, cost;
	printf("Nhap so km:", &km);
	scanf("%f", &km);
	
	if (km > 0) {
		if (km < 120) {
			if (km > 1) {
				if (km >= 2 && km <= 5) {
					cost = 15000 + (km-1)*13500;
				} else {
					cost = 15000 + 4*13500 + (km-5)*11000;
				}
			} else {
				cost = 15000;
		}
		} else {
			cost = (15000 + 4*13500 + (km-5)*11000) * 9 / 10;
		}
		printf("Gia xe cua ban la: %f dong!", cost);
	} else {
		printf("Nhap sai so!");
	}
}
