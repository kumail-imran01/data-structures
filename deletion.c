#include<stdio.h>

#define SIZE 100

int arr[100],size,i;


void searchByVal(int [], int);
void delByVal(int [], int);
void display(int [], int);
void menu(void);

void delByVal(int arr [], int size){
    int i, pos;
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("Enter the element position to delete : ");
    scanf("%d", &pos);



    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {

        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

                size--;

        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }


}

void searchByVal(int arr[], int size){

    int i, toSearch, found;

    for( i=0; i< size;i++)
    {
        printf("\t\tEnter the %d element : \n\n\t\t\t\t\t\t",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);


    found = 0;

    for(i=0; i<size; i++)
    {

            if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }


    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

}

void display(int arr[], int size){
    int i;

    for( i=0; i< size;i++)
    {
        printf("\nEnter the %d element : \n",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size;i++)
        {
            printf("\nThe %d element of array is %d\n",i+1,arr[i]);
        }

}

void menu(){

int choice,again=1;
do{
printf("1). Delete by Value\n2). Search By Value\n3). Display the Array\n\n\n");

    printf("Enter your choice:\n");
    scanf("%d",&choice);

    switch(choice){

    case 1:{
        delByVal(arr,size);
        printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
        printf("Do you want to proceed again : \nIf ""YES"" then press '1' else press any key to exit :");
        scanf("%d",&again);

        if(again==1)
           menu();
        else
        break;
    }

    case 2:{
    searchByVal(arr,size);
    printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
        printf("Do you want to proceed again : \nIf ""YES"" then press '1' else press any key to exit :");
        scanf("%d",&again);

        if(again==1)
           menu();
        else
        break;


    }

    case 3:
        {
        display(arr,size);
        printf("\n--------------------------------------------------------------------------------------------------------------------------\n");
        printf("Do you want to proceed again : \nIf ""YES"" then press '1' else press any key to exit :");
        scanf("%d",&again);

        if(again==1)
           menu();
        else
        break;


        }


    }
}while(again==0);

}

int main(){

    int choice;


    printf("\n\n---------------------------------------------------------------------------------------------------------------------\n\n");
    printf("----------------------------------DATA STRUCTURES AND ALGORITHMS LAB ASSIGNMENT 1--------------------------------------- \n");
    printf("\nNAME : KUMAIL IMRAN\nREG NO : CIIT/FA20-BSE-110/LHR\nSECTION : A\nLAB INSTRUCTOR : MAM FATIMA ZULFIQAR\n\n-----------------------------------------------------------------------------------------------------------------------\n\n");
    printf("---------------------------------------------------------------------------------------------------------------------\nEnter the size of Array : \n");
    scanf("%d",&size);

    menu();

return 0;

}
