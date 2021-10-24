resolver(X):-
    assassino(X).

%informações sobre alibis e dias
dia(lucas,terca). %lucas foi visto terça
dia(paulo,terca). %paulo foi visto terça
dia(luis,terca). %luis foi visto terça
dia(alan,quinta). %alan foi visto quinta
%alibi(X,Y). X é alibi de Y
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

%Relações

interesse_pessoal(X):-
    benef(X, jean);
    deve(X, jean);
    surpreendeu(X, jean).

motivo(X):- %Quem tem motivo para matar Jean?
    interesse_pessoal(X);
    vinganca(X,jean).

assassino(X):- %O assassino é alguém que tem um motivo para matar Jean, que possui uma arma e que não tem um álibi para terça-feira.
    motivo(X),
    possui(X, arma),
    sem_alibi_terca(X).
