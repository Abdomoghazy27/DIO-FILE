#ifndef BITMATH
#define BITMATH


/* declartion of set operatin */
#define SET_BIT(X,Y) X=X|(1<<Y)


/* declartion of clear operatin */
#define CLEAR_BIT(A,B) (A&=(~(1<<B)))


/* declartion of toggle operatin */
#define TOGGLE_BIT(Q,W) (Q=Q^(1<<W))

/* declartion of get operatin */
#define GET_BIT(R,T,E) (E=(R>>T)&1)


#endif /* BITMATH */
