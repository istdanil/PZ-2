#include <stdio.h>
#include <Windows.h>

// ���
int findnod(int a, int b) {
    if (b == 0)
        return a;
    else
        return findnod(b, a % b);
}

// ���
int findnok(int a, int b) {
    return (a * b) / findnod(a, b);
}

void main() {
 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int numbers[20];
    int count;

    printf("������ ������� �����: ");
    scanf_s("%d", &count);

    if (count < 2 || count > 20) {
        printf("�� 2 �� 20.\n");
        return 0;
    }

    printf("������ %d �����: ", count);
    for (int i = 0; i < count; i++) {
        scanf_s("%d", &numbers[i]);
    }

    
    int min_crat = numbers[0];
    for (int i = 1; i < count; i++) {
        min_crat = findnok(min_crat, numbers[i]);
    }

    printf("��������� ������: %d\n", min_crat);

    
}
