#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>

// Pin direction
typedef enum
{
    INPUT,
    OUTPUT
} Direction;

// Pin state
typedef enum
{
    LOW = 0,
    HIGH = 1
} State;

// GPIO settings
typedef struct
{
    void *port;
    uint8_t pin;
    Direction dir;
} GPIO;

// Function declarations
void gpio_init(const GPIO *gpio);
void gpio_write(const GPIO *gpio, State state);
State gpio_read(const GPIO *gpio);
void gpio_toggle(const GPIO *gpio);

#endif