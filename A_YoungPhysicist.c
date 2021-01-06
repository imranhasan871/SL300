#include <stdio.h>

int main(){

  int n, a, b, c;
  int sum1= 0;
  int sum2 = 0;
  int sum3 = 0;
  scanf("%d", &n);

  for (int i = 0; i< n; i++) {

    scanf("%d %d %d", &a, &b, &c);

    if (a >= -100 && a <= 100 && b >= -100 && b <= 100 && c >= -100 && c <= 100) {

      sum1 += a;
      sum2 += b;
      sum3 += c;
    }

  }

  if(sum1== 0 && sum2 ==0 && sum3 ==0){
    printf("YES\n");
  }
  else {
    printf("NO\n");
  }

  return 0;

}
