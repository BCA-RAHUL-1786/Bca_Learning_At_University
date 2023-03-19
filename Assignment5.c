//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.


#include<stdio.h>
int main() 
{
  int max,fail=0,pass=0,ab=0;
  int marks[50];
  int i,n,rl;
  printf("Enter number of students:");
  scanf("%d",&n);
  
  printf("Enter marks of %d student:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&marks[i]);
  }
  max=marks[0];
  rl=1;
  for(i=0;i<n;i++)
  {
    if(marks[i]==-1)
    {
      ab=ab+1;
    }
    else if(marks[i]>=50)
    {
      pass=pass+1;
    }
    else
    {
      fail=fail+1;
    }
  }
  printf("Number of Passed students are:%d\n",pass);
  printf("Number of Failed students are:%d\n",fail);
  printf("Number of Absent students are:%d\n",ab);
  printf("highest marks scored by roll no:%d i.e: %d",rl,max);
}
      
     
  
         
         
         
         
         
         
  
  
  
  
  
  
  
  
  
  
  
  
  
  




