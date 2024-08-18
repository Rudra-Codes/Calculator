// made by Rudra
// Branch - Mathematics and Computing

#include <stdio.h>

int fact(int);
int fact(int x)
{
    int answer = 1;
    for (int i = 1; i <= x; i++)
    {
        answer = answer * i;
    }
    return answer;
}
double expo(double x, double y)
{
    double z = x;
    if (y == 0)
    {
        z = 1;
    }
    else
    {
        for (int i = 1; i < y; i++)
        {
            z = z * x;
        }
    }
    return z;
}

double sin(double);
double sin(double x)
{
    int n = 2;
    double answer;
    for (int i = 1; i < 10; i += 2)
    {
        // printf("%lf\n",expo(x,i));
        // printf("%lf\n",fact(i));
        // printf("%lf\n",expo((-1), n));
        answer = answer + ((expo(x, i)) / (fact(i)) * (expo((-1), n)));
        n++;
    }
    return answer;
}

// double expo(double, double);
double ln(double, double);
double ln(double number, double accu)
{
    double e = 2.718281828459045;
    double i = 1, c = 0, f = 1;
    if (number == 2)
    {
        i = 0.693147180;
    }

    else
    {
        while (c <= accu)
        {
            if (f == 1)
            {
                while ((expo(e, i)) < number)
                {
                    i = i + (expo(0.1, c));
                }
            }

            else
            {
                while ((expo(e, i)) > number)
                {
                    i = i - (expo(0.1, c));
                }
            }
            f = f * (-1);
            c++;
        }
    }
    return i;
}

double cos(double x)
{
    int n = 0;
    double answer;
    for (int i = 0; i < 10; i += 2)
    {

        answer = answer + ((expo(x, i)) / (fact(i)) * (expo((-1), n)));
        n++;
    }
    return answer;
}

int main()
{
    printf("Enter 'add' for addition\n");
    printf("Enter 'subtract' for subtration\n");
    printf("Enter 'loge' for taking log on base e\n");
    printf("Enter 'logb' for taking log on any base\n");
    printf("Enter 'sin' for taking sin\n");
    printf("Enter 'cos' for taking cos\n");
    printf("Enter 'tan' for taking tan\n");

    char to_do[10];
    scanf("%s", to_do);

    if (to_do[0] == 'a' && to_do[1] == 'd' && to_do[2] == 'd')
    {
        double total;
        printf("Enter as many as numbers you want then for adding all enter 0\n");
        for (double n = 1; n != 0;)
        {
            scanf("%lf", &n);
            total += n;
        }

        printf("Your sum is %.2f\n", total);
    }

    if (to_do[0] == 's' && to_do[1] == 'u' && to_do[2] == 'b' && to_do[3] == 't' && to_do[4] == 'r' && to_do[5] == 'a' && to_do[6] == 'c' && to_do[7] == 't')
    {
        double total, first = 0, rest = 0;
        printf("Listen Carefully else u will miss\n");
        printf("Enter first digit from which u want to subtract\n");
        printf("Then after that it will subtract all numbers enetered from first one only\n");
        printf("Enter 0 to see answer\n");
        scanf("%lf", &first);
        for (double n = 1; n != 0;)
        {
            scanf("%lf", &n);
            rest += n;
        }

        total = first - rest;
        printf("Your answer is %.2f\n", total);
    }

    // Taking log now
    if (to_do[0] == 'l' && to_do[1] == 'o' && to_do[2] == 'g' && to_do[3] == 'e')
    {
        double number, accu;
        printf("Enter number and digits upto which you want log\n");
        scanf("%lf %lf", &number, &accu);
        double answer = ln(number, accu);
        // scanf(" %lf", accu);

        printf("Log is %lf\n", answer);
    }

    if (to_do[0] == 'l' && to_do[1] == 'o' && to_do[2] == 'g' && to_do[3] == 'b')
    {
        printf("Enter number then base and then digits upto which you want log\n");
        double number, base, accu;
        scanf("%lf %lf %lf", &number, &base, &accu);
        double answer = (ln(number, accu)) / (ln(base, accu));
        printf("Log is %lf\n", answer);
    }

    if (to_do[0] == 's' && to_do[1] == 'i' && to_do[2] == 'n')
    {
        char degree;
        printf("Enter Y if your angle is in radian otherwise type anything else\n");
        scanf(" %c", &degree);

        if (degree == 'Y' || degree == 'y')
        {
            printf("Enter the angle in radians\n");
            double number;
            scanf("%lf", &number);
            double answer = sin(number);
            printf("Sin is %lf\n", answer);
        }
        else
        {
            printf("Enter the angle in degree\n");
            double number;
            scanf("%lf", &number);
            number = 22.0 / (7 * number * 180);
            double answer = sin(number);
            printf("Sin is %lf\n", answer);
        }
    }

    if (to_do[0] == 'c' && to_do[1] == 'o' && to_do[2] == 's')
    {
        char degree;
        printf("Enter Y if your angle is in radian otherwise type anything else\n");
        scanf(" %c", &degree);

        if (degree == 'Y' || degree == 'y')
        {
            printf("Enter the angle in radians\n");
            double number;
            scanf("%lf", &number);
            double answer = cos(number);
            printf("Cos is %lf\n", answer);
        }
        else
        {
            printf("Enter the angle in degree\n");
            double number;
            scanf("%lf", &number);
            number = 22.0 / (7 * number * 180);
            double answer = cos(number);
            printf("Cos is %lf\n", answer);
        }
    }
    if (to_do[0] == 't' && to_do[1] == 'a' && to_do[2] == 'n')
    {
        char degree;
        printf("Enter Y if your angle is in radian otherwise type anything else\n");
        scanf(" %c", &degree);

        if (degree == 'Y' || degree == 'y')
        {
            printf("Enter the angle in radians\n");
            double number;
            scanf("%lf", &number);
            double answer = (sin(number)) / (cos(number));
            printf("tan is %lf\n", answer);
        }
        else
        {
            printf("Enter the angle in degrees\n");
            double number;
            scanf("%lf", &number);
            number = 22.0 / (7 * number * 180);
            double answer = (sin(number)) / (cos(number));
            printf("tan is %lf\n", answer);
        }
    }
    printf("Thank You for trying my code. \nThere may be some deviation in calculation because I just learned C and it was \ntough to code every small thing like raisingpower etc etc as we were not allowed to use other libraraies\n");

    printf("But it was fun to code \nand this is my first c program ");

    return 0;
}