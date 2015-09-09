###Predicate Logic
####Exercise 1

Using the following predicates and their 'assumed' meanings:

lectureTheatre/1, office/1, contains/2, lecturer/1, has/2, same/2, phd/1, supervises/2, happy/1, completePhd/1.

1. 311 is a lecture theatre and 447 is an office.
```
lectureTheatre(311)^office(447)
```
2. Every lecture theatre contains a projector.
```
∀ X (lectureTheatre(X) -> ∃ Y Projector(Y,X) )
```
3. Every office contains a telephone and either a desktop or a laptop computer.
```
∀ X (office(X) -> contains(telephone^(desktop v laptop)) )
```
4. Every lecturer has at least one office.
```
∀ X (lecturer(X) -> ∃ Y has(X,office(Y)
```
5. No lecturer has more than one office.
```
~ ∃ X (lecutrer(X) -> has(X,office(Y))

