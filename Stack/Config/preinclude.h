#define MT_SYS_KEY_MANAGEMENT 1
 #define FEATURE_NVEXID 1

// Save memory
#undef NWK_MAX_BINDING_ENTRIES
 #define NWK_MAX_BINDING_ENTRIES 1
 #undef APS_MAX_GROUPS
 #define APS_MAX_GROUPS 1

// Increase NV pages to 3 to allow for bigger device tables
#undef NVOCMP_NVPAGES
 #define NVOCMP_NVPAGES 3

// Disabling MULTICAST is required in order for proper group support.
// If MULTICAST is not disabled, the group adress is not included in the APS header
#define MULTICAST_ENABLED FALSE

// Increase the max number of boardcasts, the default broadcast delivery time is 3 seconds
// with the value below this will allow for 1 broadcast every 0.15 second
#define MAX_BCAST 30

#undef  ZDNWKMGR_MIN_TRANSMISSIONS
#define ZDNWKMGR_MIN_TRANSMISSIONS      0
#undef  ZDNWKMGR_ACCEPTABLE_ENERGY_LEVEL
#define ZDNWKMGR_ACCEPTABLE_ENERGY_LEVEL  0xAE


#define LINK_DOWN_TRIGGER 12
#define NWK_ROUTE_AGE_LIMIT 5
#define DEF_NWK_RADIUS 15
#define DEFAULT_ROUTE_REQUEST_RADIUS 8
#define ROUTE_DISCOVERY_TIME 13
#define MTO_RREQ_LIMIT_TIME 5000

#undef  MAC_CFG_TX_DATA_MAX
#define MAC_CFG_TX_DATA_MAX 16

#undef  MAC_CFG_TX_MAX
#define MAC_CFG_TX_MAX  32

#undef  MAC_CFG_RX_MAX
#define MAC_CFG_RX_MAX  16


/**
 * Enable MTO routing
 */
#define CONCENTRATOR_ENABLE TRUE
 #define CONCENTRATOR_DISCOVERY_TIME 100
 #define CONCENTRATOR_ROUTE_CACHE TRUE
 #define MAX_RTG_SRC_ENTRIES 200
 #define SRC_RTG_EXPIRY_TIME 2

/**
 * Scale other device tables appropriately
 */
#define NWK_MAX_DEVICE_LIST 50
 #define ZDSECMGR_TC_DEVICE_MAX 200
 #define MAX_NEIGHBOR_ENTRIES 20
 #define MAX_RTG_ENTRIES 100

/**
 * Reduce the APS ack wait duration from 6000 ms to 1000 ms (value * 2 = value in ms).
 * This will make requests timeout quicker, in pratice the default timeout of 6000ms is too long.
 */
#define APSC_ACK_WAIT_DURATION_POLLED 500

// From https://www.ti.com/lit/an/swra650b/swra650b.pdf
#define LINK_DOWN_TRIGGER 12
 #define NWK_ROUTE_AGE_LIMIT 5
 #define DEF_NWK_RADIUS 15
 #define DEFAULT_ROUTE_REQUEST_RADIUS 8
 #define ZDNWKMGR_MIN_TRANSMISSIONS 0
 #define ROUTE_DISCOVERY_TIME 13
 #define MTO_RREQ_LIMIT_TIME 5000

// Different configs, uncomment for for launchpad firmware
#define LAUNCHPAD_CONFIG 1

#ifdef LAUNCHPAD_CONFIG
 #define CONFIG_RF_24GHZ                         0x0000001c
 #define CONFIG_RF_HIGH_PA                       0x0000001d
 #define SET_CCFG_MODE_CONF_XOSC_CAPARRAY_DELTA  0xc1
 #else
 #define CONFIG_RF_24GHZ                         0x0000006
 #define CONFIG_RF_HIGH_PA                       0x0000005
 #define SET_CCFG_MODE_CONF_XOSC_CAPARRAY_DELTA  0xfa
 #endif
