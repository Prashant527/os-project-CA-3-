
//updating code in for loop..
//taking and printing time quantum from user....

for(count=0;count<n;count++) 
  { 
    printf("Enter Arrival Time for Process Process %d :",count+1); 
    scanf("%d",&at[count]); 
    printf("Enter Burst Time for Process Process  %d :", count+1); 
    scanf("%d",&bt[count]); 
    rt[count]=bt[count];         
  } 
  
  
  printf("Enter Time Quantum:\t"); 
  scanf("%d",&time_quantum); 
  printf("\n\nProcess:Arrival Time|Burst Time|Turnaround Time|Waiting Time\n\n"); 
  
  
