
String getUniqueId(const String& name, const String& sufix);
void createDiscovery(const char * sensor_type,
                     const char * state_topic, const char * s_name, const char * unique_id,
                     const char * availability_topic, const char * device_class, const char * value_template,
                     const char * payload_on, const char * payload_off, const char * unit_of_meas,
                     bool optimistic, bool retain, int off_delay,
                     const char * payload_available, const char * payload_not_avalaible, boolean child_device , const char * command_topic);