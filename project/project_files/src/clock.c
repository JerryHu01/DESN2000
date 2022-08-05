// This file records the current time of a reading.
#include <stdio.h>
#include <time.h>

#define SIZE 80

void clock_time();

// SIMULATION TO TEST AND PRINT TIME
int main () {
    char current_time[SIZE];
    clock_time(current_time);
    printf("%s\n", current_time);
}

// Records the current date and time into a given string.
void clock_time(char ctime[SIZE]){
   time_t t;
   struct tm *info;
   time(&t);
   info = localtime(&t);
   strftime(ctime, SIZE, "%x - %I:%M%p", info);
}