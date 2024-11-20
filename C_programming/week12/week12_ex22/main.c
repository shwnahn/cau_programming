#include <stdio.h>
#include "wifi.h"
#include "wifi_format.h"

int main(void) {
    wifi_format_t data;
    int len = sizeof(data);

    wifi_tx(&data, len);
    wifi_rx(&data, &len);

    return 0;
}