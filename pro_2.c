#include<stdio.h>
int main()
{
int index,number,pass,fail;
int maxEnglishStudentIndex = 0;  
int maxEnglishMarks = -1;
int maxComputerStudentIndex = 0;
int maxComputerMarks = -1;
int maxElectricalStudentIndex = 0;
int maxElectricalMarks = -1;
int maxMechanicStudentIndex = 0;
int maxMechanicMarks = -1;
int maxMathsStudentIndex = 0;
int maxMathsMarks = -1;
int maxPhysicsStudentIndex = 0;
int maxPhysicsMarks = -1;
int maxtotalStudentIndex = 0;
int maxtotalMarks = -1;
int MaxMarks;





struct student 
{                           
char usn[30];
int english;
int computer;
int mechanic;
int electrical;
int maths;
int physics;
int total;
float cgpa;
}cse_students[200];




printf("enter the number of students in the class\n");     
scanf("%d",&number);

for(index=0;index<number;index++)                                         
{


printf("enter the usn\n");
scanf("%s", cse_students[index].usn);

printf("enter the english marks (max marks=100)\n");
scanf("%d",&cse_students[index].english);

printf("enter the computer science marks(max marks=100) \n");
scanf("%d",&cse_students[index].computer);


printf("enter the mechanic  marks(max marks=100) \n");
scanf("%d",&cse_students[index].mechanic);


printf("enter the electrical marks(max marks=100) \n");
scanf("%d",&cse_students[index].electrical);


printf("enter the physics marks(max marks=100) \n");
scanf("%d",&cse_students[index].physics);


printf("enter the maths marks(max marks=100) \n");
scanf("%d",&cse_students[index].maths);

                                                                         

cse_students[index].total=(cse_students[index].english+cse_students[index].computer+
cse_students[index].mechanic+cse_students[index].electrical+cse_students[index].physics+cse_students[index].maths);      



cse_students[index].cgpa=((((double)(cse_students[index].total)/600)*100)/10)+0.75;                



                                                                                
if(cse_students[index].english>maxEnglishMarks)                                  
{
maxEnglishMarks=cse_students[index].english;
maxEnglishStudentIndex=index;
}


if(cse_students[index].computer>maxComputerMarks)
{
maxComputerMarks=cse_students[index].computer;
maxComputerStudentIndex=index;
}

if(cse_students[index].mechanic>maxMechanicMarks)
{
maxMechanicMarks=cse_students[index].mechanic;
maxMechanicStudentIndex=index;
}

if(cse_students[index].electrical >maxElectricalMarks)
{
maxElectricalMarks=cse_students[index].electrical;
maxElectricalStudentIndex=index;
}

if(cse_students[index].physics>maxPhysicsMarks)
{
maxPhysicsMarks=cse_students[index].physics;
maxPhysicsStudentIndex=index;
}

if(cse_students[index].maths>maxMathsMarks)
{
maxMathsMarks=cse_students[index].maths;
maxMathsStudentIndex=index;
}


if(cse_students[index].total>maxtotalMarks)
{
maxtotalMarks=cse_students[index].total;
maxtotalStudentIndex=index;
}

                                                                 
                                                        
if(cse_students[index].computer<35||cse_students[index].english<35||cse_students[index].maths<35||cse_students[index].mechanic<35||cse_students[index].electrical<35||cse_students[index].physics<35)
{
++fail;
cse_students[index].cgpa=0;
}
else
++pass;
}
    
                                                                                                
 
printf(" students list is as follows\n");
printf("--------------------------------------------------------------------------------------------------------\n");
char c[3]="usn";
printf("%11s english computer mechanic electrical physics maths total percentage\n",c);



for(index=0;index<number;index++)
{


printf("%s %7d %8d %8d %10d %7d %5d %5d %10f \t\n",cse_students[index].usn,cse_students[index].english,cse_students[index].computer,cse_students[index].mechanic,cse_students[index].electrical,
cse_students[index].physics,cse_students[index].maths,cse_students[index].total,cse_students[index].cgpa);

}



printf("--------------------------------------------------------------------------------------------------------\n");

printf("statistics\n");

printf("topper in english  usn: %s score obtained: %d\n",cse_students[maxEnglishStudentIndex].usn,maxEnglishMarks);

printf("topper in computer science usn: %s score obtained: %d\n",cse_students[maxComputerStudentIndex].usn,maxComputerMarks);

printf("topper in electrical usn: %s score obtained: %d\n",cse_students[maxElectricalStudentIndex].usn,maxElectricalMarks);

printf("topper in mechanic usn: %s score obtained: %d\n",cse_students[maxMechanicStudentIndex].usn,maxMechanicMarks);

printf("topper in physics usn: %s score obtained: %d\n",cse_students[maxPhysicsStudentIndex].usn,maxPhysicsMarks);

printf("topper in maths usn: %s score obtained: %d\n",cse_students[maxMathsStudentIndex].usn,maxMathsMarks);

printf("topper in class: %s score obtained %d\n",cse_students[maxtotalStudentIndex].usn,maxtotalMarks);

printf("pass:%d :fail:%d\n",pass,fail);

return (0);

}

