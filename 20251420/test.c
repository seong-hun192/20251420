#include <stdio.h>
#include <windows.h> // ���� ����� ���� �ʿ�

void SetColor(int text, int background) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (background << 4) | text);
}

int main() {
    // �ϴ� (�⺻ ���� ����)
    SetColor(15, 0);  // ��� ����, ���� ���
    printf("                    '                       '  (   )           '       \n");
    printf("                                                                       \n");
    printf("               /\\            /\\                                            \n");
    printf("              /  \\          /  \\                                           \n");

    // ����
    SetColor(12, 0);  // ������
    printf("             ______________________________________________________\n");
    printf("            /|     /|     /|     /|     /|     /|     /|     /|    \\\n");
    printf("           /_|____/_|____/_|____/_|____/_|____/_|____/_|____/_|_____\\\n");

    // ����
    SetColor(7, 0);  // ȸ��
    printf("                            ||\n");
    printf("                            ||\n");
    printf("                           (  )\n");
    printf("                            ()\n");
    printf("                           (  )\n");

    // ����
    SetColor(6, 0);  // �����
    printf("           |------------------------------------------------------|\n");
    printf("           ||     ||     ||     ||     ||     ||     ||     ||   |\n");

    // â��
    SetColor(9, 6);  // �Ķ� ����, ��� ���
    printf("           || [1] || [1] || [1] || [1] || [1] || [1] || [1] ||   |\n");

    // �ٴ� ��
    SetColor(2, 0);  // �ʷϻ�
    printf("           ======================================================\n");

    // �ٽ� ���� ��
    SetColor(15, 0);

    return 0;