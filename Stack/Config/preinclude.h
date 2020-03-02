#define INCLUDE_REVISION_INFORMATION
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

/**
 * Enable MTO routing
 */
#define CONCENTRATOR_ENABLE TRUE
#define CONCENTRATOR_DISCOVERY_TIME 120
#define CONCENTRATOR_ROUTE_CACHE TRUE
#define MAX_RTG_SRC_ENTRIES 200
#define SRC_RTG_EXPIRY_TIME 255

/**
 * Scale other device tables appropriately
 */
#define NWK_MAX_DEVICE_LIST 50
#define ZDSECMGR_TC_DEVICE_MAX 200
#define MAX_NEIGHBOR_ENTRIES 20
#define MAX_RTG_ENTRIES 100
