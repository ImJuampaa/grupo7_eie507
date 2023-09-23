# include      <stdio .h>
        int      contarCaracter ( const      char      * cadena ,      char      car )     {
                        int      contador      =      0;
                        for      ( int      i     =      0;      cadena [i]      !=      ’\0 ’;     i ++)      {
                                         if      ( cadena [i]      ==      car )     {
                                                         contador ++;
}
}
                         return      contador ;
        }
        i n t      m a i n ( )      {
                         c h a r      c a d [ 5 1 ] ;      / /      P e r m i t i m o s      u n      m a x i m o      d e      5 0      c a r a c t e r e s      e n      l a      c a d e n a
                         c h a r      c a r ;
                         p r i n t f ( " I n g r e s e      u n a      c a d e n a      d e      c a r a c t e r e s      ( m a x i m o      5 0 ) :     " ) ;
                         s c a n f ( " % 5 0 s " ,      c a d ) ;
                         p r i n t f ( " I n g r e s e      u n      c a r a c t e r :     " ) ;
 s c a n f ( " % c " , & c a r ) ; / / U s a m o s u n e s p a c i o a n t e s d e % c p a r a i g n o r a r e s p a c i o s e n
blanco      y      saltos      de      linea
                        i n t      r e s u l t a d o      =      c o n t a r C a r a c t e r ( c a d ,      c a r ) ;
                         p r i n t f ( " E l      c a r a c t e r      ’ % c ’      a p a r e c e      % d      v e c e s      e n      l a      c a d e n a . \ n " ,     c a r ,      r e s u l t a d o ) ;
                         r e t u r n      0 ;
        }