#include <stdio.h>
#include <math.h>

int main() {
	float score;
	printf("Nhap diem trung binh cua ban:", &score);
	scanf("%f", &score);
	
	if (score <= 10) {
		if ( score >= 9)
			printf("Hoc luc cua ban la Xuat sac!");
		if (score >= 8 && score < 9 )
			printf("Hoc luc cua ban la Gioi!");
		if (score >= 7 && score < 8 )
			printf("Hoc luc cua ban la Kha.");
		if (score >= 6 && score < 7 )
			printf("Hoc luc cua ban la Trung binh.");
		if (score >= 5 && score < 6 )
			printf("Hoc luc cua ban la Yeu.");
		if (score >= 0 && score < 5 )
			printf("Hoc luc cua ban la Kem.");
	} else {
		printf("Ban da nhap sai diem trung binh!");
	}
}
