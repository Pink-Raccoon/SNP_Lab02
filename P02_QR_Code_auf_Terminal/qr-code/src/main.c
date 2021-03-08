/* ----------------------------------------------------------------------------
 * --  _____       ______  _____                                              -
 * -- |_   _|     |  ____|/ ____|                                             -
 * --   | |  _ __ | |__  | (___    Institute of Embedded Systems              -
 * --   | | | '_ \|  __|  \___ \   Zuercher Hochschule Winterthur             -
 * --  _| |_| | | | |____ ____) |  (University of Applied Sciences)           -
 * -- |_____|_| |_|______|_____/   8401 Winterthur, Switzerland               -
 * ----------------------------------------------------------------------------
 */
/**
 * @file
 * @brief Lab P02 QR Code
 * @remark prerequisite: sudo apt install qrencode
 */
#include <stdio.h>
#include <stdlib.h>
#define INFILE "snp.input"
// define local macros
// BEGIN-STUDENTS-TO-ADD-CODE





// END-STUDENTS-TO-ADD-CODE
int getOutputCharFromChar(int c);
void printResetAttribute();

/**
 * @brief   main function
 * @returns always success (0)
 */
int main() {
    // BEGIN-STUDENTS-TO-ADD-CODE

    printResetAttribute();
    while(!feof(stdin)) {
        int input = fgetc(stdin);
        if(input == -1)
        {
           fclose(stdin);
           printResetAttribute();
           return EXIT_SUCCESS;
        }
        getOutputCharFromChar(input);
    }
    printResetAttribute();
	// END-STUDENTS-TO-ADD-CODE
	return EXIT_SUCCESS;
}


int getOutputCharFromChar(int c) {
    if ( c == 10){
        printResetAttribute();
    } else if(c == 32) {
        printf("\033[47m ");
    } else {
        printf("\033[40m ");
    }
    return 0;
}

void printResetAttribute() {
    printf("\033[0m\n");
}
