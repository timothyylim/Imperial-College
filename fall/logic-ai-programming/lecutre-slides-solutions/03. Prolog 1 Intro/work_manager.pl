
worksIn(bill, sales).
worksIn(sally, accounts).

deptManager(sales, joan).
deptManager(accounts, henry).

managerOf(W,M) :- deptManager(D,M), worksIn(W,D).
managerOf(joan, james).
managerOf(henry, james).
managerOf(james, paul).


colleague(A,B) :- worksIn(A, D), worksIn(B,D), A \= B.

# Test worker
# worksIn(john, sales). 

superiorOf(E,S) :- managerOf(E,S).
superiorOf(E,S) :- managerOf(E,S), superiorOf(M,S).