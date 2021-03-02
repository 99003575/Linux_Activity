#include "mystring.h"
int mystrlen(const char *str){
    return strlen(str);
}
char* mystrcpy(char* destination, const char* source){
    return strcpy(destination,source);
}
char* mystrcat(char *destination, const char *source){
    return strcat(destination,source);
}
int mystrcmp(const char *str1, const char *str2){
    return strcmp(str1,str2);
}
