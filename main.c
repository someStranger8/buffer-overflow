
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main() {
    char input[12];
    char password[12] = "password123";
    int ret;
    scanf("%s", input);
    ret = strcmp(input, password);
    if (ret == 0) {
        printf("SUCCESS\n");
    }
    else {
        printf("FAIL\n");
    }
    return 0;
}
