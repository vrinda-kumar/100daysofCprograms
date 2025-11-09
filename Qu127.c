//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fs, *fd;
    char ch;

    fs = fopen("input.txt", "r");
    if (fs == NULL)
    {
        printf("Error opening input file.\n");
        return 1;
    }

    fd = fopen("output.txt", "w");
    if (fd == NULL)
    {
        printf("Error opening output file.\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
    {
        if (islower(ch))
            ch = toupper(ch);
        fputc(ch, fd);
    }

    printf("File converted to uppercase and saved as output.txt\n");

    fclose(fs);
    fclose(fd);

    return 0;
}
