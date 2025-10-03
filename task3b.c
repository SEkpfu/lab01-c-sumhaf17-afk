#include <stdio.h> 
#include <math.h>  
int main() {
    double x; 
    double f_x;
    int is_error = 0;

    printf("Введите действительное число x: ");
    scanf("%lf", &x);

    if (x <= -2) {
        f_x = 0;
    }
   
    else { 
        
        if (x <= 0) { 
            f_x = pow(x, 2) + 4 * x + 5;
        }
       
        else { 
            double denominator = pow(x, 2) + 4 * x - 5;

            if (fabs(denominator) < 1e-9) { 
                is_error = 1;
            } else {
                f_x = 1.0 / denominator;
            }
        }
    }


    if (is_error) {
        printf("При x = %.3lf получается нечисловой результат (деление на ноль).\n", x);
    } else {
        printf("f(%.3lf) = %.5lf\n", x, f_x);
    }

    return 0;
}