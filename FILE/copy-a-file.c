#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *source, *destination;
    char ch;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s source destination\n", argv[0]);
        return 1;
    }

    source = fopen(argv[1], "r");
    if (!source)
    {
        fprintf(stderr, "Error opening source file: %s\n", argv[1]);
        return 1;
    }

    destination = fopen(argv[2], "w");
    if (!destination)
    {
        fprintf(stderr, "Error opening destination file: %s\n", argv[2]);
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }
    fclose(source);
    fclose(destination);
    printf("File copied successfully from %s to %s.\n", argv[1], argv[2]);

    return 0;
}