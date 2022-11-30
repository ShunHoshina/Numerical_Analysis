/*======================================================================
Project Name    : <Numerical Analysis class report2>
File Name       : <scancode.c>
Encoding        : <utf-8>
Creation Date   : <2022/11/02>
 
Copyright © <2022> <Shun Hoshina>. All rights reserved.
 
This source code or any portion thereof must not be  
reproduced or used in any manner whatsoever.
======================================================================*/

#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <stdlib.h>
int main(void) {
	FILE *fp; // FILE型構造体
	char fname[] = "test.txt";
	int chr, i;
 
	fp = fopen(fname, "r"); // ファイルを開く。失敗するとNULLを返す。
	if(fp == NULL) {
		printf("%s file not open!\n", fname);
		return -1;
	}
	//for(i=0;i<10;i++){
		
	if(isalpha(fgetc(fp))==0){
		//fgetc(fp)=' ';
	//}
	}
	for(i=0;i<10;i++){
		printf("%c", fgetc(fp));
	
	}
	chr = fgetc(fp);
    
    ///printf("%c", fname[2]);
    //printf("%c", fname[3]);
    //printf("%c", fname[4]);

    //while((chr = fgetc(fp)) != EOF) {
	//	putchar(chr);
	//}
	fclose(fp); // ファイルを閉じる
 
	return 0;
}