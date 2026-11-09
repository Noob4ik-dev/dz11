#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 3 

typedef struct {
    char name[30];
    float frequency;
    int ram;
    int has_dvd; 
    float price;
} Computer;

int main() {

    setlocale(LC_ALL, "RU");
    Computer comps[N];
    int count = 0;

    for (int i = 0; i < N; i++) {
        printf("\nВведите данные для компьютера %d:\n", i + 1);
        printf("Название: ");
        scanf("%s", comps[i].name);
        printf("Частота процессора (ГГц): ");
        scanf("%f", &comps[i].frequency);
        printf("Объем ОЗУ (Гбайт): ");
        scanf("%d", &comps[i].ram);
        printf("Наличие DVD-ROM (1 - да, 0 - нет): ");
        scanf("%d", &comps[i].has_dvd);
        printf("Стоимость: ");
        scanf("%f", &comps[i].price);
    }

    printf("\n=== Компьютеры с объемом ОЗУ больше 10 Гбайт ===\n");
    for (int i = 0; i < N; i++) {
        if (comps[i].ram > 10) {
            printf("Название: %s | Частота: %.2f ГГц | ОЗУ: %d Гбайт | DVD: %s | Цена: %.2f\n",
                comps[i].name, comps[i].frequency, comps[i].ram,
                comps[i].has_dvd ? "Есть" : "Нет", comps[i].price);
            count++;
        }
    }

    if (count == 0) {
        printf("Нет компьютеров, удовлетворяющих условию.\n");
    }
    else {
        printf("\nВсего найдено: %d\n", count);
    }

    system("pause");
    return 0;
}