typedef unsigned char          u8; //
typedef signed char            s8;//
typedef unsigned short int     u16;//
typedef signed short int       s16;//
typedef unsigned long int      u32;//
typedef signed long int        s32;//
typedef float                  f32;//
typedef double                 f64;//
typedef long  double           f80;//


#define SET_BIT(VAR,BITNO)           (VAR |= (1<<BITNO))
#define CLEAR_BIT(VAR,BITNO)         (VAR &= (~(1<<BITNO)))
#define TOGGLE_BIT (VAR,BITNO)       (VAR ^= (1<<BITNO))
#define GET_BIT(VAR,BITNO)           (VAR>>BITNO)&0x01
#define ASSIGN_BIT(VAR,BITNO,VAL)    (VAR=(VAR &=(~(1<<BITNO)))  | (VAL<<BITNO))

