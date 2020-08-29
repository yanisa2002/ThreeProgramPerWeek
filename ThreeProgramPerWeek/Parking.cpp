#include<stdio.h>

int main() {
	int shop, h, m, cash;
	printf("Shopping : ");
	scanf_s("%d", &shop);
	printf("Hour : ");
	scanf_s("%d", &h);
	printf("Minute : ");
	scanf_s("%d", &m);
	printf("\n");

	if (shop >= 1000) {
		h = h - 4;
		if (m < 60) h++;
		cash = 30 * h;
	}
	else {
		h = h - 1;
		if (m < 60) h++;
		cash = 30 * h;
	}

	printf("Cash : %d Baht", cash);
}