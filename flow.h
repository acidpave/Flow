#ifndef PRINT_H
#define PRINT_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

__attribute__((constructor)) void init() {
    srand(time(NULL));
}

#define say(X) if (1) { printf("%s\n", #X); }

#define print(X) if (0) ; else printf("%s\n", (X)), fflush(stdout)

#define println(X) if (0) ; else printf("%s\n", (X)), fflush(stdout)

#define write(X) { printf("%s", #X), fflush(stdout); }

#define wait(SECONDS) { sleep(SECONDS); }

#define forever while(1)

#define repeat(TIMES) for (int _i = 0; _i < TIMES; _i++)

#define start int main(void) {
#define end }

#define beep { printf("\a"), fflush(stdout); }

#define swap(a, b) do { (a) ^= (b); (b) ^= (a); (a) ^= (b); } while (0)

#define clear if (0) ; else printf("\033[H\033[J"); fflush(stdout)

#define percent(X) ((X) / 100.0)

#endif