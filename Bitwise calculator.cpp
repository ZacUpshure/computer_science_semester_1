// Bitwise calculator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <math.h>
#include "escapesequenzen.h"

void printFrame();                      //----------------------------
short getNumber(int);
void printInputNumber(int, short);
char getOperator();
void printInputOperator(char);
short calcResult(short,short,char);     //All functions from the headerfile
void printResultNumber(int, short);     //decleration of functions - prototype
void printBinary(int, short);
void pri2(char);
int askAgain();
void clearBuffer();                     //-----------------------------


int main()
{
    short z1, z2, Result;       //decleration of variables
    char Ans, Operator;

    do
    {
        POSITION(19, 1);
        CLEAR_LINE;

        printFrame();

        z1 = getNumber(4);
        printInputNumber(4, z1);
        z2 = getNumber(6);
        printInputNumber(6, z2);

        Operator = getOperator();
        printInputOperator(Operator);

        printResultNumber(11, z1);
        printResultNumber(13, z2);
        Result = calcResult(z1, z2, Operator);
        printResultNumber(15, Result);

        pri2(Operator);

        Ans = askAgain();
    } while (Ans == 0);

    CLEAR;
    HOME;
    POSITION(1, 1);
    printf("Das Programm wird beendet\n");

    return 0;
}

/******************************************************
*
*-----------------------------------------------------
* BESCHREIBUNG:	Gibt das Eingabefenster für den
* feststehenden Text aus.
* ERGEBNISWERTE: -
*-----------------------------------------------------
*
******************************************************/

void printFrame()                       //interface
{

    CLEAR;
    HOME;

    /*01*/printf("|-----------------------------------------------------------|\n");
    /*02*/printf("| Bitoperatoren-Rechner                                     |\n");
    /*03*/printf("|                                                           |\n");
    /*04*/printf("| Eingabe Zahl 1:                                           |\n");
    /*05*/printf("| Operator:                                                 |\n");
    /*06*/printf("| Eingabe Zahl 2:                                           |\n");
    /*07*/printf("|                                                           |\n");
    /*08*/printf("|-----------------------------------------------------------|\n");
    /*09*/printf("|                                                           |\n");
    /*10*/printf("|----------|---dez.--|--okt.---|---hex.--|Binaerdarstellung-|\n");
    /*11*/printf("|-Zahl 1---|---------|---------|---------|------------------|\n");
    /*12*/printf("|-Operator-|---------|---------|---------|------------------|\n");
    /*13*/printf("|-Zahl 2---|---------|---------|---------|------------------|\n");
    /*14*/printf("|-----------------------------------------------------------|\n");
    /*15*/printf("|-Ergebnis-|---------|---------|---------|------------------|\n");
    /*16*/printf("|                                                           |\n");
    /*17*/printf("|-----------------------------------------------------------|\n");
}



/***************************************************************
*
*---------------------------------------------------------------
*   getNumber
*   Fragt den Benutzer nach den Zahlen der Berechnung
*   Parameter: Eingabe: Überprüft, ob eine Zahl eingelesen wurde
*   	       Zahl: erster und zweiter Operand
*   Ergebnis: Gibt die zwei Operanden zur Berechnung aus
*---------------------------------------------------------------
*
****************************************************************/

short getNumber(int Zeile)
{
    short number;
    int input;
                                
    do
    {
        POSITION(19, 1);
        CLEAR_LINE;
        printf("Please input a number: ");

        input = scanf_s("%hi", &number);          //asks for input

        clearBuffer();                          //clears buffer 
        
        if (input == 0 || number > 500000 || number < -500000) // if the input value is beyond
        {                                                      // either of these values, 
            POSITION(20, 1);                                   // the input is wrong.
            printf("Wrong input! Please input a number.");
        }

    } while (input == 0);
                                               //if the input is wrong the controlstructure
                                               //repeats itself.
    POSITION(19, 1);
    CLEAR_LINE;
    POSITION(20, 1);
    CLEAR_LINE;

    return number;
}


/******************************************************
*
*-----------------------------------------------------
*   printInputNumber
*
*   Parameter: Zeil: Zeilenanzahl in die die Zahl
*   eingegeben werden soll
*   	       Zahl: Operanden die eingegeben wurden.
*   Ergebnis: Gibt die Operanden in die vorgegebenen
*   Spalte aus.
*------------------------------------------------------
*
******************************************************/


void printInputNumber(int line, short number)           //prints the input value.
{
    POSITION(line, 19);
    printf("%hi", number);
}


/***************************************************************
*
*---------------------------------------------------------------
*   getOperator
*   Fragt den Benutzer nach den Bitoperatoren
*   Parameter: Op: Eingelesenes Zeichen für den Operator
*   	       Eingabe: Überprüft, ob der Operator
*   	       eingelesen wurde
*   Ergebnis: Gibt den Operator zurück
*
*---------------------------------------------------------------
*
****************************************************************/


char getOperator()
{
    char Op;
    int input;

    do
    {
        do
        {
            POSITION(19, 1);
            CLEAR_LINE;
            printf("Please input an Operator: ");

            input = scanf_s("%c", &Op);               //scans for an operator

            clearBuffer();

            if (input == 1) 
            {
                POSITION(20, 1);
                printf("Wrong input! Please input an Operator.\n");
                printf("Please use : '&', '|', '<<', '>>' or '^'.\n");
            }                                      //repeats if not one of the recommended signs
                                                   //are being used.         
        } while (Op != '&' && Op != '|' && Op != '<' && Op != '>' && Op != '^'); 
    } while (!input);

    POSITION(20, 1);
    CLEAR_LINE;
    POSITION(21, 1);
    CLEAR_LINE;

    return Op;
}


/******************************************************
*
*-----------------------------------------------------
*   printInputOperator
*   Gibt den Operator in der vorgegebenen Spalte aus
*------------------------------------------------------
*
******************************************************/


void printInputOperator(char Operator)
{
    if (Operator == '<')
    {
        POSITION(5, 19);
        printf("<%c", Operator);
    }

    if (Operator == '>')
    {
        POSITION(5, 19);
        printf(">%c", Operator);
    }

    else
    {
        POSITION(5, 19);
        printf("%c", Operator);
    }
}


/***************************************************************
*
*---------------------------------------------------------------
*   calcResult
*   Führt die Bitoperatiorenberechnung durch.
*   Parameter: Z1, Z2: Eingegebene Zahlen,
*   	       Operator: Bitoperator
*   Ergebnis: Übergibt das Ergebnis der Berechnung
*---------------------------------------------------------------
*
****************************************************************/


short calcResult(short z1, short z2, char Operator)
{
    if (Operator == '|')
    {
        return z1 | z2;
    }
    else if (Operator == '&')
    {
        return z1 & z2;
    }
    else if (Operator == '<')
    {
        return z1 << z2;
    }
    else if (Operator == '>')
    {
        return z1 >> z2;
    }
    else if (Operator == '^')
    {
        return z1 ^ z2;
    }

    return 0;
}


/******************************************************
*
*-----------------------------------------------------
*   printResultNumber
*
*   Parameter: Zeil: Zeilenanzahl in die die Zahl
*   eingegeben werden soll
*   	       Zahl: Operanden die eingegeben wurden.
*   Ergebnis: Gibt die Operanden in die vorgegebenen
*   Spalte aus.
*------------------------------------------------------
*
******************************************************/


void printResultNumber(int line, short number)
{
    POSITION(line, 13);
    printf("%9hi | %9ho | %9hx", number, number, number);
    POSITION(line, 44);
    printBinary(line, number);
}


/*********************************************************
*
*---------------------------------------------------------
*   printBinary
*   Schiebt die 1 um 15 Stellen nach links bis zur 0
*   Para    Zahl: Operanden die eingegeben wurden.
*   Ergebnis:Ausgabe der Zahlen in der Binärschreibweise.
*-----------------------meter: Zeil: Zeilenanzahl in die die Zahl
*   eingegeben werden soll
*   	   -----------------i---------------
*
*********************************************************/


void printBinary(int line, short number)
{
    int i, Result;

    for (i = 15; i >= 0; i--)
    {
        Result = number >> i;

        if (Result & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}


/******************************************************
*
*-----------------------------------------------------
*   pri2
*
*   Parameter: Operator: Zeilenanzahl in die die Zahl
*   eingegeben werden soll
*   Ergebnis: Gibt die Operanden in die vorgegebenen
*   Spalte aus.
*------------------------------------------------------
*
******************************************************/



void pri2(char Operator)
{
    if (Operator == '<')
    {
        POSITION(12, 13);
        printf("%8c< | %8c< | %8c< | %17c<", Operator, Operator, Operator, Operator);
    }

    if (Operator == '>')
    {
        POSITION(12, 13);
        printf("%8c> | %8c> | %8c> | %17c>", Operator, Operator, Operator, Operator);
    }

    if (Operator == '|')
    {
        POSITION(12, 13);
        printf("%9c | %9c | %9c | %18c", Operator, Operator, Operator, Operator);
    }

    if (Operator == '&')
    {
        POSITION(12, 13);
        printf("%9c | %9c | %9c | %18c", Operator, Operator, Operator, Operator);
    }

    if (Operator == '^')
    {
        POSITION(12, 13);
        printf("%9c | %9c | %9c | %18c", Operator, Operator, Operator, Operator);
    }
}


/***************************************************************
*
*---------------------------------------------------------------
*   askAgain
*   Fragt den Benutzer, ob er nocheinmal eingeben möchte.
*   Parameter: c: Eingelesenes Zeichen, nur Ja oder Nein gültig
*   Ergebnis: Übergabe der Eingabe
*---------------------------------------------------------------
*
****************************************************************/


int askAgain()
{
    char c;

    do
    {
        POSITION(19, 1);
        CLEAR_LINE;
        POSITION(19, 1);

        printf("Do you want to repeat (y/n)?");

        scanf_s("%c", &c);

        if (c != '\n')
        {
            clearBuffer();
        }

        if (c != 'Y' && c != 'y' && c != 'N' && c != 'n') //prints an error mmessage when the 
        {                                                      //user input is wrong 
            printf("Wrong input! Please input 'y' or 'n'\n");
        }

    }while (c != 'Y' && c != 'y' && c != 'N' && c != 'n');    //if the input is wrong again,
                                                               //then the whole function repeats.
    return ((c == 'y') || (c == 'Y'));                         //finishes if the user gives the
                                                               //correct input for repetition.     
}


/***************************************************************
*
*---------------------------------------------------------------
*   clearBuffer
*   Löscht den Tastaturpuffer nach dem Einlesen eines Zeichens
*   Parameter: c: Eingelesenes Zeichen
*   Ergebnis: Gibt den Operatoren zurück
*---------------------------------------------------------------
*
****************************************************************/


void clearBuffer()
{
    char Dummy;

    do
    {
        scanf_s("%c", &Dummy);
    }while(Dummy != '\n');
}

