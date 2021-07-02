//coad for tic tc toe game
#include <stdio.h>
#include <stdlib.h>

char box[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;
void display();
void mark_box(char mark);
int game_status();

int main()
{
    char mark;
    player = 1;
    int gamestatus;
    do
    {
        display();
        player = (player % 2) ? 1 : 2;
        printf("Input your number player %d ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'x' : '0';
        mark_box(mark);
        gamestatus = game_status();
        player++;
    } while (gamestatus == -1);

    if (gamestatus == 1)
    {
        printf("\n\nplayer %d is the winner", --player);
    }
    else if (gamestatus == 0)
    {
        printf("\n\nmatch is tied");
    }
    return 0;
}

void display()
{
    system("cls");
    printf("\n\n\t\tTIC TAC TOE GAME\n\n");
    printf("\t Player 1(x)---Player 2(o)\n\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c  \n", box[1], box[2], box[3]);
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c  \n", box[4], box[5], box[6]);
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c  \n", box[7], box[8], box[9]);
    printf("\t\t_____|_____|_____\n\n");
}

void mark_box(char mark)
{
    if (choice == 1 && box[1] == '1')
    {
        box[1] = mark;
    }
    else if (choice == 2 && box[2] == '2')
    {
        box[2] = mark;
    }
    else if (choice == 3 && box[3] == '3')
    {
        box[3] = mark;
    }
    else if (choice == 4 && box[4] == '4')
    {
        box[4] = mark;
    }
    else if (choice == 5 && box[5] == '5')
    {
        box[5] = mark;
    }
    else if (choice == 6 && box[6] == '6')
    {
        box[6] = mark;
    }
    else if (choice == 7 && box[7] == '7')
    {
        box[7] = mark;
    }
    else if (choice == 8 && box[8] == '8')
    {
        box[8] = mark;
    }
    else if (choice == 9 && box[9] == '9')
    {
        box[9] = mark;
    }
}

int game_status()
{
    int return_value = 0;
    if (box[1] == box[2] && box[2] == box[3])
        return_value = 1;
    else if (box[4] == box[5] && box[5] == box[6])
        return_value = 1;
    else if (box[7] == box[8] && box[8] == box[9])
        return_value = 1;
    else if (box[1] == box[4] && box[4] == box[7])
        return_value = 1;
    else if (box[2] == box[5] && box[5] == box[8])
        return_value = 1;
    else if (box[3] == box[6] && box[6] == box[9])
        return_value = 1;
    else if (box[1] == box[5] && box[5] == box[9])
        return_value = 1;
    else if (box[3] == box[5] && box[5] == box[7])
        return_value = 1;
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9')
        return_value = 0;
    else
    {
        return_value = -1;
    }
    return return_value;
}