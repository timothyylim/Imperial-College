###Predicate Logic
####Exercise 1

Using the following predicates and their 'assumed' meanings:

lectureTheatre/1, office/1, contains/2, lecturer/1, has/2, same/2, phd/1, supervises/2, happy/1, completePhd/1.

* 311 is a lecture theatre and 447 is an office.
```
lectureTheatre(311)^office(447)
```
* Every lecture theatre contains a projector.
```
∀ X (lectureTheatre(X) -> ∃ Y Projector(Y,X) )
```
* Every office contains a telephone and either a desktop or a laptop computer.
```
∀ X (office(X) -> contains(telephone^(desktop v laptop)) )
```
* Every lecturer has at least one office.
```
∀ X (lecturer(X) -> ∃ Y has(X,office(Y)
```
* No lecturer has more than one office.
```
~ ∃ X (lecutrer(X) -> has(X,office(Y) )
```
* !!No lecturers share offices with anyone.
```
~ ∃ X (lecutrer(X) -> has(X, (office(Y)
```
* !!Some lecturers supervise PhD students and some do not.
```
~ ∃ X (lecturer(X) -> suprevises(X,phd(Y) ) ) 
^ 
∀ X (lecturer(X) -> suprevises(X,phd(Y) ) )
```
* !!Each PhD student has an office, but all PhD students share their office with at least one other PhD student.
```
∀ X (student(X) -> has(X,office(Y)) 
```
