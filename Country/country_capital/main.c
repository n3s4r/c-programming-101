#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Define maximum lengths for strings and the size of the database
#define MAX_COUNTRY_LEN 50
#define MAX_CAPITAL_LEN 50
#define DATABASE_SIZE 8

// Structure to hold country and capital data
struct CountryCapital {
    char country[MAX_COUNTRY_LEN];
    char capital[MAX_CAPITAL_LEN];
};

// Internal database of countries and their capitals (stored in lowercase for easy comparison)
const struct CountryCapital database[DATABASE_SIZE] = {
    {"united states", "Washington, D.C."},
    {"canada", "Ottawa"},
    {"united kingdom", "London"},
    {"france", "Paris"},
    {"germany", "Berlin"},
    {"japan", "Tokyo"},
    {"australia", "Canberra"},
    {"brazil", "Brasília"}
};

/**
 * @brief Converts a string to lowercase in place.
 * * @param str The string to convert.
 */
void str_to_lower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

/**
 * @brief Main function to run the Country Capital Finder program.
 */
int main() {
    // Variable to store user input
    char user_input[MAX_COUNTRY_LEN];
    // Variable to store the lowercase version of user input for searching
    char search_key[MAX_COUNTRY_LEN];
    int found = 0; // Flag to indicate if a match was found

    printf("--- Country Capital Finder ---\n");
    printf("Enter the name of a country (e.g., France, Japan, USA):\n> ");

    // Read input from the user. fgets is safer than scanf.
    if (fgets(user_input, sizeof(user_input), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // 1. Clean the input: Remove the newline character added by fgets
    // strcspn finds the length of the initial segment of user_input
    // which consists entirely of characters NOT in "\n".
    user_input[strcspn(user_input, "\n")] = 0;

    // 2. Prepare the search key: Copy the input and convert it to lowercase
    strncpy(search_key, user_input, MAX_COUNTRY_LEN - 1);
    search_key[MAX_COUNTRY_LEN - 1] = '\0'; // Ensure null termination
    str_to_lower(search_key);

    // 3. Search the database
    for (int i = 0; i < DATABASE_SIZE; i++) {
        // Since the database country names are already lowercase, we compare directly.
        if (strcmp(search_key, database[i].country) == 0) {
            // Match found! Print the capital (which retains its proper casing).
            printf("\n");
            printf("-----------------------------------------\n");
            printf("The capital of %s is: %s\n", user_input, database[i].capital);
            printf("-----------------------------------------\n");
            found = 1;
            break; // Exit the loop once the capital is found
        }
    }

    // 4. Handle case where the country was not found
    if (!found) {
        printf("\nSorry, '%s' was not found in our current database.\n", user_input);
        printf("Please try another country or expand the database!\n");
    }

    return 0;
}
