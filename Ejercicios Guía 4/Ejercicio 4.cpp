# include      < iostream >
        # include      < cstdlib >
        # include      <ctime >
        using      namespace      std ;
        # define      NUM_HORAS      24
        double      generarTemperatura ()      {
                         return      ( rand ()      %     51)      -      10;
}
        int      main ()      {
                         s r a n d ( t i m e ( N U L L ) ) ;
                         d o u b l e      t e m p e r a t u r a s [ N U M _ H O R A S ] ;
                        i n t      h o r a r i o s [ N U M _ H O R A S ] ;
                        f o r      ( i n t      i     =      0 ;      i      <      N U M _ H O R A S ;     i + + )      {
                                         t e m p e r a t u r a s [ i ]     =      g e n e r a r T e m p e r a t u r a ( ) ;
                                         h o r a r i o s [ i ]     =     i ;
                        }
                        / /      I m p r i m i r      t o d a s      l a s      t e m p e r a t u r a s      r e g i s t r a d a s
                         c o u t      < <     " T e m p e r a t u r a s      r e g i s t r a d a s      e n      l a s      2 4      h o r a s : "      < <      e n d l ;
                        f o r      ( i n t      i     =      0 ;      i      <      N U M _ H O R A S ;     i + + )      {
                                         c o u t      < <     " H o r a      "      < <     i      < <     " :     "      < <      t e m p e r a t u r a s [ i ]      < <     "      g r a d o s      C e l s i u s "      < <      e n d l ;
                        }
                        / /      C a l c u l a r      l a      t e m p e r a t u r a      p r o m e d i o
                         d o u b l e      s u m a      =      0 ;
                        f o r      ( i n t      i     =      0 ;      i      <      N U M _ H O R A S ;     i + + )      {
                                         s u m a      + =      t e m p e r a t u r a s [ i ] ;
                        }
                         d o u b l e      p r o m e d i o      =      s u m a      /      N U M _ H O R A S ;
                        / /      E n c o n t r a r      l a      t e m p e r a t u r a      m a x i m a      y      s u      h o r a r i o
                         d o u b l e      m a x i m a      =      t e m p e r a t u r a s [ 0 ] ;
                        i n t      h o r a r i o M a x      =      0 ;
                        f o r      ( i n t      i     =      1 ;      i      <      N U M _ H O R A S ;     i + + )      {
                                         i f      ( t e m p e r a t u r a s [ i ]      >      m a x i m a )     {
                                                         m a x i m a      =      t e m p e r a t u r a s [ i ] ;
                                                         h o r a r i o M a x      =     i ;
                                         }
                        }
                        / /      E n c o n t r a r      l a      t e m p e r a t u r a      m i n i m a      y      s u      h o r a r i o
                         d o u b l e      m i n i m a      =      t e m p e r a t u r a s [ 0 ] ;
                        i n t      h o r a r i o M i n      =      0 ;
                        f o r      ( i n t      i     =      1 ;      i      <      N U M _ H O R A S ;     i + + )      {
                                         i f      ( t e m p e r a t u r a s [ i ]      <      m i n i m a )     {
                                                         m i n i m a      =      t e m p e r a t u r a s [ i ] ;
                                                         h o r a r i o M i n      =     i ;
                                         }
                        }
 c o u t < < " T e m p e r a t u r a p r o m e d i o d e l d i a : " < < p r o m e d i o < < " g r a d o s C e l s i u s " < < e n d l ;
 c o u t < < " T e m p e r a t u r a m a x i m a d e l d i a : " < < m a x i m a < < " g r a d o s C e l s i u s ( r e g i s t r a d a a
las      "      <<      horarioMax      <<     "      horas )"      <<      endl ;
 c o u t < < " T e m p e r a t u r a m i n i m a d e l d i a : " < < m i n i m a < < " g r a d o s C e l s i u s ( r e g i s t r a d a a
las      "      <<      horarioMin      <<     "      horas )"      <<      endl ;
                         r e t u r n      0 ;
        }