
enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};


typedef struct {
    uint16_t tapKey, holdKey;
    uint8_t step;
} symshift_pair;

#define SYMSHIFT(kc1, kc2) {.tapKey = kc1, .holdKey = kc2, .step = 0}

uint8_t symshift_dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    }
    return MORE_TAPS;
}

void on_symshift_dance(qk_tap_dance_state_t *state, void *user_data) {
    symshift_pair *pair = (symshift_pair *) user_data;
    if (state->count == 2) {
        tap_code16(pair->tapKey);
        tap_code16(pair->tapKey);
    }
    if (state->count > 2) {
        tap_code16(pair->tapKey);
    }
}

void symshift_finished(qk_tap_dance_state_t *state, void *user_data) {
    symshift_pair *pair = (symshift_pair *) user_data;
    pair->step = symshift_dance_step(state);
    switch (pair->step) {
        case SINGLE_TAP: register_code16(pair->tapKey); break;
        case SINGLE_HOLD: register_code16(pair->holdKey); break;
    }
}

void symshift_reset(qk_tap_dance_state_t *state, void *user_data) {
    symshift_pair *pair = (symshift_pair *) user_data;

    switch (pair->step) {
        case SINGLE_TAP: unregister_code16(pair->tapKey); break;
        case SINGLE_HOLD: unregister_code16(pair->holdKey); break;
    }
    pair->step = 0;
}

#define SYMSHIFT_FN(symshift_i) { .fn = {on_symshift_dance, symshift_finished, symshift_reset}, .user_data = &symshifts[symshift_i], }


// SINGLE_TAP = 1,
//     SINGLE_HOLD,
//     DOUBLE_TAP,
//     DOUBLE_HOLD,
//     DOUBLE_SINGLE_TAP,

// void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
//     if(state->count == 3) {
//         tap_code16(KC_Q);
//         tap_code16(KC_Q);
//         tap_code16(KC_Q);
//     }
//     if(state->count > 3) {
//         tap_code16(KC_Q);
//     }
// }

#if 0
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_Q); break;
        case SINGLE_HOLD: register_code16(KC_1); break;
        case DOUBLE_TAP: register_code16(KC_Q); register_code16(KC_Q); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Q); register_code16(KC_Q);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_Q); break;
        case SINGLE_HOLD: unregister_code16(KC_1); break;
        case DOUBLE_TAP: unregister_code16(KC_Q); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Q); break;
    }
    dance_state[0].step = 0;
}


typedef struct {
    uint16_t single_tap, single_hold, double_tap, double_single;
    uint8_t step;
} oryx_tapdance;

uint8_t oryx_dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    }
    return MORE_TAPS;
}

void on_oryx_dance(qk_tap_dance_state_t *state, void *user_data) {
    oryx_tapdance *td = (oryx_tapdance *) user_data;
    if (state->count == 3) {
        tap_code16(td->single_tap);
        tap_code16(td->single_tap);
        tap_code16(td->single_tap);
    }
    if (state->count > 3) {
        tap_code16(td->single_tap);
    }
}

void oryx_finished(qk_tap_dance_state_t *state, void *user_data) {
    oryx_tapdance *td = (oryx_tapdance *) user_data;
    td->step = symshift_dance_step(state);
    switch (td->step) {
        case SINGLE_TAP: register_code16(td->single_tap); break;
        case SINGLE_HOLD: register_code16(td->single_hold); break;
        case DOUBLE_TAP: 
            if (td->double_tap) {
                register_code16(td->double_tap);
            }
            else {
                register_code16(td->single_tap); register_code16(td->single_tap);
            }
            break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Q); register_code16(KC_Q);
    }
}

void oryx_reset(qk_tap_dance_state_t *state, void *user_data) {
    symshift_pair *pair = (symshift_pair *) user_data;

    switch (pair->step) {
        case SINGLE_TAP: unregister_code16(pair->tapKey); break;
        case SINGLE_HOLD: unregister_code16(pair->holdKey); break;
    }
    pair->step = 0;
}


#endif
