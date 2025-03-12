int minimumMoves(char* s) {
    int move=0,i=0,j=1,x;
    x=strlen(s);
    while(i<x){
       if(s[i]==88){
        move++;
        i=i+3;
       }
       else 
       i++;
    }
    return move;
}
  
