#ifndef _WLESS_TRANSMIT_H_
#define _WLESS_TRANSMIT_H_
#define SIZE 100

void store_data(char *data_string, char data[][SIZE]);
void transfer_data(char databank[SIZE][SIZE], char data[SIZE][SIZE]);

#endif