set(srcs "main.c"
        "board.c"
        "ble_mesh_client.c"
        "custom_mqtt_client.c")

idf_component_register(SRCS "${srcs}"
                    INCLUDE_DIRS ".")
