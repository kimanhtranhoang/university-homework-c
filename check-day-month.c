#include <stdio.h>

int main() {
	int month;
	printf("Nhap mot thang trong nam:", &month);
	scanf("%d", &month);
	
	switch (month) {
		case 1: 
	    case 3: 
	    case 5: 
	    case 7: 
	    case 8: 
	    case 10: 
	    case 12: 
	      printf("Thang %d co 31 ngay ", month); break; 
	    case 4: 
	    case 6: 
	    case 9: 
	    case 11: 
	      printf("Thang %d co 30 ngay ", month); break;
		 case 2: 
	      printf ("Thang 2 co 28 hoac 29 ngay"); break; 
	    default : 
	      printf("Nhap sai thang!"); break; 
	}	
}
