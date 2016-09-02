// Deddy Ch. Kakunsi

#include<stdio.h>
#include<string.h>

void proses();

int main() {
	int i;
	
	for (i = 0; i < 4; i++) {
		proses();
	}

	return 0;
}

void proses() {
	char kata[100];
	int i, j;
	int unik = 1;

	for (i = 0; i < 100; i++) {
		kata[i] = 0;
	}
	
	scanf("%s", &kata);
	
	if (strlen(kata) > 1) {
		for (i = 0; i < sizeof(kata); i++) {
			if (kata[i] == 0)
				continue;
			
			for (j = i + 1; j < sizeof(kata); j++) {
				//if ((toupper(kata[i]) == kata[j]) || (tolower(kata[i]) == kata[j]))
				if (kata[i] == kata[j])
					unik = 0;
			}
		}
	
		printf("%d\n", unik);
	}
}
