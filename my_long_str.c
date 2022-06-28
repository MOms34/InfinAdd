#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "include/my.h"


char * my_argv_up(char *argv1, char *argv2)
{
    int a = my_strlen(argv1) - 1;
    int b = my_strlen(argv2) - 1;
    char unit;
    char *final = malloc(sizeof(char) * 10);
    int x = 0;
    int ret = 0;

    for (int i = 0; a >= 0 && b >= 0; i++){
        unit = argv1[a] + argv2[b] + ret - 48;
            if (unit <= '9') {
            final[x] = unit;
            ret = 0;
            }
            if (unit > '9') {
                final[x] = unit - 10;
                ret = 1;
            }
        a--;
        b--;
        x++;
    }
    if (ret == 1) {
        final[x] = '1';
    }
    return (final);
}

char *my_long_str(char* argv1, char* argv2)
{
    int a = my_strlen(argv1);
    int b = my_strlen(argv2);
    char *buff = NULL;
    if (a > b) {
        buff = malloc(sizeof(char) * (a +1));
        for (int i = 0; i < a - b; i++) {
            buff[i] = '0';
        }
        my_strcat(buff, argv2);
        return buff;
        b++;
        }
    if (b > a) {
        buff = malloc(sizeof(char) * (b +1));
        for (int i = 0; i < b - a; i++) {
            buff[i] = '0';
        }
        my_strcat(buff, argv1);
        return buff;
        a++;
        }
    else {
        buff = NULL;
    }
    return buff;
}
char* my_infin_add (char* argv1, char* argv2)
{
    int a = my_strlen(argv1);
    int b = my_strlen(argv2);
    char* buffer = my_long_str(argv1, argv2);
    char* result;

    if (a > b) {
        result = my_argv_up(argv1, buffer);
    }
    if (b > a) {
        result = my_argv_up(buffer, argv2);
    }
    if (a == b){
        result = my_argv_up(argv1, argv2);
    }
    my_putstr(my_revstr(result));
    return result;
}

int main (int argc, char **argv)
{
    //char argv1[] = "435439435845843984358439";
    //char argv2[] = "45359766785665822182412343254343435433339459569"
    if (argc == 3) {
        my_infin_add(argv[1], argv[2]);
    } else {
        //error
        return 0;
    }
    //my_long_str(argv1, argv2);
    //printf("%s", my_long_str(argv1, argv2));
    return 0;
}
