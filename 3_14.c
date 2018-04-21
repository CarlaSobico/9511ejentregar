#include <stdio.h>
#include <stdlib.h>

void funcion(void) {
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main(void)
{
    funcion();/*Entra en la primer funcion, inicializa x=0 , le suma un numero y lo imprime, siendo x=1, sale de la funcion.*/
    funcion();/*Vuelve a entrar a la funcion, como dice static no vuelve a inicializar x en 0, mantiene el ultimo valor usado, en este caso es 1, le suma uno e imprime, por lo que imprime 2 y sale*/
    funcion();/*Hace lo mismo que el anterior imprimiendo 3*/
    funcion();/*imprime 4*/
    funcion();/*imprime 5*/

    return EXIT_SUCCESS;
}
