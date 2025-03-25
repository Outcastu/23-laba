#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>

#define MAX_LEN 80
    char s[MAX_LEN];

    void ex1() {
        printf("�������� ������\n");
        printf("��23 ������ 1\n");

        // ��������� ���� ��� ������ � ������
        FILE* fin = fopen("E:\\����\\��������� �����\\laba23\\text1.txt", "r+");
        if (fin == NULL) {
            printf("������� ���� �� ������");
            return;
        }

        // ������� ��������� ���� ��� ������
        FILE* fout = fopen("E:\\����\\��������� �����\\laba23\\temp.txt", "wt");
        if (fout == NULL) {
            printf("��������� ���� �� ��������");
            fclose(fin);
            return;
        }

        // � ����� ��� ���� �����
        while (fgets(s, MAX_LEN - 1, fin) != NULL) {
            // ���������� ����������� ������
            for (int i = 0; s[i] != '\0'; i++) {
                if (s[i] == '\t') // ���� �������� ���������
                    s[i] = '%'; // �������� ��� �� '%'
            }
            // ��������� ������ �� ��������� ���� � ����������� ����� ������
            fprintf(fout, "%s", s); // ����� ��� ���� ������ ����� ������ � ����� ������ s
            printf(">>%s", s); // ������� \n, ����� �� ���� ������� ��������
        }

        // ��������� �����
        fclose(fin);
        fclose(fout);

        // �������� ������������ ���� ���������
        remove("E:\\����\\��������� �����\\laba23\\text1.txt");
        rename("E:\\����\\��������� �����\\laba23\\temp.txt", "E:\\����\\��������� �����\\laba23\\text1.txt");

        printf("��23 ������ 1 FINISH\n");
    }

    void ex2() {
        printf("������ 2 \n");

        // ��������� ���� ��� ������ � ������
        FILE* fin = fopen("E:\\����\\��������� �����\\laba23\\text1.txt", "r+");
        if (fin == NULL) {
            printf("������� ���� �� ������");
            return;
        }

        // ������� ��������� ���� ��� ������
        FILE* fout = fopen("E:\\����\\��������� �����\\laba23\\temp.txt", "wt");
        if (fout == NULL) {
            printf("��������� ���� �� ��������");
            fclose(fin);
            return;
        }

        // � ����� ��� ���� �����
        while (fgets(s, MAX_LEN - 1, fin) != NULL) {
            // ���������� ����������� ������
            for (int i = 0; s[i] != '\0'; i++) {
                s[i] = toupper(s[i]);
            }
            // ��������� ������ �� ��������� ���� � ����������� ����� ������
            fprintf(fout, "%s", s); // ����� ��� ���� ������ ����� ������ � ����� ������ s
            printf(">>%s", s); // ������� \n, ����� �� ���� ������� ��������
        }

        // ��������� �����
        fclose(fin);
        fclose(fout);

        // �������� ������������ ���� ���������
        remove("E:\\����\\��������� �����\\laba23\\text1.txt");
        rename("E:\\����\\��������� �����\\laba23\\temp.txt", "E:\\����\\��������� �����\\laba23\\text1.txt");

        printf("��23 ������ 2 FINISH\n");
    }

    void ex3() {
        printf("������ 3 \n");

        // ��������� ���� ��� ������
        FILE* fin = fopen("E:\\����\\��������� �����\\laba23\\text1.txt", "r");
        if (fin == NULL) {
            printf("������� ���� �� ������");
            return;
        }

        // ������� ��������� ���� ��� ������
        FILE* fout = fopen("E:\\����\\��������� �����\\laba23\\temp.txt", "wt");
        if (fout == NULL) {
            printf("��������� ���� �� ��������");
            fclose(fin);
            return;
        }

        // � ����� ��� ���� �����
        while (fgets(s, MAX_LEN - 1, fin) != NULL) {
            // ������� ������ ����� ������, ���� �� ����
            s[strcspn(s, "\n")] = 0; // ������� ������ ����� ������, ���� �� ����

            // ��������� '#' � ����� ������
            strcat(s, "#");

            // ��������� ������ �� ��������� ���� � ����������� ����� ������
            fprintf(fout, "%s\n", s); // ���������� ������ � ����� ������
        }

        // ��������� �����
        fclose(fin);
        fclose(fout);

        // �������� ������������ ���� ���������
        remove("E:\\����\\��������� �����\\laba23\\text1.txt");
        rename("E:\\����\\��������� �����\\laba23\\temp.txt", "E:\\����\\��������� �����\\laba23\\text1.txt");

        printf("��23 ������ 3 FINISH\n");
    }
    void main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        ex1();
        ex2();
        ex3();
    }
    