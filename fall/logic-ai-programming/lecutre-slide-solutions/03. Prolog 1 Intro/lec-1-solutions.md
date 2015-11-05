##Exercise 1
1. 
<br>
  sells(britain, oil, usa).
  
  no
</br>

2. sells(X,grain,Y).

X = usa

Y = japan

3. sells(X,oil,britain).

X = oman

4. sells(X,Y,germany).

X = japan

Y = computers

5. sells(X,Y,germany).

X = japan

Y = computers

6. sells(X,A,Y),sells(Y,B,X).

X = usa,

A = grain,

Y = japan,

B = computers ? no

X = oman,

A = oil,

Y = japan,

B = computers ? no

X = iraq,

A = oil,

Y = japan,

B = computers ? no

X = japan,

A = computers,

Y = usa,

B = grain ? no

X = japan,

A = computers,

Y = oman,

B = oil ? no

X = japan,

A = computers,

Y = iraq,

B = oil ? no

X = japan,

A = computers,
Y = japan,

B = computers ? no

X = japan,

A = computers,

Y = germany,

B = cars ? no

X = germany,

A = cars,

Y = japan,

B = computers ? no

no

7. sells(X,A,Y),sells(Y,B,X),X\=Y.

X = usa,

A = grain,

Y = japan,

B = computers ? no

X = oman,

A = oil,

Y = japan,

B = computers ? no

X = iraq,

A = oil,

Y = japan,

B = computers ? no

X = japan,

A = computers,

Y = usa,

B = grain ? no

X = japan,

A = computers,

Y = oman,

B = oil ? no

X = japan,

A = computers,

Y = iraq,

B = oil ? no

X = japan,

A = computers,

Y = germany,

B = cars ? no

X = germany,

A = cars,

Y = japan,

B = computers ? no

no

8.

bilateral_traders(X,Z):- sells(X,A,Z),sells(X,B,Z),X\=Y.

9. needs(britain,X),needs(japan,X).

X = cars ? no

X = computers ? no

X = oil ? no

##Exercise 2

1.colleague(A,B) :- worksIn(A, D), worksIn(B,D), A \= B.

2.managerOf(W,M) :- deptManager(D,M), worksIn(W,D).

3.
E = bill,

S = joan ? no

E = sally,

S = henry ? no

E = joan,

S = james ? no

E = henry,

S = james ? no

E = james,

S = paul ? no


E = bill,

S = joan ? no

4.
p <- c1 v C2 == (p <- c1) ^ (p <- c2)

Using:

A -> B == A’ v B

B <- A == B v A’

Then:

p v (c1 v c2)’

p v (c1’ ^ c2’)

p v c1’ ^ p v c2

(p <- c1) ^ (p <- c2)
