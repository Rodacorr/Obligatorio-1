//OBLIGATORIO PROGRAMACION 1 (18/07/2022).
//INTEGRANTES: Jorge Laport. CI: 4.425.395-0.
//             Agustin Lopez. CI: 5.001.795-4.
//             Matias Pirez. CI: 5.088.582-8.


#include <iostream>
#include <stdio.h>

    //Ejercicio1   (12-165).
/*
const int N = 6;
typedef char strings[N];                //String de palabras.
typedef char strigcontrol[N+N];         //String de control.
typedef enum {FALSE,TRUE} boolean;

int main()
{
    strings str1, str2, str3;                               //  Declaracion de todas las variables
    strigcontrol strctr;                                    //  utilizadas en el EJ 1.
    int intentosrest=0;                                     //
    int i=0,j=0,k=0,r=0,q=0;                                //
    char palabra,adivinar;                                  //
    boolean coincide,correcto;                              //

    i=0;                                                    //INICIO Programa EJ1.
    correcto = FALSE;
    printf("\nIngrese la palabra de 5 letras: ");               //Comienzo ingresando la palabra.
    do{
        scanf("%c",&palabra);
        strctr[i]=palabra;
        i++;

    }while(i<(N+N) && palabra!='\n');
    if(i==6){                                                   //Control si la palabra es de 5 letras o no.
        i=0;
        do{
            str1[i]=strctr[i];
            i++;
        }while(i<N-1);
        str1[i]='\0';
        correcto=TRUE;
    }
    if(i>6){
        printf("\nERROR palabra es mayor que 5 letras.\n");
    }
    else
        if(i<5)
            printf("\nERROR palabra es menor que 5 letras.\n");

    if(correcto){                                               //Si es de 5 letras empiezo el programa.
        i=0;
        while(i<N-1)                                            //Cargo arreglos auxiliares (str3) para que
        {                                                       //no contengan basura para luego poder utilizarlos.
            str3[i]='-';
            i++;
        }
        i=0;

        i=0;
        printf("\nLa palabra ingresada es: ");                  //Muestro la palabra ingresada al usuario que la creo
        while(i<N-1)
        {
            printf("%c",str1[i]);
            i++;
        }

        printf("\n\nIngrese la cantidad de intentos: ");
        scanf("%d", &intentosrest);
        getchar();
        system("cls");                                          //Luego de pedir intentos limpio la consola para que el jugador pueda comenzar.

        if(correcto){                                           //Si (correcto==TRUE) el juego comienza.
        do
        {
            printf("\n\nTiene %d intentos restantes.",intentosrest);
            printf("\nIngrese una palabra de 5 letras: ");

            j=0;
            while(j<N-1)                                        //Cargo en str2 la palabra del usuario para comprar si es la palabra o no.
            {
                scanf("%c",&adivinar);
                str2[j] = adivinar;
                j++;
            }
            getchar();
            str2[j] = '\0';

            j=0;
            printf("\nLa palabra que ingreso es: ");            //Le muestro al usuario la palabra que ingreso.
            while(j<N-1)
            {
                printf("%c",str2[j]);
                j++;
            }

            coincide = TRUE;                                    //Inicio coincide en TRUE.
            for(k=0; k<N-1; k++)                                //Si la letra de str2[i] no coincide con str1[i] entonces coincide = FALSE.
            {
                if(str1[k] != str2[k])
                {
                    coincide = FALSE;
                }
            }
            if (coincide)                                       //Si coinciden todas y tengo intentos entonces Gane.
            {
                printf("\n\n\nFelicitaciones!!\n\n\n");
            }
            else
            {
                q = 0;
                printf("\nPalabra a adivinar: ");               //Como no coincide imprimo
                for(k=0; k<N-1; k++)
                {
                    if(str1[k] == str2[k])
                    {
                        printf(" %c ",str1[k]);                 //Si la letra de str1[i] es igual a la de str2[i] entonces la imprimo.

                    }
                    else
                    {
                        printf(" - ");                          //Si la letra de str1[i] NO es igual a la de str2[i] pero esta en Str1 entonces imprimo '-'
                        for(r=0; r<N-1; r++)                    //y la guardo en el string str3.
                        {
                            if((r != k) && (str1[r] == str2[k]))
                            {
                                str3[q] = str2[k];
                                q++;
                            }
                        }
                    }

                }


                for(k=0; k<q; k++)
                    printf("\nLa Letra %c esta en la palabra pero le erraste de posicion.", str3[k]);       //Indico si esta en la posicion correcta o no.

                for(k=0; k<N-1; k++)
                {
                    if(str2[k] == str1[k])
                    {
                        printf("\nLa letra %c esta en la palabra y en la posicion correcta.",str1[k]);
                    }
                }
            }
            intentosrest--;
        }
        while(intentosrest > 0 && !coincide);           //Minetras los intentos son mayor a 0 y coincide = false entonces ejecuto el Do de vuelta.
    }                                                   //FIN "if(correcto)".

        if(intentosrest==0&&!coincide)                  //Si se cumple que intentos = 0 y !coincide entonces no se encontro la palabra.
        {
            printf("\n\nNo adivinase la palabra.");
            i=0;
            printf("\nLa palabra era: ");               //Se muestra la palabra que era.
            while(i<N-1)
            {
                printf("%c",str1[i]);
                i++;
            }
            printf("\n\n\nSuerte la proxima...\n\n\n");
        }
        }
}
*/

    //Ejercicio2    (170-384).
/*
const int N=2;
typedef int Matriz [N][N];
typedef enum {FALSE, TRUE} boolean;

int main()
{

    Matriz m;                                                                                       //VARIABLES
    int valor=0, i=0, j=0, total=0,total2=0,aciertos=0,fallos=0,intentos=10;                        //
    int fila=0,columna=0,diagonal=0,seleccion=0,totalD1=0, totalD2=0,totalCol=0,totalFil=0;         //
    boolean encontrado;                                                                             //

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("\nIngrese un numero del 0 al 9: ");                                             //Ingreso los valores de la matriz
            scanf("%d", &valor);
            if (valor>=0 && valor<10)
            {
                m[i][j]= valor;
            }
            else
            {
                while(valor<0 || valor>9)
                {
                    printf("\nNumero equivocado");                                                  //Si el valor es menor a 0 o mayor a 9
                    printf("\nIngrese un valor del 0 al 9: ");                                      //enonces le digo error y se lo pregunto de vuelta.
                    scanf("%d", &valor);
                    if (valor>=0 && valor<10)
                        m[i][j]= valor;
                }
            }
        }
    }
    do
    {
        printf("\nAhora elige un numero entre 0 y %d ",9*N);                                        //Le pregunto ingresar un valor entre 0 y 9*N.
        scanf("%d", &valor);
        intentos--;
        if(valor>=0 && valor<=N*9)
            total=valor;
        else
        {
            while(valor<0 || valor>9*N)                                                             //Si es menor a 0 o mayor a 9*N le indico que esta mal
            {                                                                                       //Le pido el numero de vuelta.
                printf("\nNumero equivocado");
                printf("\nElige un numero entre 0 y %d ",9*N);
                scanf("%d", &valor);
            }
            total=valor;
        }

        for(i=0; i<N; i++)                                                                           //Le muestro la matriz.
        {
            for(j=0; j<N; j++)

                printf(" %d ", m[i][j]);
            printf("\n");

        }
        printf("\nIngrese si es una fila, Columna o Diagonal quien suma el valor indicado:\nIngrese 1 para FILA\nIngrese 2 para COLUMNA\nIngrese 3 para DIAGONAL\nIngrese 4 para indicar que no encontro ningun resultado.\n");
        scanf("%d",&seleccion);

        total=0;                                                                                    //Le pregunto al usuario que caso piensa
        switch (seleccion)                                                                          //que tiene la solucion o no.
        {
        case 1:                                                                                     //CASO FILA
            printf("\nIngrese el numero de fila (Las filas se numeran de 1 a %d): ",N);
            scanf("%d",&fila);
            printf("\nValor ingresado: %d", valor);
            for(j=0; j<N; j++)
            {
                total=total + m[fila-1][j];                                                         //Sumo la fila.
            }
            if (valor==total)                                                                       //Si el valor que ingresa el usuario == total enotnces aciertos++.
            {
                aciertos++;
            }
            else
            {
                fallos++;
                printf("\nError, el total es: %d.\n",total);                                        //Si el valor que ingresa el usuario != total enotnces fallos++
            }                                                                                       //le muestro cual es el valor correcto.
            break;
        case 2:                                                                                     //CASO COLUMNA
            printf("\nIngrese el numero de columna (Las columnas se numeran de 1 a %d): ",N);
            scanf("%d",&columna);
            printf("\nValor ingresado: %d", valor);
            for(i=0; i<N; i++)
            {
                total=total + m[i][columna-1];                                                      //Sumo la columna
            }
            if (valor==total)                                                                       //Si el valor que ingresa el usuario == total enotnces aciertos++.
            {
                aciertos++;
            }
            else
            {
                fallos++;                                                                           //Si el valor que ingresa el usuario != total enotnces fallos++
                printf("\nError, el total es: %d.\n",total);                                        //le muestro cual es el valor correcto.
            }

            break;
        case 3:                                                                                     //CASO DIAGONAL
            printf("\nIngrese 1 para Diagonal Principal. \nIngrese 2 para la Diagonal Secundaria.\n");
            scanf("%d",&diagonal);
            printf("\nValor ingresado: %d", valor);
            if(diagonal=1)
            {
                for(i=0; i<N; i++)
                {
                    total=total+m[i][i];                                                            //Sumo la diagonal Principal si se elije la misma.
                }
            }
            else
            {
                for(i=0; i<N; i++)
                {
                    total=total+m[i][N-1-i];                                                         //Sumo la diagonal Secundaria si se elije la misma.
                }
            }
            if (valor==total)
            {
                aciertos++;                                                                          //Si el valor que ingresa el usuario == total enotnces aciertos++.
            }
            else
            {
                fallos++;                                                                            //Si el valor que ingresa el usuario != total enotnces fallos++
                printf("\nError, el total es: %d\n",total);                                          //le muestro cual es el valor correcto.
            }

            break;
        case 4:                                                                                      //CASO NO ENCONTRE NINGUNO.
            printf("No encontre ninguno.");
            printf("\nValor ingresado: %d", valor);
            total=0;
            encontrado = FALSE;
            totalD1=0;
            totalD2=0;
            totalFil=0;
            totalCol=0;
            i=0;
            j=0;

            do{                                                                                     //Do para iterar I.
                j=0;
                totalFil=0;
                totalCol=0;
                totalD1= totalD1 + m[i][i];                                                         //Itera diagonal principal.
                totalD2= totalD2 + m[i][N-1-i];                                                     //Itera diagonal secundaria.
                do{                                                                                 //Do para iterar J.
                    totalFil= totalFil + m[i][j];                                                   //Sumo FILAS.
                    totalCol= totalCol + m[j][i];                                                   //Sumo COLUMNAS.
                    j++;
                }while(j<N && !encontrado);                                                         //Minetras no se encuntra un valor y j<N sigo recorrindo las filas y columnas.

                if( valor==totalFil || valor==totalCol ){                                           //Si encuentro entonces se que esta mal e indico en donde esta el error.
                    encontrado=TRUE;
                    if(valor == totalCol){                                                          //IF para saber si el valor es en la Fila o la Columna.
                        printf("\n\nERROR el valor se encontro en la columna %d.\n",i+1);           //i+1 para mejor representacion para el usuario
                    }
                    else{
                        printf("\n\nERROR el valor se encontro en la fila %d.\n",i+1);              //i+1 para mejor representacion para el usuario
                    }
                }
                i++;
            }while(i<N && !encontrado);
            if( valor==totalD1 || valor==total2 ){                                                  //Chequea si se encontro el valor en una Diagonal.
                    encontrado=TRUE;
                    if(valor == totalD1){                                                           //Chequea si se encontro en la diagonal prin. o secu.
                        printf("\n\nERROR el valor se encontro en la Diagonal Principal.\n");
                    }
                    else{
                        printf("\n\nERROR el valor se encontro en la Diagonal Secundaria.\n");
                    }
                }
            if(encontrado){                                                                         //Si encotrado = TRUE entonces fallos++;
                fallos++;
            }
            else{
                aciertos++;                                                                         //Si encotrado = FALSE entonces aciertos++;
            }
            break;

        default:
            printf("\nError, las opciones son 1, 2, 3 o 4.");                                       //Si ingreso un caso fuera de las posibilidades le digo al usuario el error
        }
    }

    while(aciertos==0||intentos>0);

    switch (aciertos)                                                                               //Devuelvo la nota.
    {
    case 1:
    case 2:
        printf("\n\nResultado del juego: No es tu mejor juego.");
        break;
    case 3:
    case 4:
    case 5:
        printf("\n\nResultado del juego: Puedes mejorar.");
        break;
    case 6:
    case 7:
    case 8:
        printf("\n\nResultado del juego: Muy bien!.");
        break;
    case 9:
    case 10:
        printf("\n\nResultado del juego: Un genio.");
        break;
    }
}
*/
    //FIN
