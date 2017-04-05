#include<stdio.h>
//include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//#include<windows.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
{
     int countr,r,r1,count,i,n,row=2,col=10;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\t     C PROGRAM QUIZ GAME\n");
     printf("\n________________________________________________________________________________");

     printf("\n\n\tThis is a simple c program designed for a quiz game.The whole \n\tprogram is designed using some basic concepts of programming \n\tlanguage C.\n\n\tMembers included in our group are\n\n\n\t\t1.TARUN BHARDWAJ      201552063\n\t\t2.RAJAT SONI          201552047\n\t\t3.SONAM KUMARI        201551079\n\t\t4.CHETANYA SHRIMALI   201552064\n\t\t5.VASUDEV PRAJAPAT    201552055");
     printf("");
     getch();
     system("cls");
     //gotoxy(2,10);
     printf("                            WELCOME TO THE GAME");
     printf("\n\n\t\t      BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n________________________________________________________________________________");
     printf("\n________________________________________________________________________________");
     printf("\n\t\t> Press S to start the game");
     printf("\n\t\t> Press V to view the highest score  ");
     printf("\n\t\t> Press R to reset score");
     printf("\n\t\t> Press H for help            ");
     printf("\n\t\t> Press Q to quit             ");
     printf("\n________________________________________________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
        show_record();
        goto mainhome;
	}
     else if (choice=='H')
	{
        help();getch();
        goto mainhome;
	}
	else if (choice=='R')
	{
	    reset_score();
        getch();
        goto mainhome;
    }
    else if (choice=='Q')
        exit(1);
    else if(choice=='S')
    {
        system("cls");
        printf("\n________________________________________________________________________________");
        printf("\n\n\n\n\n\n\n\n\n\t\tRegister your name:");
        gets(playername);

        system("cls");
        printf("\n\t\t\tWelcome %s to C Program Quiz Game",playername);
        printf("\n\nHere are some tips you might wanna know before playing:");
        printf("\n--------------------------------------------------------------------------");
        printf("\n\n\t >>There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n\n\t >>In warmup round you will be asked a total of 3 questions to test your");
        printf("\t    general knowledge. You are eligible to play the game if you give ");
        printf("\n\t    atleast 2 right answers, otherwise you can't proceed further to the \t    Challenge Round.");
        printf("\n\n\t >>Your game starts with CHALLANGE ROUND. In this round you will be ");
        printf("\n\t    asked a total of 10 questions. Each right answer will be awarded ");
        printf("\n\t    Rs100,000! By this way you can win upto ONE LAKH cash prize!!!!!");
        printf("\n\n\t >>You will be given 4 options and you have to press A, B ,C or D for ");
        printf("\n\t    the right option.");
        printf("\n\n\t >>You will be asked questions continuously, till right answers are \n\t    given");
        printf("\n\n\t >>No negative marking for wrong answers!");
        printf("\n\n\n\t\t\t              ALL THE BEST ");
        printf("\n\n\n\t Press Y  to start the game!\n");
        printf("\n\t Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
    {
        goto home;
    }
	else
    {
        goto mainhome;
       system("cls");
    }
    home:
        system("cls");
        count=0;
        int r1[]={1,2,3,4,5,6};
        for(i=1;i<=3;i++)
        {
            system("cls");

            rand();

            switch(r1[i])
            {
                case 1:
                    printf("\n\nWhich of the following is a Palindrome number?");
                    printf("\n\nA.42042\nB.101010\nC.23232\nD.01234");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");count++;
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is C.23232");
                        getch();
                        break;
                    }

                case 2:
                    printf("\n\n\nThe country with the highest environmental performance index is...");
                    printf("\n\nA.France\nB.Denmark\nC.Switzerland\nD.Finland");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");count++;
                        getch();
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is C.Switzerland");
                        getch();
                        break;
                    }

                    case 3:
                        printf("\n\n\nWhich animal laughs like human being?");
                        printf("\n\nA.Polar Bear\nB.Hyena\nC.Donkey\nD.Chimpanzee");
                        if (toupper(getch())=='B')
                        {
                            printf("\n\nCorrect!!!");count++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\nWrong!!! The correct answer is B.Hyena");
                            getch();
                            break;
                        }

                    case 4:
                        printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
                        printf("\n\nA.Wayne Rooney\nB.Lucas Podolski\nC.Lionel Messi\nD.Christiano Ronaldo");
                        if (toupper(getch())=='B')
                        {
                            printf("\n\nCorrect!!!");count++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
                            getch();
                            break;
                        }

        case 5:
        printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\nB.Mt. Kanchanjungha\nC.Mt. Makalu\nD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhat is the group of frogs known as?");
		printf("\n\nA.A traffic\nB.A toddler\nC.A police\nD.An Army");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.An Army");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\tCONGRATULATION %s you are eligible to play the Game",playername);
     printf("\n\n\n\n\tPress any key to Start the Game");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     int r[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
     for(i=1;i<=10;i++)
     {system("cls");
     rand();

     switch(r[i])
		{
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\nB.Basketball\nC.Cricket\nD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\nB.Cosmology\nC.Orology\nD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\nB.7\nC.8\nD.9");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.8");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\nB.Tesla\nC.Maxwell\nD.Coulomb");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\nB.Watt\nC.Power\nD.Units");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Power");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich element is found in Vitamin B12?");
		printf("\n\nA.Zinc\nB.Cobalt\nC.Calcium\nD.Iron");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Cobalt");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\nB.Hellas\nC.Drukyul\nD.Nippon");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nHow many times a piece of paper can be folded at the most?");
		printf("\n\nA.6\nB.7\nC.8\nD.Depends on the size of paper");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.7");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\nB.Helsinki\nC.Ajax\nD.Galatasaray");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Copenhagen");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\nB.Koshi\nC.Ganga\nD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;goto score;}

        case 11:
		printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
		printf("\n\nA.White\nB.Black\nC.Orange\nD.Red");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Orange");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
		printf("\n\nA.Rome\nB.Vactican City\nC.Madrid\nD.Berlin");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Rome");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nName the country where there no mosquitoes are found?");
		printf("\n\nA.Japan\t\tB.Italy\nC.Argentina\nD.France");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.France");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
		printf("\n\nA.Narayan Wagle\nB.Lal Gopal Subedi\nC.B.P. Koirala\nD.Khagendra Sangraula");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\nB.AB\nC.B\nD.O");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.AB");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\nB.Coulomb\nC.Nautical Mile\nD.Kilometer");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Light Year");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nThe country famous for Samba Dance is........");
		printf("\n\nA.Brazil\nB.Venezuela\nC.Nigeria\nD.Bolivia");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Brazil");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nWind speed is measure by__________?");
		printf("\n\nA.Lysimeter\nB.Air vane\nC.Hydrometer\nD.Anemometer\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Anemometer");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
		printf("\n\nA.Delhi\nB.Bhaktapur\nC.Kathmandu\nD.Agra\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Kathmandu");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\nB.Valves\nC.I.C\nD.S.S.I");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Valves");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
		printf("\n\nA.L.P.G\nB.Nitrogen\nC.Methane\nD. C.F.C");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. C.F.C");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\nWho won the Women's Australian Open Tennis in 2007?");
		printf("\n\nA.Martina Hingis\nB.Maria Sarapova\nC.Kim Clijster\nD.Serena Williams");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Serena Williams");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
		printf("\n\nA.The Secret in their Eyes\nB.Shutter Island\nC.The King's Speech\nD.The Reader");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.The King's Speech");getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*10000;
	if(score>0.00 && score<100000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t\t\t\tYou won Rs.%.2f",score);goto go;}

	 else if(score==100000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU WON THE GAME!!!!!!!!!");
	    printf("\n\t\t You won Rs.%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n\t\t\tHELP");
    printf("\n________________________________________________________________________________");
    printf("\n\t\tC program Quiz Game");
    printf("\n\n>> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n\n>> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n\n>> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n\n>> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n\n>> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n\n>> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
