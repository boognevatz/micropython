# cmake file for Raspberry Pi Pico2
set(PICO_BOARD "waveshare_rp2350_touch_lcd_2")

set(MICROPY_FROZEN_MANIFEST ${MICROPY_BOARD_DIR}/manifest.py)

set(MICROPY_PY_NETWORK_WIZNET5K W5500)
set(MICROPY_PY_LWIP 1) # DHCP server(?)
# project root, ie. parent dir of micropython
set(PICOTOOL_FETCH_FROM_GIT_PATH ${CMAKE_SOURCE_DIR}/../../..)

message("PICOTOOL_FETCH_FROM_GIT_PATH: ${PICOTOOL_FETCH_FROM_GIT_PATH}")
# To change the gpio count for QFN-80
# set(PICO_NUM_GPIOS 48)

# Use the correct (16MB) flash chip:
# chatgpt recommendation! not needed!
#set(MICROPY_BOARD_BOOT2_NAME "boot2_w25q080")
#set(PICO_BOOT_STAGE2_SOURCE "${PICO_SDK_PATH}/src/rp2350/boot_stage2/boot2_w25q080.S")

