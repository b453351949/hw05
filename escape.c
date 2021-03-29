#include <stdio.h>
#include <string.h>

void escape(char s[], char t[]);

int main() {
    char s[50];
    char t[50] = "This is my answer\ttoo\nWhat\tabout\tyour\tanswer";
    escape(s, t);
    printf("%s\n", s);
}

void escape(char s[], char t[]) {
    int i, j;
    for (i = 0, j = 0; t[i] != '\0'; ++i, ++j) {
        switch(t[i]) {
            case '\t':
                s[j++] = '\\';
                s[j] = 't';
                break;
            case '\n':
                s[j++] = '\\';
                s[j] = 'n';
                break;
            default:
                s[j] = t[i];
                break;
        }
    }
    s[j] = '\0';
}
