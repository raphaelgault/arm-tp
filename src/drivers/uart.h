#pragma once

#include <stddef.h>

typedef enum
{
    UART_ERR_PARITY,
    UART_ERR_FRAMING,
    UART_ERR_NOISE,
    UART_ERR_OVERRUN,
    UART_ERR_TIMEOUT,
} uart_error_t;

size_t uart_recv(char *buf, size_t max, size_t timeout, uart_error_t *error);
void uart_send(const char *buf, size_t n);
