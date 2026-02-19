#include <stdio.h>

#define SIZE 3

// Faces
enum {U, D, F, B, L, R};

// Cube structure
char cube[6][SIZE][SIZE];

// Initialize solved cube
void initCube() {
    char colors[6] = {'W', 'Y', 'G', 'B', 'O', 'R'};
    
    for(int f = 0; f < 6; f++) {
        for(int i = 0; i < SIZE; i++) {
            for(int j = 0; j < SIZE; j++) {
                cube[f][i][j] = colors[f];
            }
        }
    }
}

// Print cube (simple format)
void printCube() {
    for(int f = 0; f < 6; f++) {
        printf("Face %d:\n", f);
        for(int i = 0; i < SIZE; i++) {
            for(int j = 0; j < SIZE; j++) {
                printf("%c ", cube[f][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

// Rotate face clockwise
void rotateFaceClockwise(int face) {
    char temp[SIZE][SIZE];
    
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            temp[j][SIZE-1-i] = cube[face][i][j];

    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            cube[face][i][j] = temp[i][j];
}

// Example move: R (Right face clockwise)
void moveR() {
    rotateFaceClockwise(R);

    char temp[3];

    // Save U column
    for(int i = 0; i < 3; i++)
        temp[i] = cube[U][i][2];

    // U <- F
    for(int i = 0; i < 3; i++)
        cube[U][i][2] = cube[F][i][2];

    // F <- D
    for(int i = 0; i < 3; i++)
        cube[F][i][2] = cube[D][i][2];

    // D <- B (reversed)
    for(int i = 0; i < 3; i++)
        cube[D][i][2] = cube[B][2-i][0];

    // B <- temp (reversed)
    for(int i = 0; i < 3; i++)
        cube[B][2-i][0] = temp[i];
}

int main() {
    initCube();
    printf("Initial Cube:\n");
    printCube();

    printf("After R move:\n");
    moveR();
    printCube();

    return 0;
}
