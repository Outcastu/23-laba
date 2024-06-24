#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define MAX_LEN 80
char s[MAX_LEN];



void ex1() {
	printf("�������� ������\n");
	printf("��23 ������ 1\n");
	// ������� ����
	FILE* fin = fopen("E:\\����\\�� � �\\Labs\\laba23\\text1.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	// �������� ����
	FILE* fout;
	fout = fopen("E:\\����\\�� � �\\Labs\\laba23\\out1.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	// � ����� ��� ���� �����
	while (!feof(fin)) {
		// ��������� ������
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// ���������� ����������� ������
			for (int i = 0; s[i] != '\0'; i++) {
				if (s[i] == '\t') // ���� �������� ������
					s[i] = '%'; // �������� ��� �� '%�
			}
			// ��������� ������ � �������� ����
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}
	// ������� �����
	fclose(fin);
	fclose(fout);
	printf("��23 ������ 1 FINISH\n");
}
void ex2() {
	printf("������ 2 \n");
	// ������� ����
	FILE* fin = fopen("E:\\����\\�� � �\\Labs\\laba23\\text1.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	// �������� ����
	FILE* fout;
	fout = fopen("E:\\����\\�� � �\\Labs\\laba23\\out2.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	// � ����� ��� ���� �����
	while (!feof(fin)) {
		// ��������� ������
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// ���������� ����������� ������
			for (int i = 0; s[i] != '\0'; i++) {
				s[i] = toupper(s[i]);
			}
			// ��������� ������ � �������� ����
			fprintf(fout, "%s", s);
			printf(">>%s\n", s);
		}
	}
	// ������� �����
	fclose(fin);
	fclose(fout);
	printf("��23 ������ 2 FINISH\n");

}
void ex3() {
	int k = 0;
	int i;
	// ������� ����
	FILE* fin = fopen("E:\\����\\�� � �\\Labs\\laba23\\Text1.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	// �������� ����
	FILE* fout;
	fout = fopen("E:\\����\\�� � �\\Labs\\laba23\\out3.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	while (!feof(fin)) {
		// ��������� ������
		char arr[] = { "#" };
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// ���������� ����������� ������
			for (int i = 0; s[i] != '\0'; i++) {
				if (s[i + 1] == '\0') {
					s[i] = '#';
				}
			}
			// ��������� ������ � �������� ����
			fprintf(fout, "%s", s);
			printf(">>%s\n", s);
		}
	}
	// ������� �����
	fclose(fin);
	fclose(fout);
	printf("��23 ������ 3 FINISH\n");

}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ex3();
}
