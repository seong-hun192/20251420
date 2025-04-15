#include <stdio.h>
#include <windows.h> // 색상 출력을 위해 필요

void SetColor(int text, int background) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (background << 4) | text);
}

int main() {
    // 하늘 (기본 검정 바탕)
    SetColor(15, 0);  // 흰색 글자, 검정 배경
    printf("                    '                       '  (   )           '       \n");
    printf("                                                                       \n");
    printf("               /\\            /\\                                            \n");
    printf("              /  \\          /  \\                                           \n");

    // 지붕
    SetColor(12, 0);  // 빨간색
    printf("             ______________________________________________________\n");
    printf("            /|     /|     /|     /|     /|     /|     /|     /|    \\\n");
    printf("           /_|____/_|____/_|____/_|____/_|____/_|____/_|____/_|_____\\\n");

    // 굴뚝
    SetColor(7, 0);  // 회색
    printf("                            ||\n");
    printf("                            ||\n");
    printf("                           (  )\n");
    printf("                            ()\n");
    printf("                           (  )\n");

    // 벽면
    SetColor(6, 0);  // 노란색
    printf("           |------------------------------------------------------|\n");
    printf("           ||     ||     ||     ||     ||     ||     ||     ||   |\n");

    // 창문
    SetColor(9, 6);  // 파란 글자, 노란 배경
    printf("           || [1] || [1] || [1] || [1] || [1] || [1] || [1] ||   |\n");

    // 바닥 선
    SetColor(2, 0);  // 초록색
    printf("           ======================================================\n");

    // 다시 원래 색
    SetColor(15, 0);

    return 0;