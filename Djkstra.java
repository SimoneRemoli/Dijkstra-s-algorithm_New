import java.util.Arrays;
import java.util.Stack;


public class Main {

    public void views_arrays(int[]a,int[]b, int[][]matrice)
    {
        System.out.print("Know = ");
        for(int i=0; i< matrice.length; i++)
        {
            System.out.print( "[ " + a[i] + " ] ");
        }
        System.out.println();
        System.out.print("Cost = ");
        for(int i=0; i< matrice.length; i++)
        {
            System.out.print( "[ " + b[i] + " ] ");
        }

    }
    public boolean checkfill(int[]a, int[]b, int dim)
    {
        for(int i=0;i<dim;i++)
        {
            if(a[i] == -1)
                return true;
        }
        return false;
    }
    public int[] trovaAdj(int nodo, int[][]adiacenza)
    {
        int index = 0;
        int [] adiacenti = new int[(adiacenza.length)-1];
        Arrays.fill(adiacenti,-1);
        for(int i=0;i< adiacenza.length;i++)
        {
            if((adiacenza[nodo][i]!=-1)&&(adiacenza[nodo][i]!=0))
            {
                adiacenti[index] = i;
                index = index + 1;
            }
        }
        return adiacenti;
    }
    public int nodo_costo_minore(int[]cost, int[]know)
    {
        int min=0, minimo_nodo=0, temp = 10000;
        for(int i=0;i<cost.length;i++)
        {
            if(know[i]==-1)
            {
                min = cost[i];

                if(temp > min) {
                    temp = min;
                    minimo_nodo = i;
                }
            }
        }
        return minimo_nodo;
    }
    public void stampaPercorso(int nodo, int[] precedente) {
        Stack<Integer> percorso = new Stack<>();
        while (nodo != -1) {
            percorso.push(nodo);
            nodo = precedente[nodo];
        }
        while (!percorso.isEmpty()) {
            System.out.print(percorso.pop() + " ");
        }
    }


    public static void main(String[] args)
    {
        Main a = new Main();
        int[][] matriceAdiacenza = {
                {0, 1, 1, -1, -1, -1, 1, -1, -1, 1},
                {1, 0, 1, 1, -1, -1, -1, 1, -1, -1},
                {1, 1, 0, 1, -1, -1, -1, -1, 1, -1},
                {-1, 1, 1, 0, 1, -1, -1, -1, -1, -1},
                {-1, -1, -1, 1, 0, 1, -1, -1, 1, -1},
                {-1, -1, -1, -1, 1, 0, 1, 1, -1, -1},
                {1, -1, -1, -1, -1, 1, 0, -1, 1, 1},
                {-1, 1, -1, -1, -1, 1, -1, 0, -1, 1},
                {-1, -1, 1, -1, 1, -1, 1, -1, 0, 1},
                {1, -1, -1, -1, -1, -1, 1, 1, 1, 0}
        };

        // Stampa della matrice di adiacenza
        for (int i = 0; i < matriceAdiacenza.length; i++)
        {
            System.out.println();
            for (int j = 0; j < matriceAdiacenza[i].length; j++)
            {
                    System.out.print(matriceAdiacenza[i][j] + "        ");
            }
            System.out.println();

        }
        int nodo_partenza = 0, nodo_arrivo = 3;
        int [] know = new int[matriceAdiacenza.length];
        int [] cost = new int[matriceAdiacenza.length];
        Arrays.fill(cost, 1000);
        Arrays.fill(know, -1);
        a.views_arrays(know,cost, matriceAdiacenza);
        System.out.println();
        int [] adiacenti_vector = new int[(matriceAdiacenza.length)-1];
        int adj_temp = 0;
        know[nodo_partenza] = 1;
        cost[nodo_partenza] = 0;
        System.out.println();
        int[] precedente = new int[matriceAdiacenza.length];  // Array per tracciare il percorso
        Arrays.fill(precedente, -1);

        while(a.checkfill(know,cost,matriceAdiacenza.length))
        {
            adiacenti_vector = a.trovaAdj(nodo_partenza, matriceAdiacenza);
            for(int i=0;i<adiacenti_vector.length;i++)
            {
                if(adiacenti_vector[i]!=-1)
                {
                    adj_temp = adiacenti_vector[i];
                    if(know[adj_temp]==-1) { // se il nodo adiacente non è conosciuto

                        if(cost[adj_temp] > cost[nodo_partenza] + matriceAdiacenza[nodo_partenza][adj_temp])
                        {
                            cost[adj_temp] = cost[nodo_partenza] + matriceAdiacenza[nodo_partenza][adj_temp];
                            precedente[adj_temp] = nodo_partenza;
                        }

                    }
                }
            }
            nodo_partenza = a.nodo_costo_minore(cost,know);
            know[nodo_partenza] = 1;
        }

        a.views_arrays(know,cost, matriceAdiacenza);
        System.out.println();
        System.out.println("Path.");
        for (int i = 0; i < matriceAdiacenza.length; i++)
        {
            if (i != nodo_partenza)
            {  // Evita di stampare il nodo di partenza
                System.out.print("Nodo " + i + ": Costo = " + cost[i] + ", Percorso = ");
                a.stampaPercorso(i, precedente);
                System.out.println();
            }
        }
    }
}

