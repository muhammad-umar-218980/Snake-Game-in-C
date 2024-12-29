#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

// <----------------------------------- FUNCTION DECLARATIONS ------------------------------------------>

void animation();
void countdown_animation();
void display_game_message(char message[]);
void initialize_game();



// <----------------------------------- MAIN FUNCTION ------------------------------------------>


int main() {
    animation();
    printf("\n\n");
    display_game_message("Snake Game is Starting...");
    initialize_game();
    return 0;
}

// <----------------------------------- ANIMATION FUNCTION ------------------------------------------>

void animation() {
    char welcome_text[] = " WELCOME TO THE SNAKE GAME !!";
    int text_length = strlen(welcome_text);

    printf("          ");
    for (int i = 0; i < text_length + 30; i++) {
        printf("-");
    }
    printf("\n\n");

    printf("\t\t\t");
    for (int i = 0; welcome_text[i] != '\0'; i++) {
        printf("%c", welcome_text[i]);
        Sleep(100);
    }

    printf("\n\n");

    printf("          ");
    for (int i = 0; i < text_length + 30; i++) {
        printf("-");
    }
    printf("\n");

    countdown_animation();
}

// <----------------------------------- COUNTDOWN ANIMATION FUNCTION ------------------------------------------>

void countdown_animation() {
    printf("\n\nStarting the game in...\n");
    for (int i = 3; i > 0; i--) {
        printf("\t\t\t%d\n", i);
        Sleep(1000); 
    }
    printf("\t\t\tGo!\n");
    Sleep(500);
}


// <----------------------------------- DISPLAY GAME MESSAGE FUNCTION ------------------------------------------>

void display_game_message(char message[]) {
    printf("\n\t\t%s\n", message);
    Sleep(2000); 
}


// <----------------------------------- INITIALIZE GAME FUNCTION ------------------------------------------>
void initialize_game() {
    srand(time(NULL));


    int snake_length = 3;
    int snake_x[100] = {rand() % 20, rand() % 20, rand() % 20}; // Random X coordinates for the snake
    int snake_y[100] = {rand() % 10, rand() % 10, rand() % 10}; // Random Y coordinates for the snake
    

    int direction = rand() % 4; // Random initial direction (0-3)
    

    int food_x = rand() % 20;  // Random X coordinate for food
    int food_y = rand() % 10;  // Random Y coordinate for food 
    

    int score = 0;


    printf("\nGame initialized with:\n");
    printf("  Snake Length: %d\n", snake_length);
    printf("  Snake Position: (%d, %d), (%d, %d), (%d, %d)\n", snake_x[0], snake_y[0], snake_x[1], snake_y[1], snake_x[2], snake_y[2]);
    printf("  Snake Direction: %d\n", direction);
    printf("  Food Position: (%d, %d)\n", food_x, food_y);
    printf("  Initial Score: %d\n", score);

    Sleep(2000); 
}