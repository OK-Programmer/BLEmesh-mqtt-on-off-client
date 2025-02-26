#ifndef CUSTOM_MQTT_CLIENT_H
#define CUSTOM_MQTT_CLIENT_H

#include "esp_system.h"
#include "nvs_flash.h"
#include "esp_event.h"
#include "esp_netif.h"
#include "protocol_examples_common.h"
#include "esp_log.h"
#include "mqtt_client.h"

// Constants
#define USE_PROPERTY_ARR_SIZE sizeof(user_property_arr) / sizeof(esp_mqtt5_user_property_item_t)

// Variables
extern const char *TAG;
extern esp_mqtt5_user_property_item_t user_property_arr[];
extern esp_mqtt5_publish_property_config_t publish_property;
extern esp_mqtt5_subscribe_property_config_t subscribe_property;
extern esp_mqtt5_subscribe_property_config_t subscribe1_property;
extern esp_mqtt5_unsubscribe_property_config_t unsubscribe_property;
extern esp_mqtt5_disconnect_property_config_t disconnect_property;

// Function declarations
void log_error_if_nonzero(const char *message, int error_code);
void print_user_property(mqtt5_user_property_handle_t user_property);
void mqtt5_event_handler(void *handler_args, esp_event_base_t base, int32_t event_id, void *event_data);
void mqtt5_app_start(void);
void mqtt_client_main(void);

#endif // CUSTOM_MQTT_CLIENT_H