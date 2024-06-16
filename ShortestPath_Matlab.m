function Edsger_Wybe_Dijkstra()
  %Simone Remoli Calcolo_Percorsi_Minimi
  
  %Per ciscuna matrice degli esercizi precedenti, calcolare il percorso minimo
  %a partire dal nodo A a tutti gli altri nodi
  fprintf("Benvenuto! Edsger Wybe Dijkstra-Calcolo Percorsi Minimi !  \n ")
  X = input("Di quale matrice si desidera vedere il percorso minimo ? :");
 switch (X)
  case 1
    mat = [0,1,0,0,0;1,0,1,0,0;0,1,0,1,0;0,0,1,0,1;0,0,0,1,0]
  case 2
    mat = [0,1,1,1,1,1;1,0,0,0,0,0;1,0,0,0,0,0;1,0,0,0,0,0;1,0,0,0,0,0;1,0,0,0,0,0]
  case 3
    mat = [0,1,1,0,0,0,0,0,0;1,0,0,0,0,0,1,1,1;1,0,0,1,1,1,0,0,0;0,0,1,0,0,0,0,0,0;0,0,1,0,0,0,0,0,0;0,0,1,0,0,0,0,0,0;0,1,0,0,0,0,0,0,0;0,1,0,0,0,0,0,0,0;0,1,0,0,0,0,0,0,0]  
endswitch
 
  for i=1:size(mat)
    cost(i)=inf;
    conosciuti(i)=0;
  end;
  
  cost(1)=0;
  conosciuti(1)=1;
  nodo_attuale = 1;
 for matrix_type=1:size(mat) %ciclo (inizio)---------------------------------------
    for i=1:size(mat)
      if (mat(i,nodo_attuale)~=0&&((mat(i,nodo_attuale)+cost(nodo_attuale))<cost(i)))
        cost(i) = (cost(nodo_attuale)+mat(i,nodo_attuale));
      end;
    end;
  min = Inf;
    for i=1:size(mat)
      if((cost(i)<min)&&(conosciuti(i)==0))%se il valore iesimo di cost è minore del minimo e non è stato visitato
        min = cost(i); %trovo il minimo 
        c = i; %c = indice del minimo 
      end;
    end;
    conosciuti(c)=1;
    nodo_attuale = c;
end; %ciclo (fine)-------------------------------------------------------------------
conosciuti
cost


%Output
    
%   0   1   1   0   0   0   0   0   0
%   1   0   0   0   0   0   1   1   1
%   1   0   0   1   1   1   0   0   0
%   0   0   1   0   0   0   0   0   0         <---- matrice di adiacenza
%   0   0   1   0   0   0   0   0   0
%   0   0   1   0   0   0   0   0   0
%   0   1   0   0   0   0   0   0   0
%   0   1   0   0   0   0   0   0   0
%   0   1   0   0   0   0   0   0   0

%conosciuti =

 %  1   1   1   1   1   1   1   1   1      <--- tutto il vettore è settato a true

%cost =

 %  0   1   1   2   2   2   2   2   2       <---- distanze 
 
 

     
