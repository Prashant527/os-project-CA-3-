//carrying out operations......



 for(time=0,count=0;remain!=0;) 
  { 
   
    if(rt[count]<=time_quantum && rt[count]>0) 
   
    { 
      time+=rt[count]; 
      rt[count]=0; 
      flag=1; 
   
    } 
   
    else if(rt[count]>0) 
    { 
      rt[count]-=time_quantum; 
      time+=time_quantum; 
    } 
