#include <stdio.h>

int main(void)
{
  float peso, distanza;
  int livUrgenza;
  float spesa;

  printf ("inserisci il peso della merce (in KG): ");
  scanf ("%f", &peso);
  printf("inserisci la distanza che deve percorrere la merce (in KM):");
  scanf ("%f", &distanza);
  printf("inserisci il livello di urgenza della spedizione (digita 0 se non urgente, 1 se urgente): ");
  scanf ("%d", &livUrgenza);

  if (livUrgenza == 0)
  {
    if (distanza < 100)
      spesa = 1*distanza;
    if (distanza>100, distanza<300)
      spesa = 2*distanza;
    if (distanza>300 )
      spesa = 3*distanza;
  }
if (livUrgenza == 1)
{
  if (distanza < 100)
    spesa = 2.5*distanza;
  if (distanza>100, distanza<300)
    spesa = 3.5*distanza;
  if (distanza>300 )
    spesa = 4*distanza;
}
printf("la spesa per la spedizione e' %f", spesa);
  return 0;
}
