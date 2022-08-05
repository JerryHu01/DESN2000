// This file contains functions for the RF 433MHz Transmitter.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

void store_data(char *data_string, char data[SIZE][SIZE]);
void transfer_data(char databank[SIZE][SIZE], char data[SIZE][SIZE]);

// SIMULATION TO TEST WIRELESS TRANSMITTER
int main(void){
    char string[SIZE] = "world";
    char stored_data[SIZE][SIZE] = {"hello", "wonderful"};
    char send_data[SIZE][SIZE] = {};
    store_data(string, stored_data);
    transfer_data(send_data, stored_data);
    printf("%s\n", send_data[2]);
}

// Stores a reading, i.e. a single string, into data, an array of strings.
void store_data(char *data_string, char data[][SIZE]){
    int i = 0;
    // while loop to get to end of array
    while (data[i] != "\0"){
        i++;
        if (data[i] == NULL){
            // places the string at the end of the array
            strcpy(data[i], data_string);
        }
    }
}

// This function transfers data from the tracker to an empty databank.
// This ensures that the databank only has data up to when they call send_data.
// Then we are able to modify data without changes to databank.
void transfer_data(char databank[SIZE][SIZE], char data[SIZE][SIZE]){
    // for loop to store data[i] into databank[i] each loop.
    for(int i = 0;data[i] != "";i++){
        strcpy(databank[i], data[i]);   
    }
}

