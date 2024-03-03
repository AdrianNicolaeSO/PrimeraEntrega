
/*Entrega #3.3 Ejercicio Indivicual */

/*la función a realizar es la de encontrar el primer jugador en ganar en TGN */

/* los atriubutos de las entidades difieren con los entregados ya que añadimos también los del enunciado de esta entrega */

typedef struct {
	char username;
	char password;
} Jugador;

typedef struct {
	int IDPartida;
	char FechaYHoraFianal;
	int duracion;  /* en minutos */
	char ganador;
	char ciudad [4];
} Partida;



int main() {
	Jugador jugadores[4] = {{"jugador1" , "password1"},{"jugador2" , "password2"},{"jugador3" , "password3"},{"jugador4" , "password4"}};
	Partida partidas [4] = {{1,"2024-03-03 14:30",45, "jugador1", "TGN"},{2,"2024-03-12 17:30",35, "jugador2", "GIR"}, {3,"2024-04-01 10:20",54, "jugador1", "BCN"};{4,"2024-04-20 11:30",40, "jugador4", "MAD"}};
	
	char ciudadBuscada[] = "TGN";
	char primerGanador[50] = "";
	char fechaPrimerGanador[20] = "9999-99-99 99:99" /* iniciamos con el valor mas alto posible */
	for ( int i=0 ; i < 4 ; i++) {
		if ( strcmp(partidas[i].ciudad , ciudadBuscada) == 0 {
			if( strcmp(partidas[i].FechaYHoraFianal , fechaPrimerGanador) < 0 {
				strcpy( primerGanador , partidas[i].ganador);
				strcpy ( fechaPrimerGanador , partidas[i].FechaYHoraFianal);
			}
		}
	}
	
	if (strcmp(primerGanador, "") != 0{
		printf( "El primer gador en la ciudad %s es %s, en la fecha %s\n " : ., ciudadBuscada, primerGanador, fechaPrimerGanador);
	}
	
	return 0;
}
	