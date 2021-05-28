#include <stdio.h>
void main(){
 int nilai_mk[10];
 int i, nmaks, nmin;
 float total, rata;

 printf("       ===NILAI SEMESTER GANJIL===\n");
 printf("==========================================\n");

 for(i=0;i<10;i++){
  printf("Nilai pada mata kuliah ke-%d  adalah : ",(i+1));
  scanf("%d", &nilai_mk[i]);
  total = total + nilai_mk[i];
  rata = total / 10;
 }
nmaks = 0;
nmin = 0;
for(i=0;i<10;i++) {
    if(nilai_mk[i] > nilai_mk[nmaks]) {
        nmaks = i;
    }
    if(nilai_mk[i] < nilai_mk[nmin]) {
        nmin = i;
    }
}
printf("\n===========================================\n");
printf("Total nilai saya adalah      = %.0f \n", total);
printf("Nilai rata-rata saya adalah  = %.1f \n", rata);
printf("Nilai mata kuliah terbesar saya adalah = %i", nilai_mk[nmaks]);
printf("\nNilai mata kuliah terkecil saya adalah = %i", nilai_mk[nmin]);
}
