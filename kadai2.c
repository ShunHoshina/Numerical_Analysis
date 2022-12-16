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
	char fname[] = "code.txt";
	int  i;
    char chr[300000];
	int count1[200]={};
 
	fp = fopen(fname, "r"); // ファイルを開く。失敗するとNULLを返す。
	if(fp == NULL) {
		printf("%s file not open!\n", fname);
		return -1;
	}
	
		
	/*if(isalpha(fgetc(fp))==0){
	
	}*/
    
	for(i=0;i<300000;i++){  //配列に置換
        fscanf(fp, "%c", &chr[i]);
	
	}
    
    /*for(i=0;i<1000;i++){  //print
		printf("%c", chr[i]);
	}*/
    printf("\n");
	for(i=0;i<300000;i++){  //判別
        if(isalpha(chr[i])==0){
            chr[i]=' ';
	    }
	
	}

    for(i=0;i<300000;i++){  //count
		count1[chr[i]]++;
	    }
	for(i=40;i<123;i++){  //count
		printf("i=%d,%d\n ", i, count1[i]);
	    }
	for(i=40;i<123;i++){  //count
		printf("%d ",count1[i]);
	    }
	/*for(i=0;i<1000;i++){  //count
		printf("%c", chr[i]);
	    }*/
	printf("\n");
    
    
	fclose(fp); // ファイルを閉じる

	FILE *outputfile;         // 出力ストリーム
  
  outputfile = fopen("d.txt", "w");  // ファイルを書き込み用にオープン(開く)
  if (outputfile == NULL) {          // オープンに失敗した場合
    printf("cannot open\n");         // エラーメッセージを出して
    exit(1);                         // 異常終了
  }
  
  fprintf(outputfile, "%ls\n", count1); // ファイルに書く

  fclose(outputfile);          // ファイルをクローズ(閉じる)
 
	return 0;
}