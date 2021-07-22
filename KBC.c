#include<stdio.h>
#include<stdlib.h>

void main()
{
 int i,n=0,amount=0,m,x=0,y=0;
 char ques1[]="Q1. Which fruit fell on Newton's head\n\t1. Banana \t2. Water Melon \t3. Apple \t4. Mango\n";
 char ques2[]="Q2. Union territory of India aamong the following:\n\t1. Dehradun  \t2. Haridwar \t3. Delhi \t4. Jaipur\n";
 char ques3[]="Q3. Bahubali festival is related to:\n\t1. Jain \t2. Islam \t3. Hindu \t4. Christian\n";
 char ques4[]="Q4. World health is observed on:\n1. April 28 \t2. April 7 \t3. March 15 \t4. November 26\n";
 char ques5[]="Q5. In MICR, C stands for:\n\t1. Code \t2. Colour \t3. Computer \t4. Character\n";
 char ques6[]="Q6. Rath Yatra is famous festival at:\n\t1. Puri \t2. Dwarka \t3. Mathura\t4. Ayodhya\n";
 char ques7[]="Q7. All of the logic and mathematical calculations done by the computer happen in/ on the:\n\t1. system board \t2. central control unit \t3. central processing unit \t4. mother board\n";
 char ques8[]="Q8. Onam is the main festival of:\n\t1. Kerala \t2. Madhya Pradesh \t3. Karnataka \t4. Tamil Nadu\n";
 char ques9[]="Q9. The process of preparing a floppy disk for use is called:\n\t1. assembling \t2. translating \t3. parsing \t4. formatting\n";
 char ques10[]="Q10. Nandayal is situated in:\n\t1. Andhra Pradesh \t2. Arunachal Pradesh \t3. Maharastra	\t4. Karnataka\n";
 char ques11[]="Q11. The instructions for starting the computer are housed in:\n\t1. RAM \t2. CD-ROM \t3. ROM Chip \t4. None of these\n";
 char ques12[]="Q12. The ___ controls communications for the entire computer system:\n\t1. arithmetic-logic unit \t2. semiconductor \t3. motherboard \t4. coprocessor\n";
 char ques13[]="Q13. The Konark Temple is dedicated to :\n\t1. Brahma \t2. Krishna \t3. Shani Dev \t4. Surya Dev\n";
 char ques14[]="Q14. Which motherboard form factor uses one 20 pin connector:\n\t1. Baby AT \t2. AT \t3. ATX \t4. ATS\n";
 char *question[14];
 question[0]=ques1;
 question[1]=ques2;
 question[2]=ques3;
 question[3]=ques4;
 question[4]=ques5;
 question[5]=ques6;
 question[6]=ques7;
 question[7]=ques8;
 question[8]=ques9;
 question[9]=ques10;
 question[10]=ques11;
 question[11]=ques12;
 question[12]=ques13;
 question[13]=ques14;
 
 int amt[]={5000,10000,20000,40000,80000,160000,320000,640000,1250000,2500000,5000000,10000000,30000000,70000000};
 int corr[]={3,3,1,2,4,1,3,1,4,4,3,3,4,3};
 
 char life1[]="50:50 lifeline is activated..\nTwo options left are:\n\t2. Water Melon \t3. Apple\n";
 char life2[]="50:50 lifeline is activated..\nTwo options left are:\n\t2. Haridwar \t3. Delhi\n";
 char life3[]="50:50 lifeline is activated..\nTwo options left are:\n\t1. Jain \t2. Islam\n";
 char life4[]="50:50 lifeline is activated..\nTwo options left are:\n\t1. April 28 \t2. April 7\n";
 char life5[]="50:50 lifeline is activated..\nTwo options left are:\n\t1. Code \t4. Character\n";
 char life6[]="50:50 lifeline is activated..\nTwo options left are:\n\t1. Puri \t2. Dwarka\n";
 char life7[]="50:50 lifeline is activated..\nTwo options left are:\n\t3. central processing unit \t4. motherboard\n";
 char life8[]="50:50 lifeline is activated..\nTwo options left are:\n\t1. Kerala \t3. Karnataka\n";
 char life9[]="50:50 lifeline is activated..\nTwo options left are:\n\t1. assembling \t4. formatting\n";
 char life10[]="50:50 lifeline is activated..\nTwo options left are:\n\t3. Maharastra \t4. Karnataka\n";
 char life11[]="50:50 lifeline is activated..\nTwo options left are:\n\t1. RAM \t4. ROM chip\n";
 char life12[]="50:50 lifeline is activated..\nTwo options left are:\n\t3. motherboard \t4. coprocessor\n";
 char life13[]="50:50 lifeline is activated..\nTwo options left are:\n\t3. Shani Dev \t4. Surya Dev\n";
 char life14[]="50:50 lifeline is activated..\nTwo options left are:\n\t2. AT \t3. ATX\n";
 char *lifeline[14];
 lifeline[0]=life1;
 lifeline[1]=life2;
 lifeline[2]=life3;
 lifeline[3]=life4;
 lifeline[4]=life5;
 lifeline[5]=life6;
 lifeline[6]=life7;
 lifeline[7]=life8;
 lifeline[8]=life9;
 lifeline[9]=life10;
 lifeline[10]=life11;
 lifeline[11]=life12;
 lifeline[12]=life13;
 lifeline[13]=life14;

 printf("Welcome to the game KAUN BANEGA CROREPATI\n\nIt contains 14 QUESTIONS starting from Rs.5,000 reaching till Rs.7,00,00,000.\n\nYou have 2 lifelines : 50:50(two options will be filtered) and double-dip(you can make choice two times).\nYou can quit anytime by typing '0' but you can't quit once you activate double-dip.\nTo activate 50:50 lifeline,type '5050'; for double-dip, type '22'.\n\n");
 printf("Prizes:\n 14\t7CRORE\n 13\t3CRORE\n 12\t1CRORE\n 11\t50,00,000\n 10\t25,00,000\n 9\t12,50,000\n 8\t6,40,000\n 7\t3,20,000\n 6\t1,60,000\n 5\t80,000\n 4\t40,000\n 3\t20,000\n 2\t10,000\n 1\t5,000\n\n");
 printf("Select your checkpoint question (that will guarantee some winnings if correct). If your answer gets wrong you will get this selected prize. If you haven't reached this question and give wrong answer you will be left with no winnings.\n\n");
 printf("Checkpoint Question:");
 scanf("%d",&m);
 
  for(i=0;i<14;i++)
 {
  n=0;
   printf("%s",question[i]);
   scanf("%d",&n);
   if(i==m)
   {
       amount=amt[i-1];
   }
   if(n==corr[i] && i!=13)
    {  
      printf("You have entered the correct answer. You have won Rs.%d.\n\nYour Next Question is:\n",amt[i]);
    }
    else if(n==corr[i] && i==13)
    {  
      printf("You have entered the correct answer. You have won Rs.%d.\n\nCONGRATULATIONS",amt[i]);
    }
   
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.%d",amt[i-1]);
       i=15;
   }
   
   else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("%s",lifeline[i]);
       scanf("%d",&n);
         if(n==corr[i] && i!=13)
        {  
          printf("You have entered the correct answer. You have won Rs.%d.\n\nYour Next Question is:\n",amt[i]);
        }
       else if(n==corr[i] && i==13)
        {  
          printf("You have entered the correct answer. You have won Rs.%d.\n\nCONGRATULATIONS",amt[i]);
        }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.%d",amt[i-1]);
             i=15;
          }
          else
           {
              if(i+1<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i--;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
       if(n==corr[i] && i!=13)
        {  
          printf("You have entered the correct answer. You have won Rs.%d.\n\nYour Next Question is:\n",amt[i]);
        }
       else if(n==corr[i] && i==13)
        {  
          printf("You have entered the correct answer. You have won Rs.%d.\n\nCONGRATULATIONS",amt[i]);
        }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
              if(n==corr[i] && i!=13)
              {  
                printf("You have entered the correct answer. You have won Rs.%d.\n\nYour Next Question is:\n",amt[i]);
               }
              else if(n==corr[i] && i==13)
               {  
                 printf("You have entered the correct answer. You have won Rs.%d.\n\nCONGRATULATIONS",amt[i]);
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                    if(n==corr[i] && i!=13)
                      {  
                        printf("You have entered the correct answer. You have won Rs.%d.\n\nYour Next Question is:\n",amt[i]);
                      }
                    else if(n==corr[i] && i==13)
                      {  
                        printf("You have entered the correct answer. You have won Rs.%d.\n\nCONGRATULATIONS",amt[i]);
                      }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                             if(n==corr[i] && i!=13)
                             {  
                             printf("You have entered the correct answer. You have won Rs.%d.\n\nYour Next Question is:\n",amt[i]);
                             }
                            else if(n==corr[i] && i==13)
                            {  
                             printf("You have entered the correct answer. You have won Rs.%d.\n\nCONGRATULATIONS",amt[i]);
                            }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                          if(n==corr[i] && i!=13)
                             {  
                             printf("You have entered the correct answer. You have won Rs.%d.\n\nYour Next Question is:\n",amt[i]);
                             }
                            else if(n==corr[i] && i==13)
                            {  
                             printf("You have entered the correct answer. You have won Rs.%d.\n\nCONGRATULATIONS",amt[i]);
                            }
                               else
                               {
                                   if(i+1<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i+1<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==corr[i] && i!=13)
                     {  
                       printf("You have entered the correct answer. You have won Rs.%d.\n\nYour Next Question is:\n",amt[i]);
                     }
                       else if(n==corr[i] && i==13)
                     {  
                       printf("You have entered the correct answer. You have won Rs.%d.\n\nCONGRATULATIONS",amt[i]);
                     }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==corr[i] && i!=13)
                             {  
                             printf("You have entered the correct answer. You have won Rs.%d.\n\nYour Next Question is:\n",amt[i]);
                             }
                            else if(n==corr[i] && i==13)
                            {  
                             printf("You have entered the correct answer. You have won Rs.%d.\n\nCONGRATULATIONS",amt[i]);
                            }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==corr[i] && i!=13)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.%d.\n\nYour Next Question is:\n",amt[i]);
                               }
                               else if(n==corr[i] && i==13)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.%d.\n\nCONGRATULATIONS",amt[i]);
                               }
                               else
                               {
                                   if(i+1<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i+1<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
     else if(n==22 && y!=0)
   {
       printf("You have already used double-dip liifeline.\n");
       i--;
       continue;
   }

   else
   {
       if(i+1<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
       i=15;
   }
   }
   }