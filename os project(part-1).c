
//taking data types ...
//entering total no. of process..
//taking arrival time from user....
//taking burst time from user....


#include<stdio.h> 
int main() 
{ 
 
  int count,j,n,time,remain,flag=0,time_quantum; 
  int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10]; 
  printf("Enter Total Number of  Process:\t "); 
  scanf("%d",&n); 
  remain=n; 
  
  for(count=0;count<n;count++) 
  { 
    printf("Enter Arrival Time for Process Process %d :",count+1); 
    scanf("%d",&at[count]); 
    printf("Enter Burst Time for Process Process  %d :", count+1); 
    scanf("%d",&bt[count]); 
    //remaining....
  } 
