#include <stdio.h>
#include <string.h>

void reverseString(char* str)
{
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void reverseLines(FILE* file)
{
    char line[1024];

    while (fgets(line, sizeof(line), file))
    {
        reverseString(line);
        printf("%s", line);
    }
    //fgets function

}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s [filename]\n", argv[0]);
        return 1;
    }

    FILE* file = fopen(argv[1], "r");
    if (!file)
    {
        printf("Failed to open file: %s\n", argv[1]);
        return 1;
    }

    reverseLines(file);

    fclose(file);

    return 0;
}
