#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* hextobin(char *hex);
int counter(char* h1, char* h2);

int main()
{
    char h1[64];
    char h2[64];
    printf("Please Input 1st Hash: \n");
    scanf("%s", h1);
    printf("Please Input 2nd Hash: \n");
    scanf("%s", h2);
    counter(h1,h2);
}

char* hextobin(char *hex){
    char bin[256] = "";
    int i = 0;

    for(i=0; hex[i]!='\0'; i++)
    {
        switch(hex[i])
        {
            case '0':
            strcat(bin, "0000");
            break;
            case '1':
            strcat(bin, "0001");
            break;
            case '2':
            strcat(bin, "0010");
            break;
            case '3':
            strcat(bin, "0011");
            break;
            case '4':
            strcat(bin, "0100");
            break;
            case '5':
            strcat(bin, "0101");
            break;
            case '6':
            strcat(bin, "0110");
            break;
            case '7':
            strcat(bin, "0111");
            break;
            case '8':
            strcat(bin, "1000");
            break;
            case '9':
            strcat(bin, "1001");
            break;
            case 'a':
            case 'A':
            strcat(bin, "1010");
            break;
            case 'b':
            case 'B':
            strcat(bin, "1011");
            break;
            case 'c':
            case 'C':
            strcat(bin, "1100");
            break;
            case 'd':
            case 'D':
            strcat(bin, "1101");
            break;
            case 'e':
            case 'E':
            strcat(bin, "1110");
            break;
            case 'f':
            case 'F':
            strcat(bin, "1111");
            break;
            default:
            printf("Invalid hexadecimal input.");
        }
    }

    printf("Hexademial %s in binary is: \n", hex);
    printf("%s\n", bin);

    size_t size = strlen(bin) + 1;
    char *c = malloc(size);
    strcat(c,bin);

    return c;
}

int counter(char* h1, char* h2){
    int diff = 0;
    char* H1 = hextobin(h1);
    char* H2 = hextobin(h2);
    size_t size = strlen(H1) + 1;
    char *c = malloc(size);
    char *d = malloc(size);
    strcat(c,H1);
    strcat(d,H2);
    int i = 0;
    for (i=0; i <= strlen(c); i++){
        if (c[i] != d[i]) {
            diff = diff + 1;
        }
    }
    printf("Difference is : %u\n", diff);
}