#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
char plain[MAX],cipher[MAX],brute[MAX],copy[MAX],brute[MAX];

void encrypt()
{
    int key;
    printf("\nEnter the plain text to encrypt: ");
    scanf("%19s",plain);
    again:
    printf("\nEnter the key value (key value must lies b/w 1 to 25) : ");
    scanf("%2d",&key);
    if(key < 0 || key >= 25)
    {
           printf("\nEnter valid key\a\n\n");
           goto again;
    }



   for(int i = 0 ; i < strlen(plain); i++)
        plain[i] = plain[i]+key;

    printf("\nCipher Text : %s",plain);


}

void decrypt()
{
        int key;

        printf("\nEnter the cipher to decrypt : ");
        scanf("%19s",cipher);
       again:
    printf("\nEnter the key value (key value must lies b/w 1 to 25) : ");
    scanf("%2d",&key);
    if(key < 0 || key >= 25)
    {
           printf("\nEnter valid key\a\n\n");
           goto again;
    }
    for(int i = 0 ; i < strlen(cipher); i++)
        cipher[i] = cipher[i]-key;


            printf("\nPlain Text : %s",cipher);

}

void bruteforce(int key)
{


      for(int i = 0; brute[i] != '\0' ;i++)
        copy[i] = brute[i];


        for(int i = 0 ; i < strlen(copy) ;i++)
        copy[i] = copy[i]-key;

        printf("\n\nKEY %d : %s",key,copy);


        if(key == 25)
            return;
        else
            bruteforce(key+1);
}
main()
{
    int choice;

    while(1)
    {
        system("color 02");
        printf("\n\nCHOOSE OPTION\n1.Caesar Cipher Encrypt\n2.Caesar Cipher Decrypt\n3.BruteForce Caesar Cipher\n4.Exit\nEnter Your Choice : ");
        scanf("%1d",&choice);
        switch(choice)
        {

            case 1 : encrypt();
                        break;
            case 2 : decrypt();
                        break;
            case 3 : printf("\nEnter the Cipher Text : ");
                        scanf("%19s",brute);
                        bruteforce(1);
                        break;
            case 4 : system("cls");
                   system("color 03");
                  printf("\t\t\t\t\tCoded By ->IT's Nemi\n\n\n\n\n\n\n\a");
                        exit(0);
                        break;

            default : printf("\nEnter the valid option");
                                    break;
        }

    }


}
