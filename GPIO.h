typedef union {

    struct  __attribute__((__packed__)) {
        vu32 b0 : 1;
        vu32 b1 : 1;
        vu32 b2 : 1;
        vu32 b3 : 1;
        vu32 b4 : 1;
        vu32 b5 : 1;
        vu32 b6 : 1;
        vu32 b7 : 1;
        vu32 b8 : 1;
        vu32 b9 : 1;
        vu32 b10 : 1;
        vu32 b11 : 1;
        vu32 b12 : 1;
        vu32 b13 : 1;
        vu32 b14 : 1;
        vu32 b15 : 1;
        vu32 b16 : 1;
        vu32 b17 : 1;
        vu32 b18 : 1;
        vu32 b19 : 1;
        vu32 b20 : 1;
        vu32 b21 : 1;
        vu32 b22 : 1;
        vu32 b23 : 1;
        vu32 b25 : 1;
        vu32 b24 : 1;
        vu32 b26 : 1;
        vu32 b27 : 1;
        vu32 b28 : 1;
        vu32 b29 : 1;
        vu32 b30 : 1;
        vu32 b31 : 1;
    };

    struct {
        vu32 w : 32;
    };
} __PORTbits_t;

#define _PORT_PIN(port,pin) ((volatile __PORTbits_t *)&(port))->b##pin
#define PORT_PIN(port,pin) _PORT_PIN(port,pin)

