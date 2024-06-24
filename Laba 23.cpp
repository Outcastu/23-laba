#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define MAX_LEN 80
char s[MAX_LEN];



void ex1() {
	printf("Калинкин Андрей\n");
	printf("ЛР23 Задача 1\n");
	// Входной файл
	FILE* fin = fopen("E:\\уник\\ОА и П\\Labs\\laba23\\text1.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}
	// Выходной файл
	FILE* fout;
	fout = fopen("E:\\уник\\ОА и П\\Labs\\laba23\\out1.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	// в цикле для всех строк
	while (!feof(fin)) {
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			for (int i = 0; s[i] != '\0'; i++) {
				if (s[i] == '\t') // Если прочитан пробел
					s[i] = '%'; // Заменяем его на '%’
			}
			// сохранить строку в выходной файл
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}
	// закрыли файлы
	fclose(fin);
	fclose(fout);
	printf("ЛР23 Задача 1 FINISH\n");
}
void ex2() {
	printf("Задача 2 \n");
	// Входной файл
	FILE* fin = fopen("E:\\уник\\ОА и П\\Labs\\laba23\\text1.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}
	// Выходной файл
	FILE* fout;
	fout = fopen("E:\\уник\\ОА и П\\Labs\\laba23\\out2.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	// в цикле для всех строк
	while (!feof(fin)) {
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			for (int i = 0; s[i] != '\0'; i++) {
				s[i] = toupper(s[i]);
			}
			// сохранить строку в выходной файл
			fprintf(fout, "%s", s);
			printf(">>%s\n", s);
		}
	}
	// закрыли файлы
	fclose(fin);
	fclose(fout);
	printf("ЛР23 Задача 2 FINISH\n");

}
void ex3() {
	int k = 0;
	int i;
	// Входной файл
	FILE* fin = fopen("E:\\уник\\ОА и П\\Labs\\laba23\\Text1.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}
	// Выходной файл
	FILE* fout;
	fout = fopen("E:\\уник\\ОА и П\\Labs\\laba23\\out3.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	while (!feof(fin)) {
		// загрузить строку
		char arr[] = { "#" };
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			for (int i = 0; s[i] != '\0'; i++) {
				if (s[i + 1] == '\0') {
					s[i] = '#';
				}
			}
			// сохранить строку в выходной файл
			fprintf(fout, "%s", s);
			printf(">>%s\n", s);
		}
	}
	// закрыли файлы
	fclose(fin);
	fclose(fout);
	printf("ЛР23 Задача 3 FINISH\n");

}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ex3();
}
