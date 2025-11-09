//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main()
{
    FILE *fs, *fd;
    char src[50], dest[50];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", src);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    fs = fopen(src, "r");
    if (fs == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    fd = fopen(dest, "w");
    if (fd == NULL)
    {
        printf("Error opening destination file.\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, fd);
    }

    printf("File copied successfully.\n");

    fclose(fs);
    fclose(fd);

    return 0;
}
