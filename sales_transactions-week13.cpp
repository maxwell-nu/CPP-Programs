//Name: Maxwell Mwangi
//Reg No: BCS-05-0001/2025
//Purpose: Reads a sales.txt file and calculates the total amount using a while loop. Will show an error message if file isn't found.

#include <stdio.h>

int main(){
    FILE *file;
    float amount, total = 0;
    
    file = fopen("sales.txt", "r");
    
    if (file == NULL){
        printf("Error: Could not open file!\n");
        return 1;
    }
    
    while (fscanf(file, "%f", &amount) == 1){
        total += amount;
    }
    
    fclose(file);
    
    printf("Total sales for the day: $%.2f\n", total);
    
    return 0;
}