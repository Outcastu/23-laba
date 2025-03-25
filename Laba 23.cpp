#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>

#define MAX_LEN 80
    char s[MAX_LEN];

    void ex1() {
        printf("Калинкин Андрей\n");
        printf("ЛР23 Задача 1\n");

        // Открываем файл для чтения и записи
        FILE* fin = fopen("E:\\ОАиП\\текстовые файлы\\laba23\\text1.txt", "r+");
        if (fin == NULL) {
            printf("Входной файл не найден");
            return;
        }

        // Создаем временный файл для записи
        FILE* fout = fopen("E:\\ОАиП\\текстовые файлы\\laba23\\temp.txt", "wt");
        if (fout == NULL) {
            printf("Временный файл не создался");
            fclose(fin);
            return;
        }

        // В цикле для всех строк
        while (fgets(s, MAX_LEN - 1, fin) != NULL) {
            // Обработать загруженную строку
            for (int i = 0; s[i] != '\0'; i++) {
                if (s[i] == '\t') // Если прочитан табулятор
                    s[i] = '%'; // Заменяем его на '%'
            }
            // Сохранить строку во временный файл с добавлением новой строки
            fprintf(fout, "%s", s); // Здесь уже есть символ новой строки в конце строки s
            printf(">>%s", s); // Убираем \n, чтобы не было лишнего перехода
        }

        // Закрываем файлы
        fclose(fin);
        fclose(fout);

        // Заменяем оригинальный файл временным
        remove("E:\\ОАиП\\текстовые файлы\\laba23\\text1.txt");
        rename("E:\\ОАиП\\текстовые файлы\\laba23\\temp.txt", "E:\\ОАиП\\текстовые файлы\\laba23\\text1.txt");

        printf("ЛР23 Задача 1 FINISH\n");
    }

    void ex2() {
        printf("Задача 2 \n");

        // Открываем файл для чтения и записи
        FILE* fin = fopen("E:\\ОАиП\\текстовые файлы\\laba23\\text1.txt", "r+");
        if (fin == NULL) {
            printf("Входной файл не найден");
            return;
        }

        // Создаем временный файл для записи
        FILE* fout = fopen("E:\\ОАиП\\текстовые файлы\\laba23\\temp.txt", "wt");
        if (fout == NULL) {
            printf("Временный файл не создался");
            fclose(fin);
            return;
        }

        // В цикле для всех строк
        while (fgets(s, MAX_LEN - 1, fin) != NULL) {
            // Обработать загруженную строку
            for (int i = 0; s[i] != '\0'; i++) {
                s[i] = toupper(s[i]);
            }
            // Сохранить строку во временный файл с добавлением новой строки
            fprintf(fout, "%s", s); // Здесь уже есть символ новой строки в конце строки s
            printf(">>%s", s); // Убираем \n, чтобы не было лишнего перехода
        }

        // Закрываем файлы
        fclose(fin);
        fclose(fout);

        // Заменяем оригинальный файл временным
        remove("E:\\ОАиП\\текстовые файлы\\laba23\\text1.txt");
        rename("E:\\ОАиП\\текстовые файлы\\laba23\\temp.txt", "E:\\ОАиП\\текстовые файлы\\laba23\\text1.txt");

        printf("ЛР23 Задача 2 FINISH\n");
    }

    void ex3() {
        printf("Задача 3 \n");

        // Открываем файл для чтения
        FILE* fin = fopen("E:\\ОАиП\\текстовые файлы\\laba23\\text1.txt", "r");
        if (fin == NULL) {
            printf("Входной файл не найден");
            return;
        }

        // Создаем временный файл для записи
        FILE* fout = fopen("E:\\ОАиП\\текстовые файлы\\laba23\\temp.txt", "wt");
        if (fout == NULL) {
            printf("Временный файл не создался");
            fclose(fin);
            return;
        }

        // В цикле для всех строк
        while (fgets(s, MAX_LEN - 1, fin) != NULL) {
            // Убираем символ новой строки, если он есть
            s[strcspn(s, "\n")] = 0; // Удаляем символ новой строки, если он есть

            // Добавляем '#' в конец строки
            strcat(s, "#");

            // Сохранить строку во временный файл с добавлением новой строки
            fprintf(fout, "%s\n", s); // Записываем строку с новой строки
        }

        // Закрываем файлы
        fclose(fin);
        fclose(fout);

        // Заменяем оригинальный файл временным
        remove("E:\\ОАиП\\текстовые файлы\\laba23\\text1.txt");
        rename("E:\\ОАиП\\текстовые файлы\\laba23\\temp.txt", "E:\\ОАиП\\текстовые файлы\\laba23\\text1.txt");

        printf("ЛР23 Задача 3 FINISH\n");
    }
    void main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        ex1();
        ex2();
        ex3();
    }
    