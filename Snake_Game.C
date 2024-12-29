#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

// <----------------------------------- FUNCTION DECLARATIONS ------------------------------------------>

void animation();
void countdown_animation();
void display_game_message(char message[]);



// <----------------------------------- MAIN FUNCTION ------------------------------------------>


int main() {
    animation();
    printf("\n\n");
    display_game_message("Snake Game is Starting...");
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


