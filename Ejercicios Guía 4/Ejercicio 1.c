# include      <stdio .h>
        int      main ()      {
                                         int      CLA ;
                                         int      CAT ;
                                         int      ANT ;
                                         float      SAL ;
                                         int      RES ;
                                         printf (" Indique      la      clave      del      trabajador :     ");
                                         scanf (" %d" ,     & CLA );
                                         p r i n t f ( " I n d i q u e      l a      c a t e g o r i a      d e l      t r a b a j a d o r :     " ) ;
                                         s c a n f ( " % d " ,     & C A T ) ;
                                         p r i n t f ( " I n d i q u e      l a      a n t i g u e d a d      d e l      t r a b a j a d o r :     " ) ;
                                         s c a n f ( " % d " ,     & A N T ) ;
                                         p r i n t f ( " I n d i q u e      l a      s a l a r i o      d e l      t r a b a j a d o r :     " ) ;
                                         s c a n f ( " % e " ,     & S A L ) ;
                                         i f      ( ( C A T      = = 3      | |      C A T = = 4 )      & &      A N T > 5 )      {
                                                                          R E S = 1 ;
                                                                          p r i n t f ( " E l      e m p l e a d o      r e u n e      l a s      c o n d i c i o n e s      n e c e s a r i a s      p a r a      e l
puesto .\n");
                                         }
                                         e l s e      i f      ( C A T      = = 2      & &      A N T      > 7 )      {
                                                                          R E S = 1 ;
                                                                          p r i n t f ( " E l      e m p l e a d o      r e u n e      l a s      c o n d i c i o n e s      n e c e s a r i a s      p a r a      e l
puesto .\n");
                                         }
                                         e l s e      {
                                                                          R E S      =      0 ;
 p r i n t f ( " E l e m p l e a d o n o r e u n e l a s c o n d i c i o n e s n e c e s a r i a s p a r a e l
puesto .\n");
                                         }
                                         p r i n t f ( " R E S :      % d \ n " ,      R E S ) ;
                                         r e t u r n      0 ;
        }