#include <stdio.h>

int main() {
  int a[5];
  int n;
  int r[5];
  int f;
  int j;
  int i;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (i=0; i<n; i++) {
    f = 0;
    //updates i value, because the first one should be 1, not 0
    i++;
    //vector r shows which should be printed on each time
    for (j = 0; j<5; j++){
      r[j] = i % a[j];
    }
    
    //f will be 0 if none of the cases should be printed
    for (j = 0; j<5; j++){
      if (r[j] == 0){
	f = 1;
      }
    }
    //if none should be printed print -\n
    if (f != 1){
      printf("-\n");
    }
    //else print which should be printed
    else {
      for (j = 0; j<5; j++){
	if (r[j] == 0){
	  printf("%d", j);
	}
      }
      printf("\n");
    }
    //downgrades i value, so it returns to its original number
    i--;
  }

  return 0;
}
