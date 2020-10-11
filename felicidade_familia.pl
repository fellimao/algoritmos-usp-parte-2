progenitor(sara,isaque).
progenitor(abraao,isaque).
progenitor(abraao,ismael).
progenitor(isaque,esau).
progenitor(isaque,jaco).
progenitor(jaco,jose).

temfilho(X) :- 
    progenitor(X, Y).

feliz(X) :-
    temfilho(X).