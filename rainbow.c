// #include <stdio.h>

// int main() {
//     // Rainbow arc using ASCII characters with colors
//     printf("\033[31m        *********        \033[0m\n"); // Red
//     printf("\033[33m      *************      \033[0m\n"); // Orange
//     printf("\033[32m    *****************    \033[0m\n"); // Green
//     printf("\033[34m   *******************   \033[0m\n"); // Blue
//     printf("\033[35m  *********************  \033[0m\n"); // Indigo
//     printf("\033[36m *********************** \033[0m\n"); // Violet
//     printf("\033[37m~~~~~~~~~~~~~~~~~~~~~~~~~\033[0m\n"); // Ground (white)

//     return 0;
// }



// #include <stdio.h>
// #include <math.h>
// #include <unistd.h>   // for sleep()

// #define WIDTH 80
// #define HEIGHT 25

// // ANSI color codes for rainbow bands
// char *colors[] = {
//     "\033[31m", // Red
//     "\033[33m", // Orange/Yellow
//     "\033[32m", // Green
//     "\033[34m", // Blue
//     "\033[35m", // Indigo
//     "\033[36m"  // Violet
// };

// int main() {
//     for (int y = HEIGHT; y >= 0; y--) {
//         for (int x = 0; x < WIDTH; x++) {
//             // Use sine function to create arc
//             double value = sin((double)x / 10.0);

//             // Map sine value to rainbow bands
//             int band = (int)((value + 1.0) * 3); // range 0–6
//             if (band >= 0 && band < 6 && y == (int)(HEIGHT/2 + value*10)) {
//                 printf("%s*\033[0m", colors[band]);
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//         usleep(100000); // delay 0.1s for slow motion effect
//     }
//     return 0;
// }

#include <stdio.h>
#include <math.h>
#include <unistd.h>   // for usleep()

#define WIDTH 80
#define HEIGHT 25

// Rainbow colors (ANSI escape codes)
char *colors[] = {
    "\033[31m", // Red
    "\033[33m", // Orange/Yellow
    "\033[32m", // Green
    "\033[34m", // Blue
    "\033[35m", // Indigo
    "\033[36m"  // Violet
};

int main() {
    int centerX = WIDTH / 2;
    int centerY = HEIGHT;   // bottom center
    int bandThickness = 2;  // thickness of each rainbow band

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            // Distance from center
            double dx = x - centerX;
            double dy = y - centerY;
            double dist = sqrt(dx*dx + dy*dy);

            // Only draw upper half (arc)
            if (y < centerY) {
                // Determine which band this point belongs to
                for (int b = 0; b < 6; b++) {
                    double inner = 20 + b * bandThickness;
                    double outer = inner + bandThickness;
                    if (dist >= inner && dist < outer) {
                        printf("%s*\033[0m", colors[b]);
                        goto drawn;
                    }
                }
            }
            printf(" "); // background
            drawn: ;
        }
        printf("\n");
        usleep(100000); // slow motion: 0.1s delay per line
    }
    return 0;
}

