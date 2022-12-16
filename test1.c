#include <stdio.h>

#define MAX_LINE 512
#define CHR_NUM 256

void countAllChr(unsigned int count[], char *str) {

    for (unsigned int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }
}

int main(int argc, char *argv[]) {
    
    FILE *stream;
    char str[MAX_LINE];
    unsigned int count[CHR_NUM];

    if (argc != 2) {
        printf("コマンドライン引数を１つ指定してください\n");
        printf("プログラム名 <ファイルパス>\n");
        printf("例：./main.exe test.txt\n");
        return 0;
    }
    
    stream = fopen(argv[1], "r");
    if (stream == NULL) {
        printf("%sが開けません\n", argv[1]);
        return 0;
    }

    for (unsigned int i = 0; i < CHR_NUM; i++) {
        count[i] = 0;
    }

    while (fgets(str, MAX_LINE, stream) != NULL) {
        countAllChr(count, str);
    }

    printf("in [%s]\n", argv[1]);
    for (unsigned int i = 0; i < CHR_NUM; i++) {
        printf("%c : %u\n", i, count[i]);
    }

    fclose(stream);

    return 0;
}