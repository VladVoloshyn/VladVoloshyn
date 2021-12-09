#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NOTEBOOK {
	char model[21];  
	int cost;        
	float bulk;     
	struct SIZE {     
		float x;     
		float y;    
		float z;     
	}; SIZE sz;
	int freq;        
	int ozu;         
	float diagonal;  
	int video;       
					 
	int hg;         
	int wd;          
	int hz;          
	float hdd;       
};
NOTEBOOK a[16];
NOTEBOOK b[1];
int i = 0, k = 0;

void read() {
	char s[100];
	FILE* note, * fout;
	note = fopen("note.txt", "r");
	fout = fopen("note.bin", "wb");
	printf("n Model\t\t\tCena\tVes\n");
	while (!feof(note)) {
		fgets(s, 100, note);
		if (atoi(&s[24]) < 7) { k++; }
	}
	fwrite(&k, 2, 1, fout);
	fseek(note, 0L, SEEK_SET);            

	while (!feof(note)) {
		fgets(s, 100, note);
		if (atoi(&s[24]) < 7) {
			strncpy(a[i].model, s, 18);
			a[i].cost = atoi(&s[19]);
			a[i].bulk = atof(&s[24]);
			a[i].sz.x = atof(&s[28]);
			a[i].sz.y = atof(&s[33]);
			a[i].sz.z = atof(&s[38]);
			a[i].freq = atoi(&s[43]);
			a[i].ozu = atoi(&s[47]);
			a[i].diagonal = atof(&s[50]);
			a[i].video = atoi(&s[55]);
			a[i].hg = atoi(&s[57]);
			a[i].wd = atoi(&s[62]);
			a[i].hz = atoi(&s[67]);
			a[i].hdd = atof(&s[70]);
			i++;
		}
	}

	int t = 0;
	int iz = 0;
	while (t == 0) {
		for (i = 0; i < k - 1; i++) {
			if (a[i].cost > a[i + 1].cost) {
				iz = 1;
				b[0] = a[i];
				a[i] = a[i + 1];
				a[i + 1] = b[0];
			}
		}
		if (iz == 0) { t = 1; }
		else { iz = 0; }
	}

	for (i = 0; i < k; i++) {
		printf("%d %s\t%d\t%f\n", i + 1, a[i].model, a[i].cost, a[i].bulk);
	}
	fwrite(&a, sizeof(NOTEBOOK), k, fout);
	fclose(note);
	fclose(fout);
	printf("\nNumber of records=%d", k);
	printf("\nnote.txt write in struct...OK\n");
	printf("note.bin write...OK\n");
}


int main() {
	FILE* note;
	if ((note = fopen("note.txt", "r")) == 0) {
		printf("error with opening the input file\n"); system("pause"); return 1;
	}
	fclose(note);
	read();
	system("pause");
	return 0;
}