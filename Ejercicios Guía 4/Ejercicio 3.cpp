# include      <ctime >
        # include      < iostream >
        using      namespace      std ;

        # define      tamano_array      256
        # define      bits_maximos      8

        void      binario ( int      numero_decimal ,      int      array_binario [ tamano_array ]) ;

        i n t      m a i n ( )      {
                        i n t      a r r a y [ t a m a n o _ a r r a y ] ;
                        i n t      a r r a y _ b i n a r i o [ t a m a n o _ a r r a y ] ;
                         s r a n d ( s t a t i c _ c a s t < u n s i g n e d > ( t i m e ( n u l l p t r ) ) ) ;

                        f o r      ( i n t      i     =      0 ;      i      <      t a m a n o _ a r r a y ;     i + + )      {
                                         a r r a y [ i ]     =      r a n d ( )      %     2 5 6 ;
                                         c o u t      < <     " a r r e g l o [ "      < <     i      < <     " ]     =     "      < <      a r r a y [ i ]      < <      e n d l ;
                        }

                        f o r      ( i n t      m     =      0 ;      m      <      t a m a n o _ a r r a y ;     m + + )      {
                                         b i n a r i o ( a r r a y [ m ] ,      a r r a y _ b i n a r i o ) ;
                        }

                         r e t u r n      0 ;
        }

 v o i d b i n a r i o ( i n t n u m e r o _ d e c i m a l , i n t a r r a y _ b i n a r i o [ t a m a n o _ a r r a y ] ) {
                         a r r a y _ b i n a r i o [ t a m a n o _ a r r a y ]     =      { 0 } ;
                        i n t      p     =      b i t s _ m a x i m o s ;
                        i n t      k     =      0 ;
                        i n t      n u m e r o _ b i n a r i o [ b i t s _ m a x i m o s ] ;
                         s t a t i c      i n t      c o n t a d o r      =      0 ;

                        f o r      ( k     =      0 ;      k      <      b i t s _ m a x i m o s ;     k + + )      {
                                         n u m e r o _ b i n a r i o [ k ]     =      n u m e r o _ d e c i m a l      %     2 ;
                                         n u m e r o _ d e c i m a l      =      n u m e r o _ d e c i m a l      /      2 ;
                                                         }

                         c o u t      < <     " a r r e g l o _ b i n a r i o [ "      < <      c o n t a d o r      < <     " ]     =     " ;
                        f o r      ( i n t      p     =      b i t s _ m a x i m o s      -     1 ;      p      > =      0 ;     p - - )      {
                                         c o u t      < <      n u m e r o _ b i n a r i o [ p ] ;
                        }

                         c o u t      < <      e n d l ;
                         c o n t a d o r      =      c o n t a d o r      +      1 ;
        }