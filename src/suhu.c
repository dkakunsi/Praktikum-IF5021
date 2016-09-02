// Deddy Ch. Kakunsi

#include<stdio.h>

void cetakTertinggi(int hari[], int size);
void cetakTerendah(int hari[], int size);
void cetakRata(int hari[], int size);
void cetakBelowZero(int hari[], int size);
void cetakIsZero(int hari[], int size);
void cetakBetweenZeroAndNormal(int hari[], int size);
void cetakAboveNormal(int hari[], int size);

int main() {
	int jumlahHari;
	int *hari;
	int i = 0;

	scanf("%d", &jumlahHari);

	if (jumlahHari < 31) {
		hari = malloc(sizeof(int) * jumlahHari);
		
		for (i = 0; i < jumlahHari; i++) {
			scanf("%d", &hari[i]);
		}
		
		cetakTertinggi(hari, jumlahHari);
		cetakTerendah(hari, jumlahHari);
		cetakRata(hari, jumlahHari);
		cetakBelowZero(hari, jumlahHari);
		cetakIsZero(hari, jumlahHari);
		cetakBetweenZeroAndNormal(hari, jumlahHari);
		cetakAboveNormal(hari, jumlahHari);
	}

	return 0;
}

void cetakTertinggi(int hari[], int size) {
	int i, tertinggi;
	
	for (i = 0; i < size; i++) {
		if (tertinggi < hari[i]) {
			tertinggi = hari[i];
		}
	}
	
	printf("%d\n", tertinggi);
}

void cetakTerendah(int hari[], int size) {
	int terendah, i;
	
	for (i = 0; i < size; i++) {
		if (terendah > hari[i]) {
			terendah = hari[i];
		}
	}
	
	printf("%d\n", terendah);
}

void cetakRata(int hari[], int size) {
	int jumlah = 0, i;
	
	for (i = 0; i < size; i++) {
		jumlah += hari[i];
	}
	
	printf("%.2f", (float)jumlah/i);
}

void cetakBelowZero(int hari[], int size) {
	int num = 0, i;
	
	for (i = 0; i < size; i++) {
		if (hari[i] < 0) {
			num++;
		}
	}
	
	printf("%d\n", num);
}

void cetakIsZero(int hari[], int size) {
	int num = 0, i;
	
	for (i = 0; i < size; i++) {
		if (hari[i] == 0) {
			num++;
		}
	}
	
	printf("%d\n", num);
}

void cetakBetweenZeroAndNormal(int hari[], int size) {
	int num = 0, i;
	
	for (i = 0; i < size; i++) {
		if (hari[i] > 0 && hari[i] < 35) {
			num++;
		}
	}
	
	printf("%d\n", num);
}

void cetakAboveNormal(int hari[], int size) {
	int num = 0, i;
	
	for (i = 0; i < size; i++) {
		if (hari[i] > 35) {
			num++;
		}
	}
	
	printf("%d\n", num);
}

