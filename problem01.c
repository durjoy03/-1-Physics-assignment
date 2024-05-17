#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    double theta,d;
    int order;
    printf("Enter separation  in micro:   ");
    scanf("%lf",&d);

    double convert_d=d*1e-6;

    double d_nanometer=convert_d*1e+9;

    printf("Enter the angle theta:  ");
    scanf("%lf",&theta);

    double theta_radiun=(theta*PI)/180;
    printf("Enter the order:  ");
    scanf("%d",&order);

    double wavelength=(convert_d*sin(theta_radiun))/order;

    double new_wavelength=wavelength*1e+9;
    printf("Wavelength is %.2fnm\n",new_wavelength);

    if(new_wavelength>d_nanometer)
    {
        printf("Unreasonable");
    }
    else
    {
        if(new_wavelength>=380 && new_wavelength<=750)
        {

            if(new_wavelength<=380)
            {
                printf("Violet");
            }
            else if(new_wavelength<=485)
            {
                printf("Bue");
            }

            else if(new_wavelength<=500 )
            {
                printf("Cyan");
            }
            else if(new_wavelength<=565 )
            {
                printf("Green");
            }
            else if(new_wavelength<=590 )
            {
                printf("Yellow");
            }
            else if( new_wavelength<=625 )
            {
                printf("Orange");
            }
            else if(new_wavelength<=750 )
            {
                printf("Red");
            }
        }
        else
        {
            printf("Invisible");
        }
    }


    return 0;
}
