#include <iostream>

void inserttothestack( void );
void pullfromthethestack( void );
void outputthestack(void);

int main() {

    char menu_option,initials;


    printf("       Stack example using malloc\n");
    printf("------------------------------------------\n\n");


    do{



        outputthestack();
        printf("Main Menu\n");
        printf("a. Insert a integer into the stack.\n");
        printf("b. Process an integer from the \n");
        printf("q. To quit.\n");
        printf(" Please enter an option from the main menu: ");
        scanf("%c",&menu_option);



        switch(menu_option){

            case 'a':
              inserttothestack();
                break;
            case 'b':
                pullfromthethestack();
            break;
            default:
                printf("invalid input");
                break;
        }

    }while(menu_option !='q');





    return 0;
}

void   outputthestack(void)
{
    return;
}

void inserttothestack( void )
{
    return;
}

void pullfromthethestack( void )
{
    return;
}