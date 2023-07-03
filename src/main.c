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
        // Capture input
        char buf[BUFSIZ];
        if (fgets(buf, BUFSIZ, stdin) == NULL)
        {
            perror("fgets");
            return EXIT_FAILURE;
        }
        int selection = atoi(buf);
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