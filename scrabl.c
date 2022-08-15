#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);  /* Here is the function responsible for the punctuation it determines how many points the typed word is worth, we have to declare it before using it */

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Scoreskrkrpjp both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    // Print the winner
    if (score1 > score2)     /* If score1 is that score2 will appear "Player 1 winner" */
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2) /* If score1 is less than score2, player2 will be the winner */
    {
        printf("Player 2 wins!\n");
    }
    else /* If the score is the same, "Tie" will appear */
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
       //Keep track of score
       int score = 0;/* Integer called score equal to zero, this is a variable that will follow the score of the current word */
         /* I will represent the character index, */
         //Compute the score for each character, using strlen to access the length of the string by storing it inside a variable called len (We will repeat this lop as long as i is smaller than len, increasing i every time this loop completes an iteration)

       for (int i = 0, len = strlen(word); i < len; i++) /*  */
       {
           if (isupper(word[i]))
           {
               score += POINTS[word[i] - 'A'];
           }
           else if (islower(word[i]))
           {
               score += POINTS[word[i] - 'a'];
           }
       }
       return score;
}


/*
The isupper() function checks whether a character is an uppercase alphabet (A-Z) or not.
The islower() function checks whether a character is lowercase alphabet (az) or not.
Even though islower() takes integer as an argument, character is passed to the function. Internally, the character is converted to its ASCII value for the check.
Both isupper() and islower() are> by <ctype.h>


I'm Brazilian, and I had to translate some parts into English, if it's not very good I apologize

 */