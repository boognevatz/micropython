// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "RP2350 TOUCH LCD 2 15.625MB"
#define MICROPY_HW_FLASH_STORAGE_BYTES          (12 * 1024 * 1024 + 5 * 128 * 1024) // 15.625 MB
//#define MICROPY_HW_FLASH_STORAGE_BYTES          (15 * 1024 * 1024 + 5 * 128 * 1024) // 15.625 MB its not working with wiznet
// 15*1024*1024 + 6*128*1024 not booting!

// Enable networking.
// if not defined, then "import tls" do not work in the final uf2 build.
#define MICROPY_PY_NETWORK 1
#define MICROPY_PY_NETWORK_HOSTNAME_DEFAULT     "RP2350"

// Wiznet HW config.
#define MICROPY_HW_WIZNET_SPI_ID            (0)
#define MICROPY_HW_WIZNET_SPI_BAUDRATE      (20 * 1000 * 1000)
#define MICROPY_HW_WIZNET_SPI_SCK           (18)
#define MICROPY_HW_WIZNET_SPI_MOSI          (19)
#define MICROPY_HW_WIZNET_SPI_MISO          (16)
#define MICROPY_HW_WIZNET_PIN_CS            (17)
#define MICROPY_HW_WIZNET_PIN_RST           (20)
// Connecting the INTN pin enables RECV interrupt handling of incoming data.
#define MICROPY_HW_WIZNET_PIN_INTN          (21)
