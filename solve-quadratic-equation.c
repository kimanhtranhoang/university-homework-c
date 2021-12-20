#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, x, x1, x2, delta;
	printf("Nhap he so a:", &a);
		scanf("%f", &a);
	printf("Nhap he so b:", &b);
		scanf("%f", &b);
	printf("Nhap he so c:", &c);
		scanf("%f", &c);
	delta = b*b - 4 *a*c;	
	
	if (a == 0) {
		x = -c/b;
		printf("Nghiem cua phuong trinh la: %f",x);
	} else {
		if (delta >= 0) {
			if (delta > 0) {
				x1 = (-b + sqrt(delta))/(2*a);
				x2 = (-b - sqrt(delta))/(2*a);
				printf("Phuong trinh co hai nghiem phan biet la: \nx1 = %f \nx2 = %f", x1,x2);
			} else {
				x = -b/(2*a);
				printf("Nghiem kep cua phuong trinh la: %f",x);
			}
		} else
			printf("Phuong trinh vo nghiem!");
	}
}
