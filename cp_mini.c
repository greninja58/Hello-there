// Group 5 - Computer Programming Project
// Sem 1 - CSE B
// BT21CSE126 Neil
// BT21CSE127 Kalpesh
// BT21CSE128 Divansh
// BT21CSE129 Parth
// BT21CSE130 Aditya
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
// float totalbill(float *sum,float *fb,float *acc);
float totalbill(float sum, float fb, int acc);
struct receipt
{
    char user[500];
    char naam[50];
    float amount;
    int reply;
} record;

void showmsg()
{
    printf("\n\t\tThank you for using this program!!\n\t\t\tHave a nice day");
}
int main()
{
    // Welcome Page
    int i, j;
    for (i = 1; i < 15; i++)
    {
        for (j = 1; j < 120; j++)
        {
            if (((i == 1) && (j > 50) && (j < 80)) || ((i < 5) && ((j == 50 - i) || (j == 80 + i))) || ((i == 5) && (j > 30) && (j < 47)) || ((i == 5) && (j > 84) && (j < 95)) || ((i == 9) && (j > 30) && (j < 95)) || (((j == 95) || (j == 30)) && (i > 5) && (i < 10)) || ((i - 11) * (i - 11) + (j - 50) * (j - 50) == 1) || ((i - 11) * (i - 11) + (j - 80) * (j - 80) == 1) || ((i < 6) && ((j == 55) || (j == 75))) || (i == 13) || (i == 14) || ((i - 7) * (i - 7) + (j - 96) * (j - 96) == 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n%s\t%s\n\n", __DATE__, __TIME__);
    printf("======================================================\n   WELCOME TO CAR SERVICE INFORMATION CENTRE\n======================================================\n");
    printf("Special Discounts:\nGet 5%% for bill above Rs. 2000\nGet 8%% for bill above Rs. 5000\nGet 12%% for bill above Rs. 10000\nGet 10%% for bill including Accessories\n\n");

    // Main Program

    char name[50], s[300];
    int brand, model, service, ac, bts, y, info, select, acc = 0;
    struct receipt *point;
    point = &record;
    
    float fb = 0, price = 0, sum = 0;
    atexit(showmsg);
    char centre1[200] = "Plot No. 12,Khamla road,Nagpur-440025";
    char centre2[200] = "Plot No. 10,Central Avenue Road,Wardhaman Nagar,Nagpur-440008";
    char centre3[200] = "Plot No. 5,Shaha Nagar,Nagpur-440024";
    char centre4[200] = "Plot No. 41,Adarsh colony,Jariptaka,Nagpur-440014";
    char contact1[100] = "(1800-400-100)";
    char contact2[100] = "(1800-500-200)";
    char contact3[100] = "(1800-600-300)";
    char contact4[100] = "(1800-700-400)";
information:
    printf("Enter 1 for Rate Sheet\nEnter 2 for Addresses\nEnter 3 to Skip\n");
    scanf("%d", &info);
    switch (info)
    {
    case 1:
    {

        FILE *ptr;
        char ch;

        ptr = fopen("ratesheet.txt", "r");

        do
        {
            ch = fgetc(ptr);
            printf("%c", ch);

        } while (ch != EOF);

        fclose(ptr);
        break;
    }
    case 2:
    {

        FILE *ptr;
        char ch;

        ptr = fopen("addsheet.txt", "r");

        do
        {
            ch = fgetc(ptr);
            printf("%c", ch);

        } while (ch != EOF);

        fclose(ptr);
        break;
    }
    case 3:
    {
        goto names;
        break;
    }

    default:
    {
        printf("\nYou have entered an invalid value\n");
        goto information;
    }
    }

names:
    printf("\n\nPlease enter your name\n");
    scanf("%s", &point->naam);
ss:
    printf("\nWhat is the brand of your car?\n");
    printf(" \nEnter 1 for - Tata\nEnter 2 for - Honda\nEnter 3 for - Hyundai\nEnter 4 for - Mahindra\nEnter 5 to exit\n");
    scanf("%d", &brand);
// Car Brands
start:
    switch (brand)
    {
    case 1:
    {
        strcat(s, "\n\nYour car is TATA ");
    a1:
        printf("\nPlease enter your car's Model\n");
        printf("\t \nEnter 1 for - Tata Nexon\nEnter 2 for - Tata Altroz\nEnter 3 for - Tata Harrier\nEnter 4 for - Tata Safari\nEnter 5 for - Tata Tiago\n");
        scanf("%d", &model);
        // Car Models
        switch (model)
        {

        case 1:
        {

            printf("\nWhat part do you need help with?\n");
            strcat(s, " Nexon \nYOUR SELECTED SERVICES ARE");
        a:
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);

            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "\nAC REPAIR AND SERVICES \tRs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto a;
                }
                break;
            }
            case 2:
            {
                strcat(s, "\nTYRES AND WHEEL CARE \t Rs. 3500\n");
                price = 3500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto a;
                }
                break;
            }
            case 3:
            {
                strcat(s, "\nDENT AND PAINTING \t Rs. 1800\n");
                price = 1800;

                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto a;
                }
                break;
            }
            case 4:
            {
                strcat(s, "\nCAR SPA AND CLEANING \t Rs. 2100\n");
                price = 2100;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto a;
                }
                break;
            }
            case 5:
            {
                strcat(s, "\nCLUCTH AND FILMENT \t Rs. 5000\n");
                price = 5000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto a;
                }
                break;
            }
            case 6:
            {
                strcat(s, "\nCUSTOM SERVICES ");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto a;
                }
                break;
            }
            case 7:
            {
                strcat(s, " \nACCESORIES ARE \t\t ");
                acc = 1;
            ac1:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");

                scanf("%d", &ac);
                switch (ac)
                {

                case 1:
                {
                    strcat(s, "CAR COVER \t Rs. 1400\t\t\n");
                    price = 1400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        goto a;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER \t Rs. 800\t\t\n");

                    price = 800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto a;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NACVIGATOR \t Rs. 1800\t\t\n");
                    price = 1800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto a;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT \t Rs. 2500\t\t\n");
                    price = 2500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto a;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT \t Rs. 2400\t\t\n");
                    price = 2400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto a;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac1;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto a;
            }
            }
            break;
        }

        case 2:
        {
            strcat(s, " ALTROZ\nYOUR SELECTED SERVICES ARE  ");
        b:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);

            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "\nAC SERVICES AND REPAIR\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto b;
                }
                break;
            }
            case 2:
            {
                strcat(s, "\n TYRE AND WHEEL CARE\t Rs. 3500\n");
                price = 3500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto b;
                }
                break;
            }
            case 3:
            {
                strcat(s, "\nDENT AND PAINTING\t Rs. 1900\n");
                price = 1900;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto b;
                }
                break;
            }
            case 4:
            {
                strcat(s, "\nCAR SPA AND CLEANING\t Rs. 2400\n");
                price = 2400;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto b;
                }
                break;
            }
            case 5:
            {
                strcat(s, "\nCLUTCH AND FILAMENT\t Rs. 5000\n");
                price = 5000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto b;
                }
                break;
            }
            case 6:
            {
                strcat(s, " \n CUSTOM SERVICES");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto b;
                }
                break;
            }
            case 7:
            {
                strcat(s, " \nACCESSORIES ARE \t\t");
                acc = 1;
            ac2:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1500\n");
                    price = 1500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto b;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 280\n");

                    price = 280;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto b;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1800\n");
                    price = 1800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto b;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2500\n");
                    price = 2500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto b;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 3400\n");
                    price = 3400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto b;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac2;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto b;
            }
            }
            break;
        }
        case 3:
        {
            strcat(s, "HARRIER");
        c:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            strcat(s, "YOUR SELECTED SERVICES ARE ");
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "\nAC SERVICES AND REPAIR\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto c;
                }
                break;
            }
            case 2:
            {
                strcat(s, "\n TYRE AND WHEEL CARE\t Rs. 3500\n");
                price = 3500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto c;
                }
                break;
            }
            case 3:
            {
                strcat(s, "\n DENT AND PAINTING\t Rs. 1800\n");
                price = 1800;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto c;
                }
                break;
            }
            case 4:
            {
                strcat(s, "\nCAR SPA AND CLEANING\t Rs. 3100\n");
                price = 3100;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto c;
                }
                break;
            }
            case 5:
            {
                strcat(s, " \n CLUTCH ANF FILAMENT\t Rs. 5000\n");
                price = 5000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto c;
                }
                break;
            }
            case 6:
            {
                strcat(s, "\nCUSTOM SERVICES");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto c;
                }
                break;
            }
            case 7:
            {
                strcat(s, "\n ACCESORIES ARE\t\t");
                acc = 1;
            ac3:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                    sum = sum + price;
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1700\n");
                    price = 1700;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto c;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 800\n");
                    price = 800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto c;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1800\n");
                    price = 1800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto c;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2500\n");
                    price = 2500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto c;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2400\n");
                    price = 2400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto c;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac3;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto c;
            }
            }
            break;
        }
        case 4:
        {
            strcat(s, "SAFARI\nYOUR SELECTED SERVICES ARE");
        d:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);

            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "\nAC SERVICES AND REPAIR\t Rs. 2000\n");
                price = 2000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto d;
                }
                break;
            }
            case 2:
            {
                strcat(s, "\nDENT AND PAINTING\t Rs. 3500\n");
                price = 3500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto d;
                }
                break;
            }
            case 3:
            {
                strcat(s, " \nCAR SPA AND CLEANING\t Rs. 1000\n");
                price = 1800;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto d;
                }
                break;
            }
            case 4:
            {
                strcat(s, " \nCAR SPA AND CLEANING\t Rs. 2100\n");

                price = 2100;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto d;
                }
                break;
            }
            case 5:
            {
                strcat(s, " \nCLUCTCH AND FILAMENT\t Rs. 5000\n");

                price = 5000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto d;
                }
                break;
            }
            case 6:
            {
                strcat(s, " \nCUSTOM SERVICES");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto d;
                }
                break;
            }
            case 7:
            {
                strcat(s, "\nACCESORIES ARE\t");
                acc = 1;
            ac4:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1500\t\t\n");
                    price = 1500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto d;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 800\t\t\n");
                    price = 800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto d;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1800\t\t\n");

                    price = 1800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto d;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2500\t\t\n");
                    price = 2500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto d;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2400\t\t\n");
                    price = 2400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto d;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac4;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto d;
            }
            }
            break;
        }
        case 5:
        {

            strcat(s, "TIAGO \n YOUR SELECTED SERVICES ARE");
        e:
            printf("\nWhat part do you need help with?\n");

            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);

            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "\n AC REPAIR AND SERVICES\t Rs. 1300\n");
                price = 1300;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto e;
                }
                break;
            }
            case 2:
            {
                strcat(s, "\n TYRE AND WHEEL CARE\t Rs. 3400\n");
                price = 3400;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto e;
                }
                break;
            }
            case 3:
            {
                strcat(s, "\n DENT AND PAINTING\t Rs. 1800\n");

                price = 1800;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto e;
                }
                break;
            }
            case 4:
            {
                strcat(s, "\n CAR SPA AND CLEANING\t Rs. 2100\n");
                price = 2100;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto e;
                }
                break;
            }
            case 5:
            {
                strcat(s, "\n CLUTCH AND FILAMENT\t Rs. 4000\n");

                price = 4000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto e;
                }
                break;
            }
            case 6:
            {
                strcat(s, "\n CUSTOM SERVICES");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto e;
                }
                break;
            }
            case 7:
            {
                strcat(s, "\n ACCESORIES ARE\t\t");
                acc = 1;
            ac5:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1500\t\t\n");
                    price = 1500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto e;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 800\t\t\n");
                    price = 800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto e;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1800\t\t\n");
                    price = 1800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto e;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2100\t\t\n");
                    price = 2100;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto e;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2400\t\t\n");

                    price = 2400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Raj(+913478437444)", centre1, contact1);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto e;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac5;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto e;
            }
            }
            break;
        }
        default:
        {
            printf("\nYou have entered an invalid value\n");
            goto a1;
        }
        }
        break;
    }
    case 2:
    {
        strcat(s, "\n\nYOUR CAR IS HONDA ");
    a2:
        printf("\nPlease enter your car's Model\n");

        printf("Enter 1 for - Honda CRV\nEnter 2 for - Honda BRV\nEnter 3 for - Honda City\nEnter 4 for - Honda City ZX\nEnter 5 for - Honda Amaze\n");
        scanf("%d", &model);
        // Car Models
        switch (model)
        {
        case 1:
        {
            strcat(s, " CRV\nYOUR ENTERED SERVICES ARE");
        f:

            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);

            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "\n AC REPAIR AND SERVICES\t Rs. 1200\n");

                price = 1200;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto f;
                }

                break;
            }
            case 2:
            {
                strcat(s, "\n TYRE AND WHEEL CARE\t Rs. 3500\n");
                price = 3500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto f;
                }

                break;
            }
            case 3:
            {
                strcat(s, "\n DENT AND PAINTING\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto f;
                }

                break;
            }
            case 4:
            {
                strcat(s, "\n CAR SPA AND CLEANING\t Rs. 1800\n");
                price = 1800;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto f;
                }

                break;
            }
            case 5:
            {
                strcat(s, "\n CLUTCH AND FILAMENT\t Rs. 4500\n");
                price = 4500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto f;
                }

                break;
            }
            case 6:
            {
                strcat(s, "\n CUSTOM SREVICES");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto f;
                }

                break;
            }
            case 7:
            {
                strcat(s, "\n ACCESORIES ARE\t");
                acc = 1;
            ac6:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1500\t\t\n");
                    price = 1500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto f;
                    }

                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 600\t\t\n");
                    price = 600;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto f;
                    }

                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1500\t\t\n");
                    price = 1500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto f;
                    }

                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2200\t\t\n");
                    price = 2200;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto f;
                    }

                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2100\t\t\n");
                    price = 2100;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto f;
                    }

                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac6;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto f;
            }
            }
            break;
        }
        case 2:
        {
            strcat(s, "BRV \n YOUR SELECTED SERVICES ARE\n");
        g:

            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC REPAIR AND SERVICING\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto g;
                }

                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3500\n");
                price = 3500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto g;
                }

                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto g;
                }

                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 2100\n");
                price = 2100;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto g;
                }

                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILAMENT\t Rs. 5000\n");
                price = 5000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto g;
                }

                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto g;
                }

                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE \t");
                acc = 1;
            ac7:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1100\t\t\n");
                    price = 1100;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto g;
                    }

                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 650\t\t\n");
                    price = 650;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto g;
                    }

                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1800\t\t\n");
                    price = 1800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto g;
                    }

                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2200\t\t\n");
                    price = 2200;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto g;
                    }

                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2100\t\t\n");
                    price = 2100;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto g;
                    }

                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac7;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto g;
            }
            }
            break;
        }
        case 3:
        {
            strcat(s, "CITY \n\n");
        h:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC REPAIR AND SERVICE\t Rs. 1700\n");
                price = 1700;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto h;
                }

                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3700\n");
                price = 3700;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto h;
                }

                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 2000\n");

                price = 2000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto h;
                }

                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 2300\n");
                price = 2300;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto h;
                }

                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILAMENT\t Rs. 5200\n");
                price = 5200;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto h;
                }

                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto h;
                }

                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\t");
                acc = 1;
            ac8:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1600\t\t\n");
                    price = 1600;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto h;
                    }

                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 500\t\t\n");
                    price = 500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto h;
                    }

                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 2000\t\t\n");
                    price = 2000;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto h;
                    }

                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2700\t\t\n");
                    price = 2700;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto h;
                    }

                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2400\t\t\n");
                    price = 2400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto h;
                    }

                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac8;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto h;
            }
            }
            break;
        }
        case 4:
        {
            strcat(s, "CITY ZX\n\n");
        i:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC SERVICE AND REPAIR\t Rs. 1750\n");
                price = 1750;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto i;
                }

                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3470\n");
                price = 3470;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto i;
                }

                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 2100\n");
                price = 2100;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto i;
                }

                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto i;
                }

                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILAMENT\t Rs. 4000\n");
                price = 4000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto i;
                }

                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto i;
                }

                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\t");
                acc = 1;
            ac9:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1500\t\t\n");
                    price = 1500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto i;
                    }

                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 900\t\t\n");
                    price = 900;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto i;
                    }

                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1800\t\t\n");
                    price = 1800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto i;
                    }

                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2700\t\t\n");
                    price = 2700;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto i;
                    }

                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2600\t\t\n");
                    price = 2600;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto i;
                    }

                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac9;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto i;
            }
            }
            break;
        }
        case 5:
        {
            strcat(s, "AMAZE\n\n");
        j:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC SERVICE AND REPAIR\t Rs. 1600\n");
                price = 1600;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto j;
                }

                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3500\n");
                price = 3500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto j;
                }

                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 1900\n");
                price = 1900;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto j;
                }

                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 2200\n");
                price = 2200;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto j;
                }

                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILAMENT\t Rs. 5000\n");
                price = 5000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto j;
                }

                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto j;
                }

                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\t");
                acc = 1;
            ac10:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1500\t\t\n");
                    price = 1500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto j;
                    }

                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 900\t\t\n");
                    price = 900;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto j;
                    }

                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1900\t\t\n");
                    price = 1900;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto j;
                    }

                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2600\t\t\n");
                    price = 2600;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto j;
                    }

                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2600\t\t\n");

                    price = 2600;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Vikram(+914398437444)", centre2, contact2);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto j;
                    }

                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac10;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto j;
            }
            }
            break;
        }
        default:
        {
            printf("\nYou have entered an invalid value\n");
            goto a2;
        }
        }
        break;
    }
    case 3:
    {
        strcat(s, "\n\nYOUR CAR IS HYUNDAI ");
    a3:
        printf("\nPlease enter your car's Model\n");
        printf("Enter 1 for - Hyundai Venue\nEnter 2 for - Hyundai Creta\nEnter 3 for - Hyundai Verna\nEnter 4 for - Hyundai i20\nEnter 5 for - Hyundai Alcazar\n");
        scanf("%d", &model);
        // Car Models
        switch (model)
        {
        case 1:
        {
            strcat(s, "VENUE\n\n");
        k:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC SERVICE AND REPAIR\t Rs. 2000\n");
                price = 2000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto k;
                }
                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 4000\n");
                price = 4000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto k;
                }
                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 2300\n");
                price = 2300;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto k;
                }
                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 2600\n");
                price = 2600;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto k;
                }
                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILAMENT\t Rs. 5500\n");
                price = 5500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto k;
                }
                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto k;
                }
                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\n\t");
                acc = 1;
            ac11:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1650\t\t\n");
                    price = 1650;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto k;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 950\t\t\n");
                    price = 950;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto k;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1950\t\t\n");
                    price = 1950;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto k;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2700\t\t\n");
                    price = 2700;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto k;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2500\t\t\n");
                    price = 2500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto k;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac11;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto k;
            }
            }
            break;
        }
        case 2:
        {
            strcat(s, "CRETA\n\n");
        l:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC SERVICE AND REPAIR\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto l;
                }
                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3500\n");
                price = 3500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto l;
                }
                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 1800\n");
                price = 1800;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto l;
                }
                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 2100\n");
                price = 2100;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto l;
                }
                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILAMENT\t Rs. 5000\n");
                price = 5000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto l;
                }
                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICE\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto l;
                }
                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\t\t");
                acc = 1;
            ac12:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1400\t\t\n");
                    price = 1400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto l;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 800\t\t\n");
                    price = 800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto l;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1800\t\t\n");
                    price = 1800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto l;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2500\t\t\n");
                    price = 2500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto l;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2400\t\t\n");
                    price = 2400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto l;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac12;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto l;
            }
            }
            break;
        }
        case 3:
        {
            strcat(s, "VERNA\n\n");
        m:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC SERVICE AND REPAIR\t Rs. 1700\n");
                price = 1700;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto m;
                }
                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3700\n");
                price = 3700;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto m;
                }
                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 1900\n");
                price = 1900;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto m;
                }
                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 2250\n");
                price = 2250;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto m;
                }
                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILAMENT\t Rs. 5200\n");
                price = 5200;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto m;
                }
                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto m;
                }
                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\t");
                acc = 1;
            ac13:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1500\t\t\n");
                    price = 1500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto m;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 700\t\t\n");
                    price = 700;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto m;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1950\t\t\n");
                    price = 1950;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto m;
                    }

                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2700\t\t\n");
                    price = 2700;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto m;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2500\t\t\n");
                    price = 2500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto m;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac13;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto m;
            }
            }
            break;
        }
        case 4:
        {
            strcat(s, "i20\n\n");
        n:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC SERVICE AND REPAIR\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto n;
                }
                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 4000\n");
                price = 4000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto n;
                }
                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 2500\n");

                price = 2500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto n;
                }
                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 1800\n");

                price = 1800;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto n;
                }
                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILAMENT\t Rs. 5200\n");
                price = 5200;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto n;
                }
                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto n;
                }
                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\t");
                acc = 1;
            ac14:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1500\t\t\n");
                    price = 1500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto n;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 900\t\t\n");
                    price = 900;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto n;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1900\t\t\n");
                    price = 1900;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto n;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2600\t\t\n");
                    price = 2600;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto n;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2400\t\t\n");
                    price = 2400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto n;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac14;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto n;
            }
            }
            break;
        }
        case 5:
        {
            strcat(s, "ACAZAR\n\n");
        o:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC SERVICE AND REPAIR\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto o;
                }
                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3500\n");
                price = 3500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto o;
                }
                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 1900\n");
                price = 1900;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto o;
                }
                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 2100\n");
                price = 2100;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto o;
                }
                break;
            }
            case 5:
            {
                strcat(s, "CLUTCHA ND FILAMENT\t Rs. 5200\n");
                price = 5200;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto o;
                }
                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto o;
                }
                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\t");
                acc = 1;
            ac15:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1500\t\t\n");
                    price = 1500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto o;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 900\t\t\n");
                    price = 900;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto o;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1900\t\t\n");
                    price = 1900;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto o;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2600\t\t\n");
                    price = 2600;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto o;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2400\t\t\n");
                    price = 2400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Sahil(+914378437444)", centre3, contact3);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto o;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac15;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto o;
            }
            }
            break;
        }
        default:
        {
            printf("\nYou have entered an invalid value\n");
            goto a3;
        }
        }
        break;
    }
    case 4:
    {
        strcat(s, "\n\nYOUR CAR IS MAHINDRA ");
    a4:
        printf("\nPlease enter your car's Model\n");
        printf("Enter 1 for - Mahindra Thar\nEnter 2 for - Mahindra XUV700\nEnter 3 for - Mahindra Scorpio\nEnter 4 for - Mahindra Bolero\nEnter 5 for - Mahindra XUV300\n");
        scanf("%d", &model);

        // Car Models
        switch (model)
        {
        case 1:
        {
            strcat(s, "THAR\n\n");

        p:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC REPAIR AND SERVICE\t Rs. 1400\n");
                price = 1400;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto p;
                }
                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3400\n");
                price = 3400;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto p;
                }
                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto p;
                }
                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 1900\n");
                price = 1900;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    goto p;
                }
                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILAMENT\t Rs. 4300\n");
                price = 4300;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto p;
                }
                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto p;
                }
                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\t");
                acc = 1;
            ac16:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1200\t\t\n");
                    price = 1200;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto p;
                    }
                    break;
                }

                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 600\t\t\n");
                    price = 600;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto p;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1600\t\t\n");
                    price = 1600;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto p;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 2200\t\t\n");
                    price = 2200;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto p;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2300\t\t\n");

                    price = 2300;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto p;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac16;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto p;
            }
            }
            break;
        }
        case 2:
        {
            strcat(s, "XUV 300\n\n");
        q:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC SERVICE AND REPAIR\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto q;
                }
                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3500\n");
                price = 3500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto q;
                }
                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 1600\n");

                price = 1600;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto q;
                }
                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 1800\n");
                price = 1800;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto q;
                }
                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILMENT\t Rs. 4800\n");
                price = 4800;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto q;
                }
                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto q;
                }
                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\n\t");

                acc = 1;
            ac17:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1200\n");
                    price = 1200;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto q;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 700\t\t\n");
                    price = 700;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto q;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1500\t\t\n");
                    price = 1500;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto q;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2200\t\t\n");
                    price = 2200;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto q;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2300\t\t\n");
                    price = 2300;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto q;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac17;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto q;
            }
            }
        case 3:
        {
            strcat(s, "SCORPIO\n\n");
        r:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC SERVICE AND REPAIR\t Rs. 1400\n");
                price = 1400;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto r;
                }
                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3200\n");
                price = 3200;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto r;
                }
                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 1600\n");
                price = 1600;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto r;
                }
                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 2000\n");
                price = 2000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto r;
                }
                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILAMENT\t Rs. 4700\n");
                price = 4700;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto r;
                }
                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto r;
                }
                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\t");
                acc = 1;
            ac18:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1350\t\t\n");
                    price = 1350;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto r;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 650\t\t\n");
                    price = 650;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto r;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1700\n");
                    price = 1700;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto r;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2300\n");
                    price = 2300;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto r;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPTREHENSIVE TOOL KIT\t Rs. 2200\n");
                    price = 2200;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto r;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac18;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto r;
            }
            }
            break;
        }
        case 4:
        {
            strcat(s, "BOLERO\n\n");

        s:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC SERVICE AND REPAIR\t Rs. 1500\n");
                price = 1500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto s;
                }
                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3500\n");
                price = 3500;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto s;
                }
                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 1800\n");
                price = 1800;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto s;
                }
                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 2100\n");
                price = 2100;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto s;
                }
                break;
            }
            case 5:
            {
                strcat(s, "CLUTCHA AND FILAMENT\t Rs. 5000\n");
                price = 5000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto s;
                }
                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto s;
                }
                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\t");
                acc = 1;
            ac19:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1400\n");
                    price = 1400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto s;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 800\n");
                    price = 800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto s;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1900\n");
                    price = 1900;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto s;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 2300\n");
                    price = 2300;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto s;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2400\n");
                    price = 2400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto s;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac19;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto s;
            }
            }
            break;
        }
        case 5:
        {
            strcat(s, "XUV 300\n\n");
        t:
            printf("\nWhat part do you need help with?\n");
            printf("Enter 1 for - AC Service & Repair\nEnter 2 for - Tyres & Wheel Care\nEnter 3 for - Dents & Painting\nEnter 4 for - Car Spa & Cleaning\nEnter 5 for - Clutch & Fitments\nEnter 6 for - Custom Services\nEnter 7 for - Accesories\n");
            scanf("%d", &service);
            // Car Services
            switch (service)
            {
            case 1:
            {
                strcat(s, "AC SERVICE AND REPAIR\t Rs. 1700\n");
                price = 1700;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto t;
                }
                break;
            }
            case 2:
            {
                strcat(s, "TYRE AND WHEEL CARE\t Rs. 3600\n");
                price = 3600;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto t;
                }
                break;
            }
            case 3:
            {
                strcat(s, "DENT AND PAINTING\t Rs. 2000\n");
                price = 2000;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto t;
                }
                break;
            }
            case 4:
            {
                strcat(s, "CAR SPA AND CLEANING\t Rs. 2200\n");
                price = 2200;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto t;
                }
                break;
            }
            case 5:
            {
                strcat(s, "CLUTCH AND FILAMENT\t Rs. 5200\n");
                price = 5200;
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto t;
                }
                break;
            }
            case 6:
            {
                strcat(s, "CUSTOM SERVICES\n");
                printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                scanf("%d", &select);
                if (select == 1)
                {
                    sum = sum + price;
                    goto t;
                }
                break;
            }
            case 7:
            {
                strcat(s, "ACCESORIES ARE\t");
                acc = 1;
            ac20:
                printf("\nWhich Accesory do you want?\nEnter 1 for: Car Cover\nEnter 2 for: Air Freshner\nEnter 3 for: GPS Navigator\nEnter 4 for: Floor Mat\nEnter 5 for: Comprehensive Toolkit\n");
                scanf("%d", &ac);
                switch (ac)
                {
                case 1:
                {
                    strcat(s, "CAR COVER\t Rs. 1600\n");
                    price = 1600;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto t;
                    }
                    break;
                }
                case 2:
                {
                    strcat(s, "AIR FRESHNER\t Rs. 1000\n");
                    price = 1000;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto t;
                    }
                    break;
                }
                case 3:
                {
                    strcat(s, "GPS NAVIGATOR\t Rs. 1800\n");
                    price = 1800;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto t;
                    }
                    break;
                }
                case 4:
                {
                    strcat(s, "FLOOR MAT\t Rs. 3000\n");
                    price = 3000;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto t;
                    }
                    break;
                }
                case 5:
                {
                    strcat(s, "COMPREHENSIVE TOOL KIT\t Rs. 2400\n");
                    price = 2400;
                    printf("The address of the service centre that you can visit is- %s.\nContact Service Centre-%s.\nYou can contact Mechanic Salim(+918978437444)", centre4, contact4);
                    printf("\nEnter 1 if you want to add any other services ,else enter any other number\n");
                    scanf("%d", &select);
                    if (select == 1)
                    {
                        sum = sum + price;
                        goto t;
                    }
                    break;
                }
                default:
                {
                    printf("\nYou have entered an invalid value\n");
                    goto ac20;
                }
                }
                break;
            }
            default:
            {
                printf("\nYou have entered an invalid value\n");
                goto t;
            }
            }
            break;
        }
        default:
        {
            printf("\nYou have entered an invalid value\n");
            goto a4;
        }
        }
        break;
        }
    }
    case 5:
    {
        goto final;
    }
    default:
    {
        printf("\nYou have entered an invalid value\n");
        goto ss;
    }
    }
    sum = sum + price;
final:
    printf("\nDo you need any other services?\n");
    printf("Enter 1 for YES\nEnter 2 for NO\n");
    scanf("%d", &bts);

    if (bts == 1)
    {
        goto ss;
    }
    else if (bts == 2)
    {
        //   float finalbill=totalbill(&sum,&fb,&acc);
        float finalbill = totalbill(sum, fb, acc);

        printf("\n%s\n", s);
        printf("\nThank you %s, your final potential bill after discounts and inclusive of GST will be:   %.2f\nYour customer ID is %d\n\n", point->naam, finalbill,&name);

        point = (struct receipt *)malloc(sizeof(float));
        point->amount = finalbill;
          FILE *fptr;

    // opening file in writing mode
    fptr = fopen("record.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    
    fprintf(fptr, "ID: %d\n", &name);
    fprintf(fptr, "Bill: %f\n", finalbill);
    fprintf(fptr, "%s", s);
    fclose(fptr);

    }
    else
    {
        printf("\nYou have entered an invalid value\n");
        goto final;
    }

    printf("Please Enter a Feedback from 1 to 5\n");
    int feedback;
    scanf("%d", &point->reply);

    printf("Thank you for feedback and visting us.\n");
   
    free(point);
    point=NULL;
    return 0;
}
float totalbill(float sum, float fb, int acc)
{
    if (sum <= 2000)
    {
        fb = sum;
    }
    else if (sum > 2000 && sum <= 5000)
    {
        fb = 0.95 * sum;
    }
    else if (sum > 5000 && sum <= 10000)
    {
        fb = 0.92 * sum;
    }
    else if (sum > 10000)
    {
        fb = 0.88 * sum;
    }

    if (acc == 1)
    {
        fb = fb * 0.9;
    }
    else
    {
        fb = fb;
    }
    float a = fb * 1.18;
    return a;
}

// float totalbill(float *sum,float *fb,float *acc){
//     float a;
//     if (*sum <= 2000)
//             {
//                 *fb = *sum;
//             }
//             else if (((*sum )> 2000) && (*sum) <= 5000)
//             {
//                 *fb = 0.95 * (*sum);
//             }
//             else if ((*sum > 5000) && (*sum <= 10000))
//             {
//                 *fb = 0.92 * (*sum);
//             }
//             else if (*sum > 10000)
//             {
//                 *fb = 0.88 * (*sum);
//             }

//             if (*acc == 1)
//             {
//                 *fb = (*fb) * 0.9;
//             }
//             else
//             {
//                 *fb = *fb;
//             }
//             a=(*fb) * 1.18;
//             return a;

// }

// printf("\n\n\t\t DO U WANT TO ENTER ANY OTHER SERVICES ENTER F1 FOR YES \n");
//                 scanf("%d",&select);
//                 if(select==1)
//                 {
//                     goto a;
//                 }