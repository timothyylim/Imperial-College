sells(usa, grain, japan).
sells(S, P, R) :-  produces(S, P), needs(R, P).

produces(oman, oil).
produces(iraq, oil).
produces(japan, computers).
produces(germany, cars).
produces(france, iron).

needs(germany, iron).
needs(britain, cars).
needs(japan, cars).
needs(_, computers).
needs(C, oil) :- needs(C, cars).

