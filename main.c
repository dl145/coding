#include <stdio.h>
#include <string.h>

int isEven(int num)
{
    return (num % 2);
}

void scan()
{
    int test;
    printf("Enter an integer: ");
    scanf("%d", &test);
    printf("You entered: %d\n", test);
}
/*
void backString()
{
    char str[100];

    printf("Enter one word: ");
    scanf("%s", &str);

    int length = strlen(str);

    for (int i = length; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}*/

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int bigSum()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    return sum;
}

int fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 0;

    if (n == 0 || n == 1)
    {
        return 1;
    }

    for (int i = 2; i <= n; i++)
    {

        c = a + b;
        a = b;
        b = c;
        // printf("c ist %d\n", c);
    }

    return c;
}

float average()
{
    int amount = 0;
    printf("Wie viele Noten sollen verarbeitet werden? - ");
    scanf("%d", &amount);

    if (amount > 0)
    {
        float noten[amount];
        for (int i = 0; i < amount; i++)
        {
            float temp = 0.0;
            printf("Note %d von %d: ", i + 1, amount);
            scanf("%f", &temp);

            while (temp <= 0.69 || temp > 5.01)
            {
                printf("Ungültige Eingabe. Bitte erneut versuchen.\n");
                
                printf("Note %d von %d: ", i + 1, amount);
                scanf("%f", &temp);
            }

            noten[i] = temp;
        }

        float sum = 0.0;
        for (int j = 0; j < amount; j++){
            sum += noten[j];
        }

        float average = sum / amount;

        printf("-------------------------\n");
        printf("Der Durchschnitt der eingegebenen Noten beträgt: %.2f\n", average);
        
    }
    else
    {
        printf("Fehlerhafte Eingabe.\n");
    }
}

int max(){
    int i,j;
    printf("Geben Sie eine erste Ganzzahl ein: ");
    scanf("%d",&i);
    printf("Geben Sie eine zweite Ganzzahl ein: ");
    scanf("%d",&j);

    if(i>j){
        printf("Die Zahl %d ist größer als %d.\n",i,j);
    }else if (j>i){
        printf("Die Zahl %d ist größer als %d.\n",j,i);
    }else{
        printf("Die Zahlen sind gleich groß.\n");
    }
}

int main(void)
{
    // scan();
    // backString();

    // float a = 2.5;
    // printf("%f", a);

    // int n = 10;
    // int res = factorial(n);
    // printf("The factorial of %d is: %d\n", n, res);
    // int res = fib(10);
    // printf("Fib wert: %d\n", res);

    //average(); //berechnet Notendurchschnitt aus eingegebenen Noten
    max();

    return 0;
}