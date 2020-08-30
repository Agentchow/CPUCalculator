#include <stdio.h>

//Clock + CPU Time Calculation Functions
// float clockRateCalc (float duration) {
//     float clockRate;
//     clockRate = 1 / duration;
//     return clockRate;
// }

// float cpuTimeCalc (float cycleDuration, int instructionAmt, int cyclesPerInstruction)  {
//     float excecutionTime;
//     excecutionTime = cycleDuration*instructionAmt*cyclesPerInstruction;
//     return excecutionTime;
// }

int main( int argc, char** argv ) {
    /* 
        **NO need for edge case covering/defensive programming

        1.) Prompt the user with printf 
        2.) Allocate space, read in input with scan
        3.) Simple if statement to determine user selection 
        4.) Prompt User for params, allocate/scan and store  
        5.) Makes call to correct function
        6.) Algo Calculation
        7.) Return back to user
    */

    //Prompts user for input
    printf("Please select the computation you want to make: (1 = clock rate, 2 = CPU time): ");

    //Allocates + Listens + Stores User Input, then makes call
    int calcType;
    scanf("%i", &calcType);

    if (calcType==1) {
        float duration;
        printf("You selected clock rate, please enter the duration of one clock cycle in seconds: ");
        scanf("%f", &duration);
        float clockRate;
        clockRate = 1 / duration;
 
        //clockRate = clockRateCalc(duration);
        printf("The clock rate corresponding to this duration is: %0.1f Hertz.", clockRate);
    }

    if (calcType==2) {
        float cycleDuration;
        int instructionAmt;
        int cyclesPerInstruction;
        float executionTime;
        printf("You selected CPU time, please enter the duration of one clock cycle in seconds: ");
        scanf("%f", &cycleDuration);
        printf("You selected CPU time, please enter the number of instructions in the program: ");
        scanf("%i", &instructionAmt);
        printf("You selected CPU time, please enter the number of clock cycles per instruction: ");
        scanf("%i", &cyclesPerInstruction);
        executionTime = cycleDuration*instructionAmt*cyclesPerInstruction;

        //executionTime = cpuTimeCalc(cycleDuration, instructionAmt, cyclesPerInstruction);
        printf("The CPU execution time corresponding to these parameters is: %0.1f seconds.", executionTime);
    }
	return 0;
}


