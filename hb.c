#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void green(){
    printf("\033[0;32m");
}
void red(){
    printf("\033[1;31m");
}
void purple(){
    printf("\e[0;34m");
}

void yellow(){
    printf("\033[0;33m");
}
void cyan(){
    printf("\033[1;36m");
}

void reset () {
  printf("\033[0m");
}

void wry_opt(){
    red();
    printf("You enter a wrong option !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("\n");
    reset();
    printf("Now enter a right option\n");
    printf("\n");
}

void data(char na[20], char gyu[10],int dba){
    green();
    printf("Your vacination is successfully booked\n\n");
    yellow();
    printf("Name of the person:%s\n",na);
    printf("\n");
    printf("Gender:%s\t",gyu);
    printf("DOB:%d\n",dba);
    reset();
}

void func (int fn){
            int pc;
            int ac;
            char bc;
            // bct:
            switch (fn)
            {
            case 1:
                printf("Enter your addhar card number:\n", ac);
                scanf("%d", &ac);
                break;
            case 2:
                printf("Enter your passport card number:\n", pc);
                scanf("%d", &pc);
                break;
            case 3:
                printf("Enter your PAN card number:\n", bc);
                scanf("%c", &bc);
                scanf("%[^\n]",&bc);
                break;    
            }
            printf("\n");

}
int main()
{
    long long  a;
    int c = 0;
    int b, s, t;
    char nam;
    int hb = 100000, gb = 999999;
    srand(time(NULL));
    number:
    cyan();
    printf("****************************************************************************************************************************\n");
    printf("*                                                WELCOME TO COVID VACCINATION                                              *\n");
    printf("****************************************************************************************************************************\n\n");
    reset();
    printf("Enter your mobile number which you want to register:\n\n",a);
    scanf("%lld", &a);

    do{
        a = a / 10;
        ++c;
    } while(a != 0);

    if(c>10 || c<10){
        red();
        printf("Invalid number\n");
        reset();
        printf("Please enter the 10 digit number\n");
        c = 0;
        goto number;
    }
    
    otp:
    yellow();
    b = (rand() % (gb - hb + 1)) + 1;
    printf("This is your otp: %d\n", b);
    reset();
    printf("Enter your OTP:\n");
    scanf("%d", &s);
    if (s != b)
    {
        red();
        printf("Invalid OTP\n");
        reset();
        printf("re-enter your otp\n\n");
       
        goto otp;
    }

    if (s == b)
    {
        printf("WELCOME TO COVID VACCINATION:\n\n");
        not:
        printf("How many person do you want to register:\n", t);
        scanf("%d", &t);
        if(t>4){
            printf("Not more then four person\n");
            goto not;
        }
        int i;
        int k;
        char l[30];
        char l1;
        for (i = 1; i < t + 1; i++)
        {
        start:

            printf("Enter your name which is mention in your ID card:\n");
            scanf("%c",&l1);
            scanf("%[^\n]", l);
            printf("\n");
            btc:
            printf("Photo ID card type that you will bring to vaccination center:\n");
            printf("1.Addhar card\n");
            printf("2.Passport\n");
            printf("3.PAN card\n\n");
            printf("select your option\n", k);
            scanf("%d", &k);
            printf("\n");
            if(k<4){
                func(k);
            }
            else{
                red();
                printf("You enter the wrong option\n\n");
                reset();
                goto btc;
            }
            
            // func(k);

            char gen[10];
            printf("Enter your gender M/F :\n", gen);
            scanf("%s", gen);
            printf("\n");

            int db;
            printf("Year of birth:\n", db);
            scanf("%d", &db);

            if (db <= 2004)
            {
                green();
                printf("You are eligible for vaccination \n\n");
                reset();
            }
            else
            {
                red();
                printf("you are not eligible for vaccination \n\n");
                reset();
                goto start;
            }
            printf("Now you can book your veccine\n\n");
            int ne;
            int vac,cs;
            printf("Enter your pin code:\n", ne);
            scanf("%d", &ne);
            printf("\n");
            int co,ct;
            printf("1.Free\n");
            printf("2.Paid\n");

            printf("which vaccine do you want\n",vac);
            scanf("%d",&vac);
            if(vac== 1 ){
                wro:
                printf("1.Covishield\n");
                printf("2.Covaxin\n");
                printf("which type of vaccine do you want........ \n",cs);
                scanf("%d",&cs);
                if(cs==1){
                    jb:
                    printf("1. Noida ESIC \t Dose 1: 200\n\n");
                    printf("2. HB Hospital\t Dose 1: 200\n\n");
                    printf("3. Metro Hospital\t Dose 1: 200\n\n");
                    printf("4. kailash Hospital\t Dose 1: 200\n\n");
                    printf("choose your location:\n");
                    scanf("%d",&co);
                    if(co == 1){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("Noida ESIC \t Dose 1: 200\n");
                        reset();
                    }
                    else if(co == 2){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("HB Hospital\t Dose 1: 200\n");
                        reset();
                    }
                    else if(co == 3){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("Metro Hospital\t Dose 1: 200\n");
                        reset();
                    }
                    else if(co == 4){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("kailash Hospital\t Dose 1: 200\n");
                        reset();
                    }
                        
                    else{
                        printf("you enter a wrong options\n");
                        goto jb;
                    }
                    
                }
                else if(cs==2){
                    git:
                    printf("1. father agnel\t Dose 1: 200\n\n");
                    printf("2. Gip noida\t Dose 1: 200\n\n");
                    printf("3. RVS school\t Dose 1: 200\n\n");
                    printf("choose your location:\n");
                    scanf("%d",&ct);
                    if(ct == 1){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("father agnel\t Dose 1: 200\n");
                        reset();
                    }
                    else if(ct == 2){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("Gip noida\t Dose 1: 200\n");
                        reset();
                    }
                    else if(ct == 3){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("RVS school\t Dose 1: 200\n");
                        reset();
                    }
                    
                    else{
                        printf("you enter a wrong options\n");
                        goto git;
                    }
                }
                else{
                    wry_opt();
                    goto wro;
                }

                }
                else if(vac == 2){
                    int var,var_2,var_3;
                    wrt:
                    printf("1.Covishield\n");
                    printf("2.Covaxin\n");
                    printf("which type of vaccine do you want....... \n",var);
                    scanf("%d",&var);

                    if(var==1){
                    jbs:
                    printf("1. Noida ESIC \t Dose 1: 200\n\n");
                    printf("2. HB Hospital\t Dose 1: 200\n\n");
                    printf("3. Metro Hospital\t Dose 1: 200\n\n");
                    printf("4. kailash Hospital\t Dose 1: 200\n\n");
                    printf("choose your location:\n");
                    scanf("%d",&var_2);
                    if(var_2== 1){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("Noida ESIC \t Dose 1: 200\n");
                        reset();
                    }
                    else if(var_2 == 2){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("HB Hospital\t Dose 1: 200\n");
                        reset();
                    }
                    else if(var_2 == 3){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("Metro Hospital\t Dose 1: 200\n");
                        reset();
                    }
                    else if(var_2 == 4){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("kailash Hospital\t Dose 1: 200\n");
                        reset();
                    }
                        
                    else{
                        printf("you enter a wrong options\n");
                        goto jbs;
                    }
                    
                }
                else if(var==2){
                    gits:
                    printf("1. father agnel\t Dose 1: 200\n\n");
                    printf("2. Gip noida\t Dose 1: 200\n\n");
                    printf("3. RVS school\t Dose 1: 200\n\n");
                    printf("choose your location:\n");
                    scanf("%d",&var_3);
                    if(var_3 == 1){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("father agnel\t Dose 1: 200\n");
                        reset();
                    }
                    else if(var_3 == 2){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("Gip noida\t Dose 1: 200\n");
                        reset();
                    }
                    else if(var_3 == 3){
                        data(l,gen,db);
                        printf("\n");
                        purple();
                        printf("RVS school\t Dose 1: 200\n");
                        reset();
                    }
                    
                    else{
                        wry_opt();
                        goto gits;
                    }
                }
                else{
                    wry_opt();
                    goto wrt;

                }

                }
                else{
                    red();
                    printf("You enter the wrong option !!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
                    reset();
                }
                    

                }

            }
           
        return 0;
}