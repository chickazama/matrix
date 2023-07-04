#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    printf("Arguments:\n");
    for (int i = 0; i < argc; i++)
    {
        printf("\n[%d]: %s\n", i, argv[i]);
    }
    printf("\nPress enter to begin. ");
    fflush(stdout);
    while (getchar() != '\n') ;
    int choice = 0;
    do
    {
        // Prompt user for input
        system("clear");
        printf("=== Choose ===\n");
        printf("\n[1] - Continue\n");
        printf("\n[2] - Exit\n");
        printf("\n> ");
        fflush(stdout);
        // Allocate memory for storage of input
        char* buf = malloc(sizeof(char) * BUFSIZ);
        if (buf == NULL)
        {
            // Log error and exit with failure status code
            perror("malloc");
            return EXIT_FAILURE;
        }
        // Capture input
        if (fgets(buf, BUFSIZ, stdin) == NULL)
        {
            // Log error and exit with failure status code
            perror("fgets");
            return EXIT_FAILURE;
        }
        // Convert input to integer
        int selection = atoi(buf);
        // Free memory
        free(buf);
        // Process input
        switch (selection)
        {
            case 1:
                break;
            case 2:
                choice = 1;
                break;
            default:
                printf("Invalid Selection. Press enter to try again. ");
                fflush(stdout);
                while (getchar() != '\n') ;
                break;
        }
    } while (!choice) ;
    return EXIT_SUCCESS;
}