#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;
    current_time = time(NULL); // Get the current time in seconds

    if (current_time == -1) {
        printf("Unable to retrieve the current time.\n");
        return 1;
    }

    printf("Current time in seconds since epoch: %ld\n", current_time);

    return 0;
}
