#include<stdio.h>
int main()
{
int i,nos,pass,fail;
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
scanf("%d",&nos);

for(i=0;i<nos;i++)                                         
{


printf("enter the usn\n");
scanf("%s", &cse_students[i].usn);

printf("enter the english marks (max marks=100)\n");
scanf("%d",&cse_students[i].english);

printf("enter the computer science marks(max marks=100) \n");
scanf("%d",&cse_students[i].computer);


printf("enter the mechanic  marks(max marks=100) \n");
scanf("%d",&cse_students[i].mechanic);


printf("enter the electrical marks(max marks=100) \n");
scanf("%d",&cse_students[i].electrical);


printf("enter the physics marks(max marks=100) \n");
scanf("%d",&cse_students[i].physics);


printf("enter the maths marks(max marks=100) \n");
scanf("%d",&cse_students[i].maths);

                                                                         

cse_students[i].total=(cse_students[i].english+cse_students[i].computer+
cse_students[i].mechanic+cse_students[i].electrical+cse_students[i].physics+cse_students[i].maths);      



cse_students[i].cgpa=((double)(cse_students[i].total)/600)*100;                



                                                                                
if(cse_students[i].english>maxEnglishMarks)                                  
{
maxEnglishMarks=cse_students[i].english;
maxEnglishStudentIndex=i;
}


if(cse_students[i].computer>maxComputerMarks)
{
maxComputerMarks=cse_students[i].computer;
maxComputerStudentIndex=i;
}

if(cse_students[i].mechanic>maxMechanicMarks)
{
maxMechanicMarks=cse_students[i].mechanic;
maxMechanicStudentIndex=i;
}

if(cse_students[i].electrical >maxElectricalMarks)
{
maxElectricalMarks=cse_students[i].electrical;
maxElectricalStudentIndex=i;
}

if(cse_students[i].physics>maxPhysicsMarks)
{
maxPhysicsMarks=cse_students[i].physics;
maxPhysicsStudentIndex=i;
}

if(cse_students[i].maths>maxMathsMarks)
{
maxMathsMarks=cse_students[i].maths;
maxMathsStudentIndex=i;
}


if(cse_students[i].total>maxtotalMarks)
{
maxtotalMarks=cse_students[i].total;
maxtotalStudentIndex=i;
}

                                                                 
                                                        
if(cse_students[i].computer<35||cse_students[i].english<35||cse_students[i].maths<35||cse_students[i].mechanic<35||cse_students[i].electrical<35||cse_students[i].physics<35)
{
++fail;
cse_students[i].cgpa=0;
}
else
++pass;
}
    
                                                                                                
 
printf(" students list is as follows\n");
printf("--------------------------------------------------------------------------------------------------------\n");

printf("usn english computer mechanic electrical physics maths total percentage\n");



for(i=0;i<nos;i++)
{


printf("%3s %7d %8d %8d %10d %7d %5d %5d %10f \t\n",cse_students[i].usn,cse_students[i].english,cse_students[i].computer,cse_students[i].mechanic,cse_students[i].electrical,
cse_students[i].physics,cse_students[i].maths,cse_students[i].total,cse_students[i].cgpa);

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






