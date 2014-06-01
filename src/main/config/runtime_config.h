#pragma once

enum {
    BOXARM = 0,
    BOXANGLE,
    BOXHORIZON,
    BOXBARO,
    BOXMAG,
    BOXHEADFREE,
    BOXHEADADJ,
    BOXCAMSTAB,
    BOXCAMTRIG,
    BOXGPSHOME,
    BOXGPSHOLD,
    BOXPASSTHRU,
    BOXBEEPERON,
    BOXLEDMAX,
    BOXLEDLOW,
    BOXLLIGHTS,
    BOXCALIB,
    BOXGOV,
    BOXOSD,
    BOXTELEMETRY,
    BOXAUTOTUNE,
    CHECKBOX_ITEM_COUNT
};

extern uint8_t rcOptions[CHECKBOX_ITEM_COUNT];

// FIXME some of these are flight modes, some of these are general status indicators
typedef struct flags_t {
    uint8_t OK_TO_ARM;
    uint8_t PREVENT_ARMING;
    uint8_t ARMED;
    uint8_t ANGLE_MODE;
    uint8_t HORIZON_MODE;
    uint8_t MAG_MODE;
    uint8_t BARO_MODE;
    uint8_t GPS_HOME_MODE;
    uint8_t GPS_HOLD_MODE;
    uint8_t HEADFREE_MODE;
    uint8_t PASSTHRU_MODE;
    uint8_t GPS_FIX;
    uint8_t GPS_FIX_HOME;
    uint8_t SMALL_ANGLE;
    uint8_t CALIBRATE_MAG;
    uint8_t FIXED_WING;                     // set when in flying_wing or airplane mode. currently used by althold selection code
    uint8_t AUTOTUNE_MODE;
} flags_t;

extern flags_t f;

bool sensors(uint32_t mask);
void sensorsSet(uint32_t mask);
void sensorsClear(uint32_t mask);
uint32_t sensorsMask(void);

void mwDisarm(void);