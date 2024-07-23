#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int main(int argc, char *argv[])
{
if (argc!=2)
{
    printf("usage is ./recover filename");
    return 1;
}
    FILE *f = fopen(argv[1], "r");
    typedef uint8_t  BYTE;
    BYTE buffer[1000];
    int counter = -1;
    FILE *img = NULL;
    char *filename = malloc(800*sizeof(char));
    sprintf(filename, "%03i.jpg", counter);
    img = fopen(filename, "w");
    counter++;
    while (fread(buffer, sizeof(uint8_t), 512 , f) > 0)
    {
    if(buffer[0]==0xff && buffer[1]==0xd8 && buffer[2]==0xff && (buffer[3] & 0xf0) == 0xe0)
    {
        fclose(img);
        sprintf(filename, "%03i.jpg", counter);
        img = fopen(filename, "w");
        counter++;

    }
    if(img != NULL)
    {
    fwrite(buffer,sizeof(uint8_t),512,img);

    }
    }
fclose(img);
free(filename);
fclose(f);
remove("-01.jpg");
}