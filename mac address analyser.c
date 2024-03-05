#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char c1, c2, c3, c4, c5, c6, c7, c8, c9 ,c10, c11, c12;
    char l1, l2, l3, l4, l5;
    int mac_true, choice, glob_loc_calculator;

    printf("Welcome to MAC analyser!\n");
    //do-while loop for checking if MAC address is valid or not
    do
    {
        printf("\nPlease enter a MAC address:");
        scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", &c1, &c2, &l1, &c3, &c4, &l2, &c5, &c6, &l3, &c7, &c8, &l4, &c9, &c10, &l5, &c11, &c12);
        if(((c1>='A' && c1<='F') || (c1>=48 && c1<=57)))
        {
           if(((c2>='A' && c2<='F') || (c2>=48 && c2<=57)))
           {
               if(((c2>='A' && c2<='F') || (c2>=48 && c2<=57)))
               {
                   if(((c3>='A' && c3<='F') || (c3>=48 && c3<=57)))
                   {
                       if(((c4>='A' && c4<='F') || (c4>=48 && c4<=57)))
                       {
                           if(((c5>='A' && c5<='F') || (c5>=48 && c5<=57)))
                           {
                               if(((c6>='A' && c6<='F') || (c6>=48 && c6<=57)))
                               {
                                   if(((c7>='A' && c7<='F') || (c7>=48 && c7<=57)))
                                   {
                                       if(((c8>='A' && c8<='F') || (c8>=48 && c8<=57)))
                                       {
                                           if(((c9>='A' && c9<='F') || (c9>=48 && c9<=57)))
                                           {
                                               if(((c10>='A' && c10<='F') || (c10>=48 && c10<=57)))
                                               {
                                                   if(((c11>='A' && c11<='F') || (c11>=48 && c11<=57)))
                                                   {
                                                       if(((c12>='A' && c12<='F') || (c12>=48 && c12<=57)))
                                                       {
                                                           mac_true=1;
                                                       }
                                                       else
                                                       {
                                                           mac_true=0;
                                                       }
                                                   }
                                               }
                                           }
                                       }
                                   }
                               }
                           }
                       }
                   }
               }
           }

        }
        if(mac_true==1)
        {
            printf("\nThis is valid!");
        }
        else
        {
            printf("This is not a valid MAC Address!");
        }
    }

    while(mac_true==0);

//end of the MAC validation check
//Menu loop below

    do
    {
        printf("\n\n====================\n");
        printf("1. Is It Unicast or Multicast?\n");
        printf("2. Is It Global or Local?\n");
        printf("3. What is the Manufacturer Info?\n");
        printf("4. Enter Another MAC address\n");
        printf("5. Exit\n");
        printf("\n\n====================\n");

        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:  //second character mod 2 gives us the answer to this specific question, unicast for even numbers, multicast for odd ones, opposite for letters.
            if(c2>=48 && c2<=57)
            {
                if(c2%2==0)
                {
                    printf("\nMAC address is Unicast. First bit=0");
                }
                else
                {
                    printf("\nMAC address is Multicast. First bit=1");
                }

            }
            else if(c2>='A' && c2<='F')
                {
                    if(c2%2==0)
                    {
                        printf("\nMAC address is Multicast. First bit=1");
                    }
                    else
                    {
                        printf("\nMAC address is Unicast. First bit=0");
                    }
                }
            break;

        case 2:
            glob_loc_calculator=c1+c2;

            if(glob_loc_calculator%4==3 || glob_loc_calculator%4==2)
            {
                printf("\nLocal. Second bit=1");
            }
            else if(glob_loc_calculator%4==0 || glob_loc_calculator%4==1)
            {
                printf("\nGlobal. Second bit=0");
            }

            break;

        case 3:
            if(c1=='C' && c2=='C' && c3==52 && c4==54 && c5=='D' && c6==54)
                printf("\nManufacturer is Cisco.");
            else if(c1==48 && c2==48 && c3==48 && c4==56 && c5==50 && c6==48)
                printf("\nManufacturer is Cisco.");
            else if(c1==51 && c2=='C' && c3==53 && c4=='A' && c5=='B' && c6==52)
                printf("\nManufacturer is Google.");
            else if(c1==48 && c2==48 && c3==57 && c4=='A' && c5=='C' && c6=='D')
                printf("\nManufacturer is Huawei.");
            else
                printf("\nUnknown manufacturer.");

            break;

        case 4:
            do
            {
                printf("\nPlease enter a MAC address:");
                scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", &c1, &c2, &l1, &c3, &c4, &l2, &c5, &c6, &l3, &c7, &c8, &l4, &c9, &c10, &l5, &c11, &c12);
                if(((c1>='A' && c1<='F') || (c1>=48 && c1<=57)))
                {
                    if(((c2>='A' && c2<='F') || (c2>=48 && c2<=57)))
                    {
                        if(((c2>='A' && c2<='F') || (c2>=48 && c2<=57)))
                        {
                            if(((c3>='A' && c3<='F') || (c3>=48 && c3<=57)))
                            {
                                if(((c4>='A' && c4<='F') || (c4>=48 && c4<=57)))
                                {
                                    if(((c5>='A' && c5<='F') || (c5>=48 && c5<=57)))
                                    {
                                        if(((c6>='A' && c6<='F') || (c6>=48 && c6<=57)))
                                        {
                                            if(((c7>='A' && c7<='F') || (c7>=48 && c7<=57)))
                                            {
                                                if(((c8>='A' && c8<='F') || (c8>=48 && c8<=57)))
                                                {
                                                    if(((c9>='A' && c9<='F') || (c9>=48 && c9<=57)))
                                                    {
                                                        if(((c10>='A' && c10<='F') || (c10>=48 && c10<=57)))
                                                        {
                                                            if(((c11>='A' && c11<='F') || (c11>=48 && c11<=57)))
                                                            {
                                                                if(((c12>='A' && c12<='F') || (c12>=48 && c12<=57)))
                                                                {
                                                                    mac_true=1;
                                                                }
                                                                else
                                                                {
                                                                    mac_true=0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }

                }
                if(mac_true==1)
                {
                    printf("\nThis is valid!");
                }
                else
                {
                    printf("\nThis is not a valid MAC Address!");
                }
            }

            while(mac_true==0);

            fflush(stdin); //for eliminating extra menu switch executions.

            break;

        case 5:
            printf("\nBye!\n");

            break;

        default:
            printf("\nWrong number, enter again:");
            break;
        }
    }

    while(choice!=5);
//end of menu loop



    return 0;
}
