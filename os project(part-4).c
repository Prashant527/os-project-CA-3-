//display of arival time, burst time, TAT, Waiting time........
//calulating average TAT and average Waiting time....

if(rt[count]==0 && flag==1) 
    { 
      remain--; 
      printf("P[%d]| \t%d\t| \t%d\t| \t%d\t| \t%d\n",count+1, at[count],bt[count],time-at[count],time-at[count]-bt[count]); 
      wait_time+=time-at[count]-bt[count]; 
      turnaround_time+=time-at[count]; 
      flag=0; 
    } 
    if(count==n-1) 
      count=0; 
    else if(at[count+1]<=time) 
      count++; 
    else 
      count=0; 
  } 
  printf("\nAverage Waiting Time= %f\n",wait_time*1.0/n); 
  printf("Avg Turnaround Time = %f",turnaround_time*1.0/n); 
  
  return 0; 
}
