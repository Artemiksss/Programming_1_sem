#include <stdio.h>
struct triangle {
    float a, b, c;
};
enum {INClUDED = 0b0001, ACTIVE_SD = 0b0010, ACTIVE_COMPACT_FLASH = 0b0100, ACTIVE_MEMORY_STICK = 0b1000};
union {
    struct{
        unsigned char INClUDED : 1;
        unsigned char ACTIVE_SD : 1;
        unsigned char ACTIVE_COMPACT_FLASH : 1;
        unsigned char ACTIVE_MEMORY_STICK : 1;
    };
    unsigned char flag;
}card_reader;
int main() {
    enum lamp {
        incandescent = 1,
        fluorescent_lamps = 2,
        halogen_lamps = 3,
        led_lamps = 4,
        energy_saving_lamps = 5,
        metal_halide_lamps = 6,
        arc_mercury_lamps = 7,
        infrared_lamps = 8,
        neon_lamps = 9,
        sodium_lamps = 10,
        xenon_lamps = 11,
        kerosene_lamps = 12,
        quartz_lamps = 13,
        gas_discharge_lamps = 14,
        ultraviolet_lamps = 15
    };

    printf("%d \n", halogen_lamps);

    struct triangle TRL;
    printf("Triangle\n");
    printf("Input a:\n");
    scanf("%f", &TRL.a);
    printf("Input b:\n");
    scanf("%f", &TRL.b);
    printf("Input c:\n");
    scanf("%f", &TRL.c);
    float a, b, c;
    a = TRL.a;
    b = TRL.b;
    c = TRL.c;
    if (((b+c-a) > 0) && ((a+c-b) > 0) && ((a+b-c) > 0)){
        double perimeter;
        perimeter = a + b + c;
        printf("Triangle with sides: %.3f, %.3f, %.3f \n", TRL.a, TRL.b, TRL.c);
        printf("perimeter triangle: %.3f \n", perimeter);
    }
    else{
        printf("There is no such triangle \n");
    }
    scanf("%s", &card_reader.flag);
    
    if (card_reader.INClUDED){
        printf("Card-reader is included\n");
    }
    else{
        printf("Card-reader is off\n");
    }
    
    
    if (card_reader.ACTIVE_SD){
        printf("The SD card is active\n");
    }
    else{
        printf("The SD card is not active\n");
    }
    if (card_reader.ACTIVE_COMPACT_FLASH){
        printf("Compact Flash card is active\n");
    }
    else{
        printf("Compact Flash card is not active\n");
    }
    if (card_reader.ACTIVE_MEMORY_STICK){
        printf("Memory stick card is active\n");
    }
    else{
        printf("Memory stick card is not active\n");
    }
    return 0;
}
