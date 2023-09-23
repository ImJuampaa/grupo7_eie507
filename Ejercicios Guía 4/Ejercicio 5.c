# include      <stdio .h>
        # include      <math .h>
        int      main ()      {
                        int      N;      //      Numero      de      calificaciones
                         printf (" Ingrese      el      numero      de      calificaciones      (1      <=     N      <=      100) :     ");
                         scanf (" %d",     &N);
                        if      (N      <     1      ||      N      >      100)      {
                                         printf (" Numero      de      calificaciones      fuera      del      rango      valido .\ n");
                                         return      1;
                        }
                        i n t      A L U [ N ] ;      / /      A r r e g l o      p a r a      a l m a c e n a r      l a s      c a l i f i c a c i o n e s
                        / /      L e e r      l a s      c a l i f i c a c i o n e s
                         p r i n t f ( " I n g r e s e      l a s      c a l i f i c a c i o n e s : \ n " ) ;
                        f o r      ( i n t      i     =      0 ;      i      <     N ;     i + + )      {
                                         p r i n t f ( " C a l i f i c a c i o n      % d :     " ,     i     +      1 ) ;
                                         s c a n f ( " % d " ,     & A L U [ i ] ) ;
                        }
                        / /      C a l c u l a r      l a      m e d i a      a r i t m e t i c a
                         d o u b l e      s u m a      =      0 ;
                        f o r      ( i n t      i     =      0 ;      i      <     N ;     i + + )      {
                                         s u m a      + =      A L U [ i ] ;
                        }
                         d o u b l e      m e d i a      =      s u m a      /     N ;
                        / /      C a l c u l a r      l a      v a r i a n z a
                         d o u b l e      v a r i a n z a      =      0 ;
                        f o r      ( i n t      i     =      0 ;      i      <     N ;     i + + )      {
                                         v a r i a n z a      + =      p o w ( A L U [ i ]      -     m e d i a ,      2 ) ;
                        }
                         v a r i a n z a      / =      N ;
                        / /      C a l c u l a r      l a      d e s v i a c i o n      e s t a n d a r
                         d o u b l e      d e s v i a c i o n _ e s t a n d a r      =      s q r t ( v a r i a n z a ) ;
                        / /      C a l c u l a r      l a      m o d a
                        i n t      m o d a      =      - 1 ;
                        i n t      m a x _ f r e c u e n c i a      =      0 ;
                        f o r      ( i n t      i     =      0 ;      i      <     N ;     i + + )      {
                                         i n t      f r e c u e n c i a      =      0 ;
                                         f o r      ( i n t      j     =      0 ;      j      <     N ;     j + + )      {
                                                         i f      ( A L U [ j ]      = =      A L U [ i ] )      {
                                                                          f r e c u e n c i a + + ;
                                                         }
                                         }
                                         i f      ( f r e c u e n c i a      >      m a x _ f r e c u e n c i a )     {
                                                         m o d a      =      A L U [ i ] ;
                                                         m a x _ f r e c u e n c i a      =      f r e c u e n c i a ;
                                         }
                        }
                        / /      I m p r i m i r      r e s u l t a d o s
                         p r i n t f ( " M e d i a      a r i t m e t i c a :      % . 2 l f \ n " ,      m e d i a ) ;
                         p r i n t f ( " V a r i a n z a :      % . 2 l f \ n " ,      v a r i a n z a ) ;
                         p r i n t f ( " D e s v i a c i o n      e s t a n d a r :      % . 2 l f \ n " ,      d e s v i a c i o n _ e s t a n d a r ) ;
                         p r i n t f ( " M o d a :      % d     ( a p a r e c e      % d      v e c e s ) \ n " ,     m o d a ,      m a x _ f r e c u e n c i a ) ;
                         r e t u r n      0 ;
        }