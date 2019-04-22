#include <stdio.h>
#include <stdint.h>

static
int test_endianess_(int argc, char* argv[])
{
  const int32_t x = 0x04030201;
  const uint8_t i = *((const uint8_t*)(&x));

  switch (i) {
    case 0x1:
      printf("This machine is little-endian!\r\n");
      break;
    case 0x4:
      printf("This machine is big-endian!\r\n");
      break;

    default:
      printf("Endianess is unknown!\r\n");
      break;
  }

  return 0x0;
}

int main(int argc, char* argv[])
{
  return test_endianess_(argc, argv);
}
