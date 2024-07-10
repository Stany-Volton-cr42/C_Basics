// // A game of guess the number in C language 
// // for this we need to generate the random numbrer
// #include <stdio.h>
// // we are importing these library for generationg the random number

// #include <stdlib.h>
// #include <time.h>
// int main(){
//     int number,Guess, nGuess = 1;
//     srand(time(0));
//     number  = rand()% 100 +1;
//     do
//     {
//         printf("Guess the number between 1 to 100: ");
//         scanf("%d",&Guess);
//         if (Guess >number)
//         {
//             printf("Lower number please\n");
//         }
//         else if (Guess<number)
//         {
//             printf("Greater number please\n");
//         }
//         else
//         {
//             printf("Yaa! you got the number in %d attampt ",nGuess);
//         }
//         nGuess++; 
//     } while (Guess!=number);

//         return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int number, guess, nGuess = 1;
//     srand(time(0));
//     number = rand() % 100 + 1;

//     do {
//         printf("Guess the number between 1 to 100: ");
//         scanf(" %d", &guess);
//         if (guess > number) {
//             printf("Lower number please\n");
//         } else if (guess < number) {
//             printf("Greater number please\n");
//         } else {
//             printf("Yay! You got the number in %d attempts\n", nGuess);
//         }
//         nGuess++;
//     } while (guess != number);

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int number, guess, nGuess = 1;
//     srand(time(0));
//     number = rand() % 100 + 1;

//     do {
//         printf("Guess the number between 1 to 100: ");
//         scanf(" %d", &guess);
//         if (guess > number) {
//             printf("Lower number please\n");
//         } else if (guess < number) {
//             printf("Greater number please\n");
//         } else {
//             printf("Yay! You got the number in %d attempts\n", nGuess);
//         }
//         nGuess++;
//     } while (guess != number);

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int number, guess, nGuess = 1;
//     srand(time(0));
//     number = rand() % 100 + 1;

//     do {
//         printf("Guess the number between 1 to 100: ");
//         scanf(" %d", &guess);

//         if (guess == number) {
//             printf("Yay! You got the number in %d attempts\n", nGuess);
//             break;
//         } else if (guess > number) {
//             printf("Lower number please\n");
//         } else {
//             printf("Greater number please\n");
//         }
//         nGuess++;
//     } while (1);

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, nGuess = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number between 1 to 100: ");
    scanf(" %d", &guess);

    while (guess != number) {
        if (guess > number) {
            printf("Lower number please\n");
        } else {
            printf("Greater number please\n");
        }
        nGuess++;
        printf("Guess the number between 1 to 100: ");
        scanf(" %d", &guess);
    }
    printf("Yay! You got the number in %d attempts\n", nGuess);

    return 0;
}
