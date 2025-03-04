#ifndef BLE_MESH_CLIENT_H
#define BLE_MESH_CLIENT_H

#include <stdint.h>
#include "esp_ble_mesh_common_api.h"
#include "esp_ble_mesh_provisioning_api.h"
#include "esp_ble_mesh_networking_api.h"
#include "esp_ble_mesh_config_model_api.h"
#include "esp_ble_mesh_generic_model_api.h"

// // Constants
// #define TAG "EXAMPLE"
// #define CID_ESP 0x02E5

// // Structs
// struct example_info_store {
//     uint16_t net_idx;   /* NetKey Index */
//     uint16_t app_idx;   /* AppKey Index */
//     uint8_t  onoff;     /* Remote OnOff */
//     uint8_t  tid;       /* Message TID */
// } __attribute__((packed));

// // Variables
// extern uint8_t dev_uuid[16];
// extern struct example_info_store store;
// extern nvs_handle_t NVS_HANDLE;
// extern const char * NVS_KEY;
// extern esp_ble_mesh_client_t onoff_client;
// extern esp_ble_mesh_cfg_srv_t config_server;
// extern esp_ble_mesh_model_t root_models[];
// extern esp_ble_mesh_elem_t elements[];
// extern esp_ble_mesh_comp_t composition;
// extern esp_ble_mesh_prov_t provision;

// // Function declarations
// void mesh_example_info_store(void);
// void mesh_example_info_restore(void);
// void prov_complete(uint16_t net_idx, uint16_t addr, uint8_t flags, uint32_t iv_index);
// void example_ble_mesh_provisioning_cb(esp_ble_mesh_prov_cb_event_t event, esp_ble_mesh_prov_cb_param_t *param);
// void example_ble_mesh_send_gen_onoff_set(void);
// void example_ble_mesh_generic_client_cb(esp_ble_mesh_generic_client_cb_event_t event, esp_ble_mesh_generic_client_cb_param_t *param);
// void example_ble_mesh_config_server_cb(esp_ble_mesh_cfg_server_cb_event_t event, esp_ble_mesh_cfg_server_cb_param_t *param);
// esp_err_t ble_mesh_init(void);
void ble_mesh_client_main(void);

#endif // BLE_MESH_CLIENT_H