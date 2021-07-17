#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
char user_input[];
int main()
{  
	system("cls");
    printf("~~~:Welcome to AI ChatBot:~~~\n");
    while(1)
    {
     printf("user ==> ");
     gets(user_input);
     if(strcmp(user_input,"exit")==0)
     {
         system("cls");
         printf("bot ==> Okay bye, Have a Good day sir...!\n");
         break;
     }
      else if(strcmp(user_input,"hey")==0)
     {
         printf("bot ==> Hi sir\n");
     }
     else if(strcmp(user_input,"hi")==0)
     {
         printf("bot ==> Hello sir\n");
     }
     else if(strcmp(user_input,"what is your name?")==0)
     {
        printf("bot ==> Im AI ChatBot\n");
     }
     else if(strcmp(user_input,"how are you?")==0)
     {
        printf("bot ==> Im Fine.\n");
        printf("\tWhat can I do for you sir?\n ");
     }
     else if(strcmp(user_input,"thank you")==0)
     {
         printf("bot ==> it's My pleasure sir!\n");
     }
     else if(strcmp(user_input,"open chrome")==0)
     {
         printf("ok sir , opeaning chrome browser\n");
         system("start chrome");
     }
     else if(strcmp(user_input,"open notepad")==0)
     {
         printf("ok sir , opeaning notpad editor \n");
         system("start notepad");
     }
     else if(strcmp(user_input,"open cmd")==0)
     {
         printf("ok sir , opeaning cmd terminal \n");
         system("start cmd");
     }
     else if(strcmp(user_input,"open youtube")==0)
     {
        printf("ok sir , opeaning YouTube \n");   
        system("start http://youtube.com");   
     }
    }
    return 0;
};
