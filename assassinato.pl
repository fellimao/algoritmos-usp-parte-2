resolver(X):-
    assassino(X).

%informa��es sobre alibis e dias
dia(lucas,terca). %lucas foi visto ter�a
dia(paulo,terca). %paulo foi visto ter�a
dia(luis,terca). %luis foi visto ter�a
dia(alan,quinta). %alan foi visto quinta
%alibi(X,Y). X � alibi de Y
alibi(lucas,bernardo).
alibi(paulo,bernardo).
alibi(luis, lucas).
alibi(alan,lucas).
confiavel(bernardo).
confiavel(lucas).
not(confiavel(alan)).

tem_alibi_terca(X):-
    alibi(confiavel(X),X),
    dia(X,terca).

sem_alibi_terca(X):-
    dia(X,quinta);
    alibi(confiavel(X),X).

%fatos

possui(lucas,arma).
possui(luis,arma).
possui(alan,arma).
vinganca(paulo, jean). %paulo quer se vingar de jean
vinganca(lucas, jean). %lucas quer se vingar de jean
benef(bernardo, jean). %bernard eh beneficiario da fortuna de jean
benef(jean, luis). %jean eh beneficiario da fortuna de luis
deve(luis, jean).
deve(lucas, jean).
surpreendeu(alan, jean).

%Rela��es

interesse_pessoal(X):-
    benef(X, jean);
    deve(X, jean);
    surpreendeu(X, jean).

motivo(X):- %Quem tem motivo para matar Jean?
    interesse_pessoal(X);
    vinganca(X,jean).

assassino(X):- %O assassino � algu�m que tem um motivo para matar Jean, que possui uma arma e que n�o tem um �libi para ter�a-feira.
    motivo(X),
    possui(X, arma),
    sem_alibi_terca(X).
