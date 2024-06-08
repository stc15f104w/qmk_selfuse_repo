/* Copyright 2023 Moritz Plattner
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "KB.h"
#include "config.h"
#include "mcuconf.h"
#include <qp.h>

led_config_t g_led_config = {
    // Key Matrix to LED Index
    {
        {5, 4, 3},  // Row 0
        {2, 1, 0}, // Row 1
    },
    // LED Index to Physical Position
    {
        {0, 0}, {0, 1}, {0, 2}, {1, 0}, {1, 1}, {1, 2}
    },
    // LED Index to Flag
    {1, 4, 4, 4, 4, 1}
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Keymap BASE: (Base Layer) Default Layer */
	/* Software USE: SolidWorks */
	[0] = LAYOUT(
		KC_KP_1, KC_KP_2, KC_KP_3,
		KC_KP_7, KC_KP_8, KC_KP_9
	)
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif


joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
    JOYSTICK_AXIS_IN(A4, 900, 575, 285),
    JOYSTICK_AXIS_IN(A2, 900, 575, 285),
};

// static painter_device_t display;

// void keyboard_post_init_kb(void) {
//     // Assuming qp_make_spi_device is the correct function to create the SPI device
//     display = qp_st7789_make_spi_device(172, 320, B0, B0, A6, 4, 0);

//     // Initialize the display
//     qp_init(display, QP_ROTATION_0); // Initialize the display with no rotation
// }

// void housekeeping_task_user(void) {
//     static uint32_t last_draw = 0;
//     if (timer_elapsed32(last_draw) > 33) { // Throttle to 30fps
//         last_draw = timer_read32();
//         // Draw 8px-wide rainbow down the left side of the display
//         for (int i = 0; i < 239; ++i) {
//             qp_line(display, 0, i, 7, i, i, 255, 255);
//         }
//         qp_flush(display);
//     }
// }