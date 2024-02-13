#include <stdio.h>
#include <stdlib.h>

// returnis function
double cube(double num){
     double result = num * num * num ;
     return result;
    };

    //if statemant function

    int max (int num1 , int num2){
    int result;
    if(num1>num2){
     result = num1;
    }else {
      result = num2;
    }
    return result;
    }

    struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
    };



int main()
{




    //aqedan daiwye !!!

    // how to use variables

    char fraza[] = "hello world";
    char characterName[] = "Rene";
    int characterAge = 35;
    printf("%s\n",fraza);
    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old.\n", characterAge);

    characterAge = 23;

    // strings xelmeored ver agwer masivad ro gamoaq chars eg unikaluri ragacaa

    printf("He really liked name %s.\n",characterName);
    printf("But did not like being %d\n",characterAge);

    printf("my fav %s is %d","number",12);



    // working with numbers

    printf("%f\n",7.2*5.5);
    printf("%f",5/4);
    printf("%d",10/2);
    printf("%d",5+5);

   // int num = 6; es imito chavakomentare rom const qvevit ushlida
    //printf("%d",num);


    //ez math formula
    printf("%f",pow(4,3)); //akvadratebs

    printf("%f",sqrt(36)); // fesvi amoaq

    printf("%f",ceil(35.453)); //amrgvalebs mtel momdevno ricxvze anu 36

    printf("%f",floor(35.654)); //amrgvalebs qvevit ra anu 35

    //about constanta -const anu axla constit sheqmnil cvlads verasdros gadaawer rames

    const int num = 5;
    printf("%d",num);

    //Getting user input. with scanf es function aris ra rasac gadascem imas dagibrunebs
    //prosta pirdapir ar gaeshveba axla bevri ragac miweria zevit qveda 4 xazze vambob

    int age;
    printf("enter your age: ");
    scanf("%d",&age);// & ampersantis nishani pointeria  //scanf() momxmarebels sashualebas adzlevs monacemebi sheiyvanos programashi
    printf("your age is %d \n",age);


    //primitiuli kalkulatori

    double num1;
    double num2;
    printf("Enter first Number: ");
    scanf("%lf",&num1);
    printf("Enter Second Number: ");
    scanf("%lf",&num2);

    printf("your answer: %f",num1+num2);



    // vbildavt patara tamashs C shi

    char color[20];
    char plurarNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter Your color: ");
    scanf("%s",color);

    printf("Enter Your plurarNoun: ");
    scanf("%s",plurarNoun);

    printf("Enter Your selebrity: ");
    scanf("%s%s",celebrityL,celebrityF);


    printf("Roses are %s \n",color);
    printf("%s are blue \n",plurarNoun);
    printf("I love %s %s \n",celebrityL,celebrityF);


    //array in C language

    int luckyNumbers[] = {2,3,4,5,6,7,55};

    printf("%d",luckyNumbers[0]);

    //anu aq qvevit vqmnit masivs romelsac vadzlevt sashualebas aigos mxolod 10 elementi mashi
    // da mere indexis mixedvit vadzlevt mnishvnelobebs da vprintavt

    int luckyNums[10];
    luckyNums[1] = 200;
    printf("%d",luckyNums[1]);




    //FUNCTION IN C

    myFunction("Rene",23);

    // Return statemant

    printf("Answer : %f ", cube(3.0));


    //if statemant in C

    printf("%d",max(4,10));

    //Switch statemant

    char grade = 'A';
    switch(grade){
    case 'A':
    printf("you did grate");
    break;
    case 'B':
    printf("Not to bad");
    break;
    case 'C':
    printf("you Suck");
    break;
    case 'F':
    printf("you faild bitch");
    break;
    default:
        printf("invalid grade");
    }

    // Structs in C

    struct Student student1;
    student1.age = 22;
    student1.gpa =3,2;
    strcpy(student1.name,"jim");
    strcpy(student1.major,"Buisness");

    printf("%d",student1.age);


    // while and do while loop

    int i = 1;
    while(i<=10){
    printf("%d \n",i);
    i++;
    }


    // For loop

    for(int c = 1;c<=10;c++){
        printf("%d \n",c);
    }


    int ricxvebi[] = {4,8,15,16,23,42};

   for(int j = 0;j<6;j++){
    printf("%d\n",ricxvebi[j]);
   };



    return 0;
}

    void myFunction(char name[],int age){
     printf("hello %s,You are %d years old",name,age);
    };


