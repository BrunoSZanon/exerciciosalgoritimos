int main{
  
  float vetA[4]={1,2,3,4};
  float vetB[4]={4,3,2,1};
  float c = 0;
  
  for(int i=0;i<4;i++){
    c += vetA[i] + vetB[3 - i];
  }
}  

printf("%2.f\n", c);
