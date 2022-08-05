The folder project_files contains our code implementation for our solutions. 
Our code implementation has the following files:

clock.c
    -This contains the function for our clock.
    -The main contains a simulated test.
    -The function 'clock_time' takes in a string, finds the current time, and records it into the string.

wless_transmit.c
    -This file contains the implementation of our wireless transmitter.
    -The main contains a simulated test.
    -The function 'store_data' stores a data string into an array of data strings.
    -The function 'transfer_data' takes the stored data and copies it into another array of data strings.
        -This avoids unncessary uploading of data when not needed, and only when needed.

light_gen.c
    -This file is the implementation of our light generator simulation.
    -The function light_generate generates a random value for light intensity for which our light sensor reads.

delay.c
    -A small implementation of a delay function.

Headers for all of the above.

main.c
    -This file utilises all the functions from across the project and is the file
    which our tracker centralises upon.
    -Is the main place where we can change values and acquire different results when needed.

Libraries for the LPC2478 microcontroller.

The lcd folder used for setting up and using the LCD screen.
