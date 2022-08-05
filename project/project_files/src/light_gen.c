// This file simulated our prototype light generator
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int light_generate(int);

// SIMULATION TO TEST LIGHT_GENERATOR
int main(void){
    int intensity = light_generate(intensity);
    printf("%d\n", intensity);
}


// generate a random value for the LED lights. 
// Our prototype is able to produce these values up to 65535 lux ()
int light_generate(int intensity){
    srand(time(NULL));
    return intensity = rand() % 65535 + 1;
}
