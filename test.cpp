#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct student{
    int idNum = -1;
    std::string name = "";
    bool gender;
    int scores[3] = {0, 0, 0}; //The three courses are defined as "Maths", "Programming" and "English" in order
};
student allS[1024]; //Suppose the IDs are natural numbers less than 1024

void create(); //0
void displayAll(); //1
void displayOne(int id); //2
void courseAve(int course); //3
void studentAve(int id); //4
void topScore(); //5
void failExam(); //6
void isExist(); //7
void search(int id); //8
void modify(int id); //9
void menu();

int main(){
    printf("<<:::WELCOME TO THE SCORE MANAGING SYSTEM:::>>\n");
    menu();
}

void menu(){
    printf("\nENTER A NUMBER TO SELECT A FUNCTION:\n");
    printf("____________________________________\n");
    printf(" 0  Imput the overall data\n");
    printf(" 1  Output the overall data\n");
    printf(" 2  Output the data of single student\n");
    printf(" 3  Output the average score of single course\n");
    printf(" 4  Output the overall average score of one or all students\n");
    printf(" 5  Find the student with maximal average score\n");
    printf(" 6  Find the student(s) who failed in average score\n");
    printf(" 7  Examine whether the student with the specific ID number exists\n");
    printf(" 8  Output the data according to the specific ID\n");
    printf(" 9  Edit the data according to the specific ID and output the overall data\n");
    char cImp;
    scanf("%s", &cImp);
    if(cImp == '0'){
        printf("Enter the data in the following pattern in the parentheses\n");
        printf("[ID,NAME,GENDER(M/F),MATHS,PROGRAMMING,ENGLISH],\n");
        printf("ending with \"END\":\n");
        create();
    }
    if(cImp == '2'){
        printf("Enter a 4-digit ID number to output the data of corresponding student:\n");
        int idImp;
        scanf("%d", &idImp);
        displayOne(idImp);
        printf("Completed\n");
        menu();
    }
}

void create(){
    string ipt = "";
    string numS = "";
    int idC = 0;
    int ind = 0;
    int cntr = 0;
    for(;; cntr++){
        getline(cin, ipt);
        if(ipt == "END") break;
        for(ind = 0; ind < ipt.size() && ipt[ind] != ','; ind++) numS += ipt[ind];
        try{
            idC = stoi(numS);
        }
        catch(...){
            cout << idC;
        }
        //idC = stoi(numS);
        numS = "";
        allS[idC].idNum = idC;
        ind++;
        for(; ind < ipt.size() && ipt[ind] != ','; ind++) allS[idC].name += ipt[ind];
        allS[idC].gender = (ipt[++ind] == 'F' || ipt[ind] == 'f');
        ind += 2;
        for(int aind = 0; aind < 3; aind++){
            for(; ind < ipt.size() && ipt[ind] != ','; ind++) numS += ipt[ind];
            allS[idC].scores[aind] = stoi(numS);
            ind++;
            numS = "";
        }
    }
    printf("Data of %d student(s) is successfully imported", cntr);
    menu();
}

void displayOne(int id){
    if(allS[id].idNum != id){
        printf("Wrong ID\n");
        menu();
    }
    printf("ID   NAME             GENDER  MATHS  PROG.  ENGL.\n");
    printf("%d %16s %s       %3d     %3d     %3d", 
        allS[id].idNum, allS[id].name, (allS[id].gender ? "F" : "M"), 
        allS[id].scores[0], allS[id].scores[1], allS[id].scores[2]);
    
}
