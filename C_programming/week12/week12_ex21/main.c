#include <stdio.h>
#include "wifi.h"

int main(void) {
    char data[] = "Hello, World!";
    int len = sizeof(data);

    wifi_tx(data, len);
    wifi_rx(data, &len);

    return 0;
}