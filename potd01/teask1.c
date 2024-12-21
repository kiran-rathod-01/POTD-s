int scoreOfString(char* s) {
     int i,n,sum=0;
     for(i=0;s[i+1]!='\0';i++){
       n= s[i]-s[i+1];
        if(n<0){
            n=-1*n;
        }
           sum=sum+n;
 }
 return sum;   
}