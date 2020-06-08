#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "i2c_master.h"

extern keymap_config_t keymap_config;

// Keymap Layers

#define _BASE		0
#define _LAYER_1	1

// Defines for task-manager etc.
#define CALTDEL	LCTL(LALT(KC_DEL))
#define TSKMGR	LCTL(LSFT(KC_ESC))


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base
 * ,----------------------------------------------------------------------------------------------------------------------.
 * |  ESC |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  | F7   |  F8  |  F9  | F10  | F11  | F12  | PRNT | ROLL | BRK  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |  ^   |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  0   |  ß   |   ´  | BKSP | INS  | HOME | PGUP |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | TAB  |  q   |  w   |  e   |  r   |  t   |  z   |  u   |  i   |  o   |  p   |  ü   |   +  |  #   | DEL  | END  | PGDN |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | CAPS |  a   |  s   |  d   |  f   |  g   |  h   |  j   |  k   |  l   |  ö   |  ä   |      | RET  |      |      |      | 
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |LSHIFT|  <   |  y   |  x   |  c   |  v   |  b   |  n   |  m   |  ,   |  .   |  -   |      |RSHIFT|      |  UP  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |LCTRL | LCMD | LALT |      |      |      | SPACE|      |      | RALT | RCMD |      | MENU | RCTRL| LEFT | DOWN | RIGHT| 
 * `----------------------------------------------------------------------------------------------------------------------'
 */
[_BASE] = LAYOUT( \
	KC_ESC,		KC_NO,		KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		KC_PSCR,	KC_SLCK,	KC_BRK,		\
    DE_CIRC,  	DE_1,		DE_2,		DE_3,		DE_4,		DE_5,		DE_6,		DE_7,		DE_8,		DE_9,		DE_0,		DE_SS,		DE_ACUT,	KC_BSPC,	KC_INS,		KC_HOME,	KC_PGUP,	\
	KC_TAB,		DE_Q,		DE_W,		DE_E,		DE_R,		DE_T,		DE_Z,		DE_U,		DE_I,		DE_O,		DE_P,		DE_UE,		DE_PLUS,	DE_HASH,	KC_DEL,		KC_END,		KC_PGDN,	\
	KC_CAPS,	DE_A,		DE_S,		DE_D,		DE_F,		DE_G,		DE_H,		DE_J,		DE_K,		DE_L,		DE_OE,		DE_AE,		KC_NO,		KC_ENT,		KC_NO,		KC_NO,		KC_NO,		\
	KC_LSFT,	DE_LESS,	DE_Y,		DE_X,		DE_C,		DE_V,		DE_B,		DE_N,		DE_M,		DE_COMM,	DE_DOT,		DE_MINS,	KC_NO,		KC_RSFT,	KC_NO,		KC_UP,		KC_NO,		\
	KC_LCTL,	KC_LCMD,	KC_LALT,	KC_NO,		KC_NO,		KC_NO,		KC_SPACE,	KC_NO,		KC_NO,		KC_RALT,	KC_RCMD,	KC_NO,		KC_MENU,	KC_RCTL,	KC_LEFT,	KC_DOWN,	KC_RIGHT	\
),

/* Layer 1
 * ,----------------------------------------------------------------------------------------------------------------------.
 * |  ESC |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  | F7   |  F8  |  F9  | F10  | F11  | F12  | PRNT | ROLL | BRK  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |  `   |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  0   |  -   |   =  | BKSP | INS  | HOME | PGUP |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | TAB  |  q   |  w   |  e   |  r   |  t   |  y   |  u   |  i   |  o   |  p   |  [   |   ]  |  \   | DEL  | END  | PGDN |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | CAPS |  a   |  s   |  d   |  f   |  g   |  h   |  j   |  k   |  l   |  ;   |  '   |      | RET  |      |      |      | 
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |LSHIFT|LSHIFT|  z   |  x   |  c   |  v   |  b   |  n   |  m   |  ,   |  .   |  /   |      |RSHIFT|      |  UP  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |LCTRL | LCMD | LALT |      |      |      | SPACE|      |      | RALT | RCMD |      | MENU | RCTRL| LEFT | DOWN | RIGHT| 
 * `----------------------------------------------------------------------------------------------------------------------'
 */
[_LAYER_1] = LAYOUT( \
	KC_TRNS,	KC_NO,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	\
    KC_GRAVE,  	KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,		KC_9,		KC_0,		KC_MINS,	KC_EQL,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	\
	KC_TRNS,	KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		KC_LBRC,	KC_RBRC,	KC_BSLS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	\
	KC_TRNS,	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_QUOT,	KC_NO,		KC_TRNS,	KC_NO,		KC_NO,		KC_NO,		\
	KC_TRNS,	KC_LSFT,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	KC_NO,		KC_TRNS,	KC_NO,		KC_TRNS,	KC_NO,		\
	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_NO,		KC_NO,		KC_NO,		KC_TRNS,	KC_NO,		KC_NO,		KC_TRNS,	KC_TRNS,	KC_NO,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS		\
)

};

// Combos

enum combos {
	CMB_RESET,
	CMB_LED,
	CMB_LAYER_0,
	CMB_LAYER_1
};

const uint16_t PROGMEM combo_reset[]	= {KC_LCTL, KC_BRK, COMBO_END};
const uint16_t PROGMEM combo_led[]		= {KC_RCTL, KC_UP, COMBO_END};
const uint16_t PROGMEM combo_layer_0[]	= {KC_LCTL, KC_F1,	COMBO_END};
const uint16_t PROGMEM combo_layer_1[]	= {KC_LCTL, KC_F2,	COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
	[CMB_RESET]		= COMBO_ACTION(combo_reset),
	[CMB_LED]		= COMBO_ACTION(combo_led),
	[CMB_LAYER_0]	= COMBO_ACTION(combo_layer_0),
	[CMB_LAYER_1]	= COMBO_ACTION(combo_layer_1),
};

// User Functions

// Runs just one time when the keyboard initializes.
void matrix_init_user(void)
{
 static uint8_t s_init = 0;
    if (!s_init) {
        i2c_init();

        s_init = 1;
    }
}

uint8_t new_leds = 0xFF;
uint8_t leds[2] = { 0xFF, 0xFF };

// Runs constantly in the background, in a loop.
void matrix_scan_user(void)
{
	if (leds[0] != new_leds)
	{
		leds[0] = new_leds;
		leds[1] = new_leds;
		
		i2c_transmit(0x70, leds, 2, 100);	//PCF8574A = 0x70, PCF8574 = 0x40
	}
}

void process_combo_event(uint8_t combo_index, bool pressed)
{
	static uint8_t led = 0;
	
	switch(combo_index) {
    case CMB_RESET:
		if (pressed) {
			reset_keyboard();
		}
		break;
	  
	case CMB_LED:
		if (pressed) {
			new_leds |= 0xD8;
			
			switch(led)
			{
			case 0: new_leds &=~0x08; led++; break;
			case 1: new_leds &=~0x10; led++; break;
			case 2: new_leds &=~0x40; led++; break;
			case 3: new_leds &=~0x80; led=0; break;
			}
		}
		break;
	  
	case CMB_LAYER_0:
		if (pressed) {
			layer_move(_BASE);
		}
		break;
	  
	case CMB_LAYER_1:
		if (pressed) {
			layer_move(_LAYER_1);
		}
		break;
	}
}

/* LEDs
0x01 = ScrollLock
0x02 = CapsLock

0x20	0x04
0x40	0x08
0x80	0x10
*/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode)
  {
  }
  return true;
};

void led_set_user(uint8_t usb_led)
{
	if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {
		new_leds &=~0x01;
    } else
	{
		new_leds |= 0x01;
	}
    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
        new_leds &=~0x02;
    } else
	{
		new_leds |= 0x02;
	}
    
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void)
{
  // Host Keyboard Layer Status
  oled_write_P(PSTR("Layer: "), false);
  
  switch (get_highest_layer(layer_state)) {
    case _BASE:
      oled_write_P(PSTR("Default\n"), false);
	  new_leds &=~0x04;
	  new_leds |= 0x20;
      break;
    case _LAYER_1:
      oled_write_P(PSTR("Layer 1\n"), false);
	  new_leds &=~0x20;
	  new_leds |= 0x04;
      break;
    default:
      oled_write_ln_P(PSTR("Undefined"), false);
  }

  // Host Keyboard LED Status
  uint8_t led_usb_state = host_keyboard_leds();
  oled_write_P(led_usb_state & (1<<USB_LED_NUM_LOCK) ? PSTR("NUMLCK ") : PSTR("       "), false);
  oled_write_P(led_usb_state & (1<<USB_LED_CAPS_LOCK) ? PSTR("CAPLCK ") : PSTR("       "), false);
  oled_write_P(led_usb_state & (1<<USB_LED_SCROLL_LOCK) ? PSTR("SCRLCK ") : PSTR("       "), false);
}
#endif