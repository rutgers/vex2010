#ifndef CORTEX_CLOCKS_H_
#define CORTEX_CLOCKS_H_


uint64_t time_get_ms(void);

/* may discard some upper bits */
uint64_t time_get_us(void);

void udelay(uint32_t delay);

// Initialize the cortex's clocks.
void clocks_init(void);

#endif
