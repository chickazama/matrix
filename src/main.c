#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[])
{
    int choice = 0;
    do
    {
        // Prompt user for input
        system("clear");
        printf("=== Choose ===\n");
        printf("\n[1] - Continue\n");
        printf("\n[2] - Exit\n");
        printf("\n> ");
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
                while (getchar() != '\n') ;
                break;
        }
    } while (!choice) ;
    return EXIT_SUCCESS;
}