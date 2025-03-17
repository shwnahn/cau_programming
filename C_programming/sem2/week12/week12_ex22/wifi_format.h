// wifi frame format
#ifndef WIFI_FORMAT_H
#define WIFI_FORMAT_H
typedef struct _wifi_format_t {
    char frame_control[2];
    char duration_id[2];
    char address1[6];
    char address2[6];
    char address3[6];
    char sequence_control[2];
    char address4[6];
    char payload[200];
} wifi_format_t;
#endif