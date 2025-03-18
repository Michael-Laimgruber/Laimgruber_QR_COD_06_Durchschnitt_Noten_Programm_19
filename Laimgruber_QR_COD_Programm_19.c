#include <stdio.h>

// function 1


// array of floats who will contain the grades and amount of grades (= divisor)
// function naming convention camelCase or PascalCase - can I use my lowercase underline lowercase ? xxx_yyy
// return type "float" "function name" ( parameter type "float" parameter name "grades" []array, parameter type "int" no need for float = more bytes // parameter name "amount" )
// https://www.geeksforgeeks.org/c-functions/

float calculate_average(float grades[], int amount)
{
    // declare variable float with 0.0
    float sum = 0.0;
    
    // start loop to calc sum
    for (int i = 0; i < amount; i++)
    {
        // sum starts at 0 and adds every grade from the array at every iteration
        sum = sum + grades[i];
    }



    // calc average from added grades = sum divided by the amount of grades = amount
    return sum / amount;


}


int main() 
{
    // array - maximum is 20 floating point numbers
    float grades[20]; 
    int amount;




    // user input amount of grades into variable count
    printf("Geben Sie die Anzahl der Noten ein (maximal 20): ");
    scanf_s("%d", &amount);



  
    // check if user input is valid amount smaller or 0 OR bigger than Y
    if (amount <= 0 || amount > 20)
    {
        // user error message
        printf("Ungueltige Anzahl von Noten. Bitte geben Sie eine Zahl zwischen 1 und 20 ein.\n");
        // break out of program
        return 1; 
    }




    // user input of grades until variable amount is reached ((print text first (Note 1: user_input) ))
    for (int i = 0; i < amount; i++)
    {
        // +1 / i starts at 0! don't forget
        printf("Note %d ein: ", i + 1);
        //save user input (floating points) into grades array to recall in the function
        scanf_s("%f", &grades[i]);
    }





    // calculate average via function - %.2f (print floating point numbers with 2 decimals)
    // call function (adds all the grades from the array one by one in the sum variable which is updated every iteration - then divided by amount)
    float average = calculate_average(grades, amount);

    printf("Der Durchschnitt der Noten betraegt: %.2f\n", average);








    return 0;
}



/*

Programm 19:
Durchschnitt von Noten berechnen

Erstellen Sie ein C-Programm, das den Benutzer auffordert, eine Reihe von Noten einzugeben und dann den Durchschnitt dieser Noten berechnet und anzeigt.

Anforderungen:

Daten erfassen:

Verwenden Sie ein Array, um die Noten zu speichern, die der Benutzer eingibt.

Das Programm soll maximal 20 Noten erfassen können.


Durchschnitt berechnen:

Erstellen Sie eine Funktion `calculateAverage`, die den Durchschnitt der Noten im Array berechnet und das Ergebnis zurückgibt.

Benutzereingaben und Ausgabe:

Fordern Sie den/die Benutzer*in auf die Anzahl der Noten einzugeben, die er/sie berechnen möchte.

Fordern Sie den/die Benutzer*in auf die Noten einzutragen, und berechnen Sie dann den Durchschnitt.

Geben Sie den Durchschnitt am Ende aus.


*/