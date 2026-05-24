#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Array of random fortunes
    char *fortunes[] = {
        "Signs point to yes. Go for it!",
        "The stars are blurry. Ask again later.",
        "404: Fortune not found. Try tomorrow.",
        "An unexpected pizza is in your near future.",
        "Outlook not so good. Proceed with caution.",
        "Your code will compile on the first try today.",
        "Absolutely. 100%. No doubt.",
        "Don't quit your day job just yet."
    };

    // Calculate the total number of fortunes available
    int total_fortunes = sizeof(fortunes) / sizeof(fortunes[0]);

    // Seed the random number generator using the current time
    srand(time(NULL));

    printf("--- The Digital Fortune Teller ---\n");
    printf("Thinking deeply about your future...\n");
    printf("Press [Enter] to reveal your destiny...");
    getchar(); // Waits for the user to press Enter

    // Generate a random index between 0 and (total_fortunes - 1)
    int randomIndex = rand() % total_fortunes;

    // Output the random fortune
    printf("\n🔮 Fortune: %s\n", fortunes[randomIndex]);
    printf("----------------------------------\n");

    return 0;
}
