// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44; /* Number of bytes in the header of a WAV file */

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);
    //The first thing to do is declare your header
    // TODO: Copy header from input file to output file
    uint8_t header[HEADER_SIZE]; // Here is the declaration of an array called "header" its type and uint_t a type for 8-bit integers that represents only bytes. And we want bytes of the size of the header remembering that the header is a constant integer equal to 44.
    fread(header, HEADER_SIZE, 1, input); /* Here we are reading the header bytes from the input file and after reading the memory, we can write this same data to the output file by calling the fwrite function */
    fwrite(header, HEADER_SIZE, 1, output); /* then writing the header content to the output file */
   /* These lines above will have the effect of reading 44 into the first 44 bytes of the output file */
    // TODO: Read samples from input file and write updated data to output file
    int16_t buffer; /*This buffer doesn't need 44, it only needs data data for a data sample. And for that we use the int16_t type for the type that stores a 16-bit integer. */
    while (fread(&buffer, sizeof(int16_t), 1, input))
    {
        /* code */ /* Read a 16-bit sample, that is, two bytes. And as this is the effect that it will have and can repeatedly read one sample after another, we get to the end of the file, fread us who was able to read successfully and as soon as there is no more data from the file fread will return 0. And at that point "Whille" treats this as false and we'll exit the loop */
        buffer *= factor; /* After reading the sample into memory as this variable "buffer", now we need to update the buffer by multiplying it by "factor." if the factor is 2 this has the effect of doubling the volume, and if the factor is less than 1 it has the effect of decreasing the volume, so the factor can be another floating point number */
        fwrite(&buffer, sizeof(int16_t), 1, output); /* Once we change the sample value, we just need to write the updated data to the output file, using fwrite to do this by writing the buffer data to the output file. It doesn't matter how big an int16_t is, which in this case will be 2 bytes. */
    }

    // Close files
    fclose(input);
    fclose(output);
}
/*
We could have written in the header 44 bytes, but it is bet ter to put HEADER_SIZE which is projected to a constant number only instead of reusing or repeatedly saying the size of the header.
We will write bytes the size of the header
For each of the two-byte samples, we want to read that sample into memory, modify it to fit its volume, and then write it to the updated file.
int16_t buffer
We use the fread function to read the input file into the buffer, passing the buffer address. So that fread knows where he's putting the memory he's reading.

Excuse me, if the commented lines are not very understandable, and that I am Brazilian and my English is not very good
   */