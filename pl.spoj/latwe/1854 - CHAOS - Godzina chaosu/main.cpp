#include <stdio.h>

int main()
{
    int n, h, m;
    scanf("%d", &n);
    while(n--) {
        scanf("%d:%d", &h, &m);
        m += 1;
        while(true) {
            h = ((m/60) + h ) % 24;
            m = m % 60;
            if(h == 0) {
                if(m < 10 || m % 10 == m / 10) break;
            }
            else if(h < 10){
                if(h == m % 10) break;
            }
            else if((h - h % 10)/10 == m % 10 && h % 10 == (m - m % 10)/10) break;
            m += 1;
        }
        printf("%02d:%02d\n", h, m);
    }
    return 0;
}
