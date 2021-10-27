#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int choice,num,i,m,k,l;
int ID,Password;
int datachoice;
int serial=0,serial1=1,serial2=1,ssn,dis=0;
int count=0;
char s[100];
struct node
{
    int info;
    struct node *ptr;
}*front,*rear,*temp,*front1;
void menu()
{
        printf("\n\n");
        printf("********************************\n");
        printf("1. DATA Entry for Serial Number*\n");
        printf("2. Provide Service             *\n");
        printf("3. Remaining list for service  *\n");
        printf("4. Check Previous appointments *\n");
        printf("5. LogOut                      *\n");
        printf("********************************\n");
}
void logo()
{
        printf("***************************************\n");
        printf("* SELFLESS TRUST OF HELPING OURSELVES *\n");
        printf("***************************************\n");
}
void LOGIN()
{
    printf("\n\n");
    printf("****************************************\n");
    printf("*    A Project Of Customer Service     *\n");
    printf("*                  By                  *\n");
    printf("*            MD.SHIAM PRODHAN          *\n");
    printf("*               181014123              *\n");
    printf("*           Department of CSE          *\n");
    printf("*University of Liberal Arts Bangladesh *\n");
    printf("****************************************");
    printf("\n\n");
    printf("****************************************\n");
    printf("            LOG IN                      \n");
    printf("     Enter your USER ID  : ");
    scanf("%d",&ID);
    printf("     Enter your PASSWORD : ");
    scanf("%d",&Password);
    printf("***************************************\n");
}
void procedure()
{
    printf("\nPlease choose your option : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            {
                serial++;
                printf("Serial no : %d \n",serial);
                printf("Enter SSN : ");
                scanf("%d",&ssn);
                entry(ssn);
                dis++;
                break;
            }
        case 2:
            {
                service();
                break;
            }
        case 3:
            {
                display();
                printf("Total number of entry : %d\n",count);
                break;
            }
        case 4:
            {
                check();
                break;
            }
        case 5:
            {
                 printf("\n\nLogging Out");
                    for(m=1;m<=5;m++)
                        {
                            printf(".");
                            Sleep(400);
                        }
            printf("\n\n--------------------------------\n");
            s[23]='T';s[26]='n';s[29]='Y';s[32]='.';s[35]='a';s[38]=' ';s[41]='G';s[44]='D';s[47]='a';s[50]=':';
            s[24]='h';s[27]='K';s[30]='o';s[33]=' ';s[36]='V';s[39]='A';s[42]='o';s[45]=' ';s[48]='Y';s[51]='-';
            s[25]='A';s[28]=' ';s[31]='U';s[34]='H';s[37]='e';s[40]=' ';s[43]='o';s[46]='D';s[49]=' ';s[52]=')';
                for(l=23;l<=52;l++)
                {
                    Sleep(100);
                    printf("%c",s[l]);
                }
                Sleep(200);
                printf("\n--------------------------------\n");
                Sleep(1000);
                exit(-1);
                break;
            }
        default:
            {
                printf("\nWrong Input...Try again!\n");
                break;
            }
    }
        system("pause");
        system("cls");
        logo();
        menu();
        procedure();
}
void entry(int SSN)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = SSN;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = SSN;
        temp->ptr = NULL;

        rear = temp;
    }
    count++;
    printf("\n\nData Stored! Please wait until your serial comes!\n\n");
}
    void display()
{
    front1 = front;

    if ((front1 == NULL) && (rear == NULL))
    {
        printf("\nNo customers available!\n");
        serial=0;
        return;
    }
    printf("\n\nWaiting List for Service:\n");
    while (front1 != rear)
    {
        printf("SSN : %d \n", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("SSN : %d \n", front1->info);
}
void service()
{
    front1 = front;

    if (front1 == NULL)
    {
        printf("\n\nError: No customers Available!\n\n");
        serial2=1;
        serial=0;
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("Serviced Provided to ");
            printf("Serial : %d || SSN : %d \n",serial2, front->info);
            free(front);
            front = front1;
            serial2++;
        }
        else
        {
            printf("Serviced Provided to ");
            printf("Serial : %d || SSN : %d \n",serial2, front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }

        count--;
}
void create()
{
    front = rear = NULL;
}
int frontelement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}
void check()
{
     if ((front == NULL) && (rear == NULL))
        printf("\nThere are No PREVIOUS APPOINMENTS\n\n");
}
int main()
{
        printf("***************************************\n");
        printf("*    S        T        H        O     *\n");
        printf("***************************************\n");
        LOGIN();
        if(ID==181014123&&Password==12345)
        {
            s[0]='W';s[3]='C';s[6]='E';s[9]='O';s[12]='H';s[15]='S';s[18]='T';s[21]='R';
            s[1]='E';s[4]='O';s[7]=' ';s[10]=' ';s[13]='E';s[16]='O';s[19]='W';s[22]='E';
            s[2]='L';s[5]='M';s[8]='T';s[11]='T';s[14]=' ';s[17]='F';s[20]='A';
            printf("\nPlease Wait");
        for(m=1;m<=5;m++)
        {
            printf(".");
            Sleep(400);
        }

        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t");
        for(k=0;k<=22;k++)
            {
                printf("%c",s[k]);
                Sleep(200);
            }
        Sleep(1000);
        system("cls");
        logo();
        menu();
        procedure();
        }
        else
        {
            printf("\nPlease Wait");
            for(m=1;m<=5;m++)
            {
                printf(".");
                Sleep(400);
            }
            printf("\nIncorrect User ID or Password!\nPlease try again!!\n\n");
            system("pause");
            system("cls");
            main();
        }
getch();
return 0;
}
