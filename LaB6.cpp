 #include <stdio.h>

int main() {
   int i = 0, j = 0, n = 0 ;

   printf( "Please enter line : " ) ;
   scanf( "%d", &n ) ;

   if(n % 2==0) {
      
      for( i = 0 ; i < n ; i++ ) {
          for( j = 0 ; j < n ; j++ ) {
              if(i == j){
                 printf(" 1 ");
              } else {
                 printf(" 0 ");
              }
          }//end for
          printf( "\n" ) ;
      }
   } else {
      
      for( i = 0 ; i < n ; i++ ) {
          for( j = 0 ; j < n ; j++ ) {
              if(j == n - i -1 ){
                 printf(" 1 ");
              } else {
                 printf(" 0 ");
              }
          }//end for
          printf( "\n" ) ;
      }
   }   
   return 0 ;
}//end function