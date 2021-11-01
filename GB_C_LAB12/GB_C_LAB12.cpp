// Без проверки на ошибки и модульности.
// Здесь вроде в библиотеки выносить нечего
// И как это делается я вроде в курсовом показал
// Маке там же

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdio.h>
#include <io.h>
int main(int argc, char* argv[])
{
    FILE* in, * out;
    int  n;
    char buf[512];
    in = fopen(argv[1], "rb");
    out = fopen(argv[2], "w");
    while ((n = read(fileno(in), buf, sizeof buf)) > 0)
    {
        write(fileno(out), buf, n);
    }
    return 0;
}