#include "pch.h"
#include <windows.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

extern "C" __declspec(dllexport) int Parsing(char* path) {

    char tmp[30];
    char buf[1024];
    FILE* fp;

    fp = fopen(path, "rb");
    if (fp == NULL) {
        printf("CAN NOT LOAD FILE!\n");
        return 1;
    }

    fgets(buf, 1024, fp);
    fclose(fp);
    strcpy(tmp, buf);
    printf("%s\n", tmp);

    return 0;
}