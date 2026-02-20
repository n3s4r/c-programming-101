#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Food {
    char name[50];
    int calories;
};

struct Food foodList[MAX];
int count = 0;
int calorieGoal = 2000;

/* Function Prototypes */
void addFood();
void viewFoods();
int totalCalories();
void setGoal();
void saveToFile();
void loadFromFile();

int main() {
    int choice;

    loadFromFile();

    while (1) {
        printf("\n====== FITNESS CALORIE TRACKER ======\n");
        printf("1. Add Food\n");
        printf("2. View All Foods\n");
        printf("3. View Total Calories\n");
        printf("4. Set Calorie Goal\n");
        printf("5. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addFood();
                break;
            case 2:
                viewFoods();
                break;
            case 3:
                printf("\nTotal Calories Today: %d kcal\n", totalCalories());
                printf("Goal: %d kcal\n", calorieGoal);
                printf("Remaining: %d kcal\n", calorieGoal - totalCalories());
                break;
            case 4:
                setGoal();
                break;
            case 5:
                saveToFile();
                printf("Data Saved. Stay Fit 💪\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

/* Add Food */
void addFood() {
    if (count >= MAX) {
        printf("Food list is full!\n");
        return;
    }

    printf("Enter food name: ");
    scanf(" %[^\n]", foodList[count].name);

    printf("Enter calories: ");
    scanf("%d", &foodList[count].calories);

    count++;
    printf("Food added successfully!\n");
}

/* View All Foods */
void viewFoods() {
    if (count == 0) {
        printf("No food entries yet.\n");
        return;
    }

    printf("\n---- Food List ----\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %d kcal\n", i + 1,
               foodList[i].name,
               foodList[i].calories);
    }
}

/* Calculate Total Calories */
int totalCalories() {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += foodList[i].calories;
    }
    return sum;
}

/* Set Calorie Goal */
void setGoal() {
    printf("Enter your daily calorie goal: ");
    scanf("%d", &calorieGoal);
    printf("Goal updated!\n");
}

/* Save to File */
void saveToFile() {
    FILE *fp = fopen("calories.txt", "w");
    if (fp == NULL) {
        printf("Error saving file!\n");
        return;
    }

    fprintf(fp, "%d\n", calorieGoal);
    fprintf(fp, "%d\n", count);

    for (int i = 0; i < count; i++) {
        fprintf(fp, "%s %d\n",
                foodList[i].name,
                foodList[i].calories);
    }

    fclose(fp);
}

/* Load from File */
void loadFromFile() {
    FILE *fp = fopen("calories.txt", "r");
    if (fp == NULL)
        return;

    fscanf(fp, "%d", &calorieGoal);
    fscanf(fp, "%d", &count);

    for (int i = 0; i < count; i++) {
        fscanf(fp, " %[^\n] %d",
               foodList[i].name,
               &foodList[i].calories);
    }

    fclose(fp);
}
