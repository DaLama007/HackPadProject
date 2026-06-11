[0] = LAYOUT(
  KC_HIDER, // Key to hide all the windows
  KC_DISCORD_MUTE,// Discord mute toggle
  DEVTOOLS  //Firefox devtools
);
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DEVTOOLS:
      if (record->event.pressed) {
        tap_code(KC_BTN2);
        wait_ms(50);
        tap_code(KC_Q); 
      }
      return false;
    
    case KC_DISCORD_MUTE:
      if(record->event.pressed){
        tap_code16(LCTL(LSFT(KC_M)));
      }
      return false;
    case KC_HIDER:
      if(record->event.pressed){
        tap_code(LGUI(KC_D));
      }
      return false;
    
    default:
      return true;
  }
};
