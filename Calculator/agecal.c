#include <stdio.h>
#include <time.h>

// A structure to store date components
struct Date {
    int day;
    int month;
    int year;
};

// Function to calculate age
void calculateAge(struct Date birthDate, struct Date currentDate) {
    int years, months, days;

    // --- Year Calculation ---
    years = currentDate.year - birthDate.year;

    // --- Month Calculation ---
    if (currentDate.month < birthDate.month) {
        years--; // Decrement year if current month is before birth month
        months = 12 - (birthDate.month - currentDate.month);
    } else {
        months = currentDate.month - birthDate.month;
    }

    // --- Day Calculation ---
    if (currentDate.day < birthDate.day) {
        months--; // Decrement month if current day is before birth day
        // To get the number of days, we add the days of the current month.
        // A simple approach is to assume 30 days for simplicity,
        // a more complex one would check the specific month.
        days = 30 - (birthDate.day - currentDate.day);

        if (months < 0) {
            months = 11;
            years--;
        }
    } else {
        days = currentDate.day - birthDate.day;
    }

    printf("\nYour age is:\n");
    printf("%d Years, %d Months, and %d Days\n", years, months, days);
}

int main() {
    struct Date birthDate;

    // Set the current date manually
    struct Date currentDate = {14, 10, 2025};

    printf("--- Age Calculator ---\n");
    printf("Current Date: %d/%d/%d\n\n", currentDate.day, currentDate.month, currentDate.year);

    // Get user's date of birth
    printf("Enter your Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &birthDate.day, &birthDate.month, &birthDate.year);

    // Validate the entered date (basic validation)
    if (birthDate.year > currentDate.year ||
        (birthDate.year == currentDate.year && birthDate.month > currentDate.month) ||
        (birthDate.year == currentDate.year && birthDate.month == currentDate.month && birthDate.day > currentDate.day)) {
        printf("\nInvalid Birth Date: The date entered is in the future.\n");
        return 1; // Exit with an error
    }

    if (birthDate.day > 31 || birthDate.month > 12 || birthDate.day < 1 || birthDate.month < 1 || birthDate.year < 1) {
       printf("\nInvalid Date: Please enter a valid day, month, and year.\n");
       return 1; // Exit with an error
    }


    // Call the function to calculate and print the age
    calculateAge(birthDate, currentDate);

    return 0;
}
