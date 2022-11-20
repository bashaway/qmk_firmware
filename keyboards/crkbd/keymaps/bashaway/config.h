/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define TAPPING_FORCE_HOLD
//#define TAPPING_TERM 100

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#define MOUSEKEY_DELAY 300
#define MOUSEKEY_INTERVAL 25
#define MOUSEKEY_MAX_SPEED 5
#define MOUSEKEY_TIME_TO_MAX 20

// https://docs.qmk.fm/#/ja/feature_mouse_keys
/* 
MOUSEKEY_DELAY 300 移動キーを押してからカーソルが移動するまでの遅延
MOUSEKEY_INTERVAL 50 カーソル移動間の時間
MOUSEKEY_MAX_SPEED 10 加速が停止する最大のカーソル速度
MOUSEKEY_TIME_TO_MAX 20 最大カーソル速度に達するまでの時間
MOUSEKEY_WHEEL_DELAY 300 ホイールキーを押してからホイールが動くまでの遅延
MOUSEKEY_WHEEL_INTERVAL 100 ホイールの動きの間の時間
MOUSEKEY_WHEEL_MAX_SPEED 8 スクロールアクションごとのスクロールステップの最大数
MOUSEKEY_WHEEL_TIME_TO_MAX 40 最大スクロール速度に達するまでの時間
*/
