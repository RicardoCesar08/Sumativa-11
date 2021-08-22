#include <stdio.h>
#include <stdlib.h>

/*Elaborar una aplicación de línea de comandos en C diseñada para determinar el horóscopo,
y predecir el futuro de un usuario basado en la fecha de nacimiento, nombre y sexo.
Esta aplicación deberá determinar tu signo zodiacal, y predecir cómo será el futuro,
cómo estará de salud, qué pasará con las relaciones, cuáles son tu número y color de la suerte.
Estas predicciones y cálculos se basarán en la configuración astrológica que ocurrió al momento de
la fecha de nacimiento provista por el usuario.*/

typedef struct {
    char signo[15];
    char futuro[500];
    char salud [500];
    char relaciones[500];
    char suerteNum[15];
    char suerteCol[20];
}horoscopo;

void funcionleer(horoscopo *tuSigno);

int main()
{
/*Capricornio (22 de diciembre-20 de enero)*/
    horoscopo Capricornio;
    strcpy(Capricornio.signo, "Capricornio\n\n");
    strcpy(Capricornio.futuro, "Para Capricornio se viene un periodo lleno de abundancia y prosperidad. Para que las cosas fluyan a favor de los nacidos bajo este signo es muy importante asumir con tolerancia las discusiones que puedan presentarse en las proximas semanas, pues estas pueden originarse por sus imprudencias y necedades.\n\n");
    strcpy(Capricornio.salud, "Capricornio sentira ciertas molestias, es posible que vea afectado su sistema digestivo, es muy importante asistir al medico oportunamente para descifrar las causas y encontrar un tratamiento efectivo que le ayude a mejorar su salud antes de que las dolencias le lleguen a afectar en su cotidiano de manera significativa.\n\n");
    strcpy(Capricornio.relaciones, "En el amor se vienen tiempos de coqueteria y seduccion, vivira momentos de plenitud en su intimidad. La familia en es muy importante para encontrar elementos de equilibrio emocional que le ayudaran con los problemas que puedan presentarse.\n\n");
    strcpy(Capricornio.suerteNum, "3, 6, 16\n\n");
    strcpy(Capricornio.suerteCol, "Negro\n");



/*Acuario (21 de enero-18 de febrero)*/
    horoscopo Acuario;
    strcpy(Acuario.signo, "Acuario\n\n");
    strcpy(Acuario.futuro, "No derroches el dinero y recuerda que todavia tienes unos gastos pendientes. Este dia presenta caracteristicas especiales si estas esperando respuesta de un trabajo\n\n");
    strcpy(Acuario.salud, "El exceso de responsabilidades te esta agotando, debes delegar en alguien. Tu teson y tu perseverancia te ayudaran a lograr tus objetivos, como siempre. Si quieres mejorar tu imagen mediante un cambio, es el momento oportuno, tu salud te acompana.\n\n");
    strcpy(Acuario.relaciones, "En estos momentos tienes una oportunidad de ser feliz con alguien que esta entrando en tu vida. Tu sabes como has de llevar este tema, no hagas caso a los comentarios y los consejos de otros, que por muy bien intencionados que sean pueden acabar estropeando el asunto.\n\n");
    strcpy(Acuario.suerteNum,  "7, 14, 20\n\n");
    strcpy(Acuario.suerteCol, "Turquesa\n");



/*Piscis (19 de febrero-20 de marzo)*/
    horoscopo Piscis;
    strcpy(Piscis.signo, "Piscis\n\n");
    strcpy(Piscis.futuro, "Te pondran a prueba en el trabajo y te ira bien, saldras muy bien del evento. Tendras bastante suerte con el dinero pero, aun asi, no debes arriesgarte mucho.\n\n");
    strcpy(Piscis.salud, "aunque de salud estaras muy bien, debes buscar el equilibrio. No repararas en gastos para verte bien, pero lo cierto es que lo conseguiras. Si buscas la estabilidad, la vas a encontrar muy pronto, estas en el camino. Tienes algunas molestias musculares, pero con ejercicio se te pasaran.\n\n");
    strcpy(Piscis.relaciones, "En el amor, tendras que resolver los problemas que surjiran y lo haras muy bien. Algo positivo sucedera que cambiara cuestiones familiares que te incomodan.\n\n");
    strcpy(Piscis.suerteNum, "5, 11, 19\n\n");
    strcpy(Piscis.suerteCol, "Verde\n");



/*Aries (21 de marzo-20 de abril)*/
    horoscopo Aries;
    strcpy(Aries.signo, "Aries\n\n");
    strcpy(Aries.futuro, "apareceran nuevos proyectos que pueden estancarse si no se manejan de manera clara y precisa.\n\n");
    strcpy(Aries.salud, "El exceso de trabajo que has tenido se esta notando a diario en tu cuerpo, en tu caracter y hasta en tu cara. Necesitas un descanso. El aire libre y el sol actuaran positivamente sobre tu fisico y tu estado de animo.\n\n");
    strcpy(Aries.relaciones, "Rodeate de las personas que quieres. Aparte de tu pareja, tus amigos del alma seran los companeros perfectos de este dia festivo. Hablar con ellos y echar unas risas te hara tanto bien como dormir diez horas seguidas.\n\n");
    strcpy(Aries.suerteNum, "7, 17, 21\n\n");
    strcpy(Aries.suerteCol, "Rojo\n");



/*Tauro (21 de abril- 21 de mayo)*/
    horoscopo Tauro;
    strcpy(Tauro.signo, "Tauro\n\n");
    strcpy(Tauro.futuro, "Hay que estar muy atento para no dejar pasar oportunidades claves para su futuro, La economia se ve favorecida para los nacidos bajo este signo, pues podrian aparecer ingresos adicionales que mejoraran la economia familiar.\n\n");
    strcpy(Tauro.salud, "Es importante cuidar mucho del cuerpo, se vienen esfuerzos grandes y es muy importante darse el debido descanso despues de las jornadas de trabajo.\n\n");
    strcpy(Tauro.relaciones, "En el amor se encontrara con que su pareja tiene deseos de establecerse y aclarar los planes sobre el futuro asi que sea paciente, tolerante y comprensivo. Para los solteros puede darse un encuentro con una persona de la infancia con la que puede darse un romance pasajero.\n\n");
    strcpy(Tauro.suerteNum, "4, 6, 11\n\n");
    strcpy(Tauro.suerteCol, "Amarillo\n");



/*Géminis (22 de mayo-21 de junio)*/
    horoscopo Geminis;
    strcpy(Geminis.signo, "Geminis\n\n");
    strcpy(Geminis.futuro, "Tendras mucha inspiracion Geminis, no dejes de aplicar todas tus ideas. En este dia recibiras dinero que no esperabas. Tus ahorros aumentaran por un ingreso inesperado, valoralo y guarda un poco.\n\n");
    strcpy(Geminis.salud, "Geminis debera trabajar en su yo interior, hay que hacer un ejercicio muy consciente de evaluación sobre los miedos que no le permiten avanzar o tomar decisiones efectivamente.\n\n");
    strcpy(Geminis.relaciones, "En cuanto a las relaciones sociales, mayo es el mes propicio para que los Geminis aporten de manera positiva en el nucleo de sus familias, es un momento ideal para disfrutar de su circulo de amistades. En el amor se recomienda para las parejas afianzar el lazo de confianza y de compromiso. Para los solteros se aproxima la posibilidad de una nueva relacion, es un gran momento para lanzarse a la conquista\n\n");
    strcpy(Geminis.suerteNum, "2, 4, 7, 9\n\n");
    strcpy(Geminis.suerteCol, "Blanco\n");



/*Cáncer (22 de junio-22 de julio)*/
    horoscopo Cancer;
    strcpy(Cancer.signo, "Cancer\n\n");
    strcpy(Cancer.futuro, "Es muy probable que Cancer vea venir la posibilidad de emprender proyectos, los cambios y las oportunidades empiezan a ser abundantes pero hay que tener cuidado con las decisiones que se toman al respecto, no es necesario apresurarse.\n\n");
    strcpy(Cancer.salud, "No deberias descuidar el tomar vitaminas, en forma de fruta y verduras frescas. Quieres cuidar mas tu imagen y cambiarla, animo, quedaras estupendamente. Vas a tener mas problemas o tension estos dias, pero para tu salud,sera necesario que descanses.\n\n");
    strcpy(Cancer.relaciones, "Compartir el almuerzo o un aperitivo con tu gente, tu pareja, tu familia o tus amigos, te llenara hoy de satisfaccion. Necesitas ese toque de alegria y de afecto que ellos te proporcionan. Si todavia andas algo colgada de un ex, nostalgica Cancer, a partir de hoy intenta superar ese recuerdo. Nunca segundas partes fueron buenas. Dale una oportunidad a alguien que la pide a diario desde hace tiempo.\n\n");
    strcpy(Cancer.suerteNum, "5, 6, 8, 19\n\n");
    strcpy(Cancer.suerteCol, "Blanco\n");



/*Leo (23 de julio-23 de agosto)*/
    horoscopo Leo;
    strcpy(Leo.signo, "Leo\n\n");
    strcpy(Leo.futuro, "Se ven venir nuevos proyectos y alianzas que afianzaran el espiritu competitivo y las destrezas para el trabajo en equipo de los regidos bajo este signo. \n\n");
    strcpy(Leo.salud, "Leo tendra durante todo este mes una gran motivacion para hacer deporte al aire libre, lo que le vendra bien para su salud, vale la pena hacer lo posible por aprovechar de este impulso.\n\n");
    strcpy(Leo.relaciones, "Tal vez hoy sientas nostalgia por alguien de tu pasado amoroso, pero si esta relacion termino es dificil que puedas recuperarla. Mientras sigas pensando en esta persona a diario te estas cerrando puertas para que alguien nuevo llegue a tu vida. Lucha por recuperar la paz y la tranquilidad perdidas.\n\n");
    strcpy(Leo.suerteNum, "1, 9, 10\n\n");
    strcpy(Leo.suerteCol, "Naranja\n");



/*Virgo (24 de agosto-23 de septiembre)*/
    horoscopo Virgo;
    strcpy(Virgo.signo, "Virgo\n\n");
    strcpy(Virgo.futuro, "De momento tomate las cosas con calma. No decidas hoy sobre temas trascendentales en tu vida, Virgo. No es momento de correr riesgos en ningun terreno. Por muy buenas que te parezcan las opciones que te surgen a diario, aplaza la decision y meditalo antes, porque podrian salirte rana.\n\n");
    strcpy(Virgo.salud, "debera probar nuevas actividades que le ayudaran a mejorar su salud, las clases de yoga son una buena sugerencia pues dadas las dificultades que puede traer el mes, no solo lograra ejecitar su cuerpo si no encontrara un espacio para liberar la mente.\n\n");
    strcpy(Virgo.relaciones, "Recomendamos pasar tiempo con familia y amigos ya que se vienen grandes oportunidades para compartir. En el amor los solteros deben estar atentos a las personas que conoceran durante las actividades de ocio. Los que ya tienen su pareja pueden experimentar una pequena crisis por el estres causado por el trabajo. Un descanso en pareja puede ayudarles a fortalecer el lazo\n\n");
    strcpy(Virgo.suerteNum, "10, 15, 27\n\n");
    strcpy(Virgo.suerteCol, "Marron\n");



/*Libra (24 de septiembre-23 de octubre)*/
    horoscopo Libra;
    strcpy(Libra.signo, "Libra\n\n");
    strcpy(Libra.futuro, "No dejes que a diario te invada el temor, tienes la fuerza necesaria para salir adelante en cualquier circunstancia. Es momento de empezar a estar bien y hacer caso de lo que te dicen quienes te quieren.\n\n");
    strcpy(Libra.salud, "Nada mejor que empezar el mes con un cambio de vida. Hacer deporte le ayudara a mejorar su estado de animo que puede verse afectado en varios momentos del mes por algunas discuciones de tipo familiar que pueden presentarse.\n\n");
    strcpy(Libra.relaciones, "Tu relacion con tu familia sera amena y distendida, se llevaran bien. Los animos estan revueltos en tu entorno, procura no involucrarte demasiado.\n\n");
    strcpy(Libra.suerteNum, "2, 8, 19\n\n");
    strcpy(Libra.suerteCol, "Rosa\n");



/*Escorpión (24 de octubre-22 de noviembre)*/
    horoscopo Escorpion;
    strcpy(Escorpion.signo, "Escorpion\n\n");
    strcpy(Escorpion.futuro, "Habra cambios con los que no contabas y eso te disgusta Escorpio, pero debes aceptarlos. Daras el cien por cien en tu trabajo y eso tendra su recompensa pronto. Entras en una buena racha para los negocios, si lo estabas pensando, animate.\n\n");
    strcpy(Escorpion.salud, "Evite los excesos y tenga mucho cuidado a la hora de tomar desiciones. Habra un avance positivo en la salud de Escorpio, mucha calma y descanso es lo que sugieren los astros.\n\n");
    strcpy(Escorpion.relaciones, "Es importante darse la oportunidad de salir y divertirse pues esto le permitira conocer nuevas personas y es muy probable que llegue a conocer una persona que puede ser importante en su vida.\n\n");
    strcpy(Escorpion.suerteNum, "4, 13, 21\n\n");
    strcpy(Escorpion.suerteCol, "Rojo\n");



/*Sagitario (23 de noviembre-21 de diciembre)*/
    horoscopo Sagitario;
    strcpy(Sagitario.signo, "Sagitario\n\n");
    strcpy(Sagitario.futuro, "Saldras adelante pero, sobre todo, no dejes que la ansiedad se apodere de ti, como te sucede a diario, porque te entorpecera el trabajo y podria hacerte cometer algun error importante. Levanta el animo y afronta la jornada con una sonrisa en los labios, aunque te cueste. Es tu mejor arma para combatir la energia negativa que parece te esta rondando.\n\n");
    strcpy(Sagitario.salud, "debe hacer un esfuerzo muy grande para manejar el estres, pues acabara padeciendo de una fuerte ansiedad que afectara gravemente su salud.\n\n");
    strcpy(Sagitario.relaciones, "Recuerda tambien que el amor te esta funcionando bien y que este es un pilar fundamental para tu estabilidad emocional. Si estas conociendo a alguien nuevo, no tengas prisa por avanzar, disfruta a diario de estos momentos tan geniales del enamoramiento y deja que todo siga su curso sin apresuramientos innecesarios.\n\n");
    strcpy(Sagitario.suerteNum, "3, 8, 13\n\n");
    strcpy(Sagitario.suerteCol, "Morado\n");

    char nombre[20], sexo[15];
    int dia, mes, year;

    printf("ingrese su nombre: ");
    scanf("%s", &nombre);
    printf("ingrese su sexo: ");
    scanf("%s", &sexo);
    printf("ingrese el dia que nacio: ");
    scanf("%d", &dia);
    printf("ingrese el mes que nacio: ");
    scanf("%d", &mes);
    printf("ingrese el año que nacio: ");
    scanf("%d", &year);

    if ((dia >=20 && mes == 1) || (dia<=18 && mes == 2)){
            funcionleer(&Acuario);
        }
    if ((dia >=19 && mes == 2) || (dia<=20 && mes == 3)){
            funcionleer(&Piscis);
        }
    if ((dia >=21 && mes == 3) || (dia<=20 && mes == 4)){
            funcionleer(&Aries);
        }
    if ((dia >=21 && mes == 4) || (dia<=20 && mes == 5)){
            funcionleer(&Tauro);
        }
    if ((dia >=21 && mes == 5) || (dia<=20 && mes == 6)){
             funcionleer(&Geminis);
        }
    if ((dia >=21 && mes == 6) || (dia<=20 && mes == 7)){
            funcionleer(&Cancer);
        }
    if ((dia >=21 && mes == 7) || (dia<=21 && mes == 8)){
            funcionleer(&Leo);
        }
    if ((dia >=22 && mes == 8) || (dia<=22 && mes == 9)){
            funcionleer(&Virgo);
        }
    if ((dia >=23 && mes == 9) || (dia<=22 && mes == 10)){
            funcionleer(&Libra);
        }
    if ((dia >=23 && mes == 10) || (dia<=22 && mes == 11)){
            funcionleer(&Escorpion);
        }
    if ((dia >=23 && mes == 11) || (dia<=20 && mes == 12)){
            funcionleer(&Sagitario);
        }
    if ((dia >=21 && mes == 12) || (dia<=19 && mes == 1)){
           funcionleer(&Capricornio);
        }

    return 0;
}

void funcionleer(horoscopo *tuSigno){
       printf("\nTu signo es: %s", tuSigno->signo);
       printf("Predicciones del futuro: %s", tuSigno->futuro);
       printf("En cuanto a tu salud: %s", tuSigno->salud);
       printf("Respecto a las relaciones: %s", tuSigno->relaciones);
       printf("Sus numeros de la suerte son: %s", tuSigno->suerteNum);
       printf("Tu color de la suerte es el: %s", tuSigno->suerteCol);
}
