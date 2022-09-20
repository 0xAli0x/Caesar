#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

//int main(void)
//{
// Program should only take a digit as an active input
// Program should tell the user how to enter the key when its wrong
// Get active key
// Prompt user for a plaintext to convert
// Apply Ciphering to the text
// Print ciphertext
//}


int main(int argc, string argv[])
{
    // If the user's input is different than 2:
    if (argc != 2)

    {
        // Program will print the following instructions.
        printf("Usage: ./caesar key\n");
        return 1;
    }

// Checking if the input is a digit.
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // If the user's input is not a positive integer.
        if (!isdigit(argv[1][i]))
        {
            // Program will print the following instructions.
            printf("Usage: ./caesar key\n");
            return 1;
        }

    }
    // Converting string into integer.
    int k = atoi(argv[1]);

    // Prompting user for text to convert.
    string plaintext = get_string("plaintext: ");

    // Print the converted input.
    printf("ciphertext: ");

    // Checking the text to convert.
    for (int h = 0; h < strlen(plaintext); h++)
    {
        // Maintaining uppercase letters.
        if (isupper(plaintext[h]))

        {
            // Making sure to set the alphabet as a boundary.
            printf("%c", (plaintext[h] - 65 + k) % 26 + 65);

        }
        // Maintaining lowercase letters.
        else if (islower(plaintext[h]))

        {
            // Making sure to set the alphabet as a boundary.
            printf("%c", (plaintext[h] - 97 + k) % 26 + 97);
        }

        else
        {
            printf("%c", plaintext[h]);
        }
    }
    {
        printf("\n");
    }

}


