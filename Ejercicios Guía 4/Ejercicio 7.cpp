# include      <stdio .h>
        # include      < string .h >
        # include      <ctype .h>

        int      main ()      {
                         char      cadena [51];      //      Permitimos      un      maximo      de      50      caracteres      en      la      cadena
                         printf (" Ingrese      una      cadena      de      caracteres      con      numeros      y      letras :     ");
                         scanf (" %50s" ,      cadena );

                        i n t      l o n g i t u d      =      s t r l e n ( c a d e n a ) ;

                        f o r      ( i n t      i     =      0 ;      i      <      l o n g i t u d ;     i + + )      {
                                         i f      ( i s d i g i t ( c a d e n a [ i ] ) )     {
 i n t r e p e t i c i o n e s = c a d e n a [ i ] - ’ 0 ’ ; / / C o n v i e r t e e l d i g i t o a u n n u m e r o
entero
                                                         i f      ( i     +     1      <      l o n g i t u d )     {
                                                                          f o r      ( i n t      j     =      0 ;      j      <      r e p e t i c i o n e s ;     j + + )      {
                                                                                          p u t c h a r ( c a d e n a [ i     +      1 ] ) ;      / /      I m p r i m e      l a      l e t r a      t a n t a s      v e c e s      c o m o
indique      el      numero
                                                                          }
                                                         }
                                                         i + + ;      / /      A v a n z a m o s      a l      s i g u i e n t e      c a r a c t e r
                                         }
                        }

                         p u t c h a r ( ’ \ n ’ ) ;      / /      I m p r i m i m o s      u n      s a l t o      d e      l i n e a      a l      f i n a l

                         r e t u r n      0 ;
        }