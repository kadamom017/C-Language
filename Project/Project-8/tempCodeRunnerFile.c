#include<stdio.h>

int findStringLength(char *str)
{
    int length = 0;
    while (*str != "\0")
    {
        length++;