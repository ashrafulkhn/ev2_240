#ifndef MQTT_TOPICS_H
#define MQTT_TOPICS_H

//#include <QDialog>

//Subscribing topics GUN1
#define I_1_11   "vsecc/connector/1/em/measurement_control"
#define I_1_21   "vsecc/connector/1/pe/measured_voltage"
#define I_1_31   "vsecc/connector/1/pe/measured_current"
#define I_1_41   "vsecc/connector/1/ocpp/transaction_id"
#define I_1_51   "vsecc/connector/1/status/charging_authorization_state"
#define I_1_61   "vsecc/connector/1/ocpp/ev_authorization_token"
#define I_1_71   "vsecc/connector/1/ev/tariff_id"
#define I_1_81   "vsecc/connector/1/status/evse_id_string"
#define I_1_91   "vsecc/connector/1/em/transferred_energy"
#define I_1_101  "vsecc/connector/1/ev/ev_error_code"
#define I_1_111  "vsecc/connector/1/ev/cp_state"
#define I_1_121  "vsecc/connector/1/ev/soc"
#define I_1_131  "vsecc/connector/1/ev/time_to_full_soc"
#define I_1_141  "vsecc/connector/1/status/charging_session_state"
#define I_1_151  "vsecc/connector/1/status/charging_standard"
#define I_1_16  "vsecc/ocpp_connection_status"
#define I_1_17  "vsecc/display_message"
#define I_1_18  "vsecc/io/d_out/{d_out_id}/value"
#define I_1_191  "vsecc/connector/1/status/components/active_failures"
#define I_1_201  "vsecc/connector/1/status/availability"
#define I_1_211  "vsecc/connector/1/status/components/report_failure"
#define I_1_221  "vsecc/connector/1/status/components/report_resolution"

//Publishing topics GUN1
#define I_2_11   "vsecc/connector/1/em/measurement_status"
#define I_2_21   "vsecc/connector/1/em/signed_reading"
#define I_2_31   "vsecc/connector/1/em/unsigned_reading"
#define I_2_41   "vsecc/connector/1/em/log"
#define I_2_51   "vsecc/io/d_in/{d_in_id}/value"
#define I_2_61   "vsecc/io/a_in/{a_in_id}/value"
#define I_2_71   "vsecc/io/t_in/{t_in_id}/temperature"
#define I_2_81   "vsecc/io/t_in/{t_in_id}/resistance"
#define I_2_91   "vsecc/connector/1/status/components/report_failure"
#define I_2_101  "vsecc/connector/1/status/components/report_resolution"

//Subscribing topics GUN2
#define I_1_12   "vsecc/connector/2/em/measurement_control"
#define I_1_22   "vsecc/connector/2/pe/measured_voltage"
#define I_1_32   "vsecc/connector/2/pe/measured_current"
#define I_1_42   "vsecc/connector/2/ocpp/transaction_id"
#define I_1_52   "vsecc/connector/2/status/charging_authorization_state"
#define I_1_62   "vsecc/connector/2/ocpp/ev_authorization_token"
#define I_1_72   "vsecc/connector/2/ev/tariff_id"
#define I_1_82   "vsecc/connector/2/status/evse_id_string"
#define I_1_92   "vsecc/connector/2/em/transferred_energy"
#define I_1_102  "vsecc/connector/2/ev/ev_error_code"
#define I_1_112  "vsecc/connector/2/ev/cp_state"
#define I_1_122  "vsecc/connector/2/ev/soc"
#define I_1_132  "vsecc/connector/2/ev/time_to_full_soc"
#define I_1_142  "vsecc/connector/2/status/charging_session_state"
#define I_1_152  "vsecc/connector/2/status/charging_standard"
#define I_1_16  "vsecc/ocpp_connection_status"
#define I_1_17  "vsecc/display_message"
#define I_1_18  "vsecc/io/d_out/{d_out_id}/value"
#define I_1_192  "vsecc/connector/2/status/components/active_failures"
#define I_1_202  "vsecc/connector/2/status/availability"
#define I_1_212  "vsecc/connector/2/status/components/report_failure"
#define I_1_222  "vsecc/connector/2/status/components/report_resolution"

//Publishing topics GUN2
#define I_2_12   "vsecc/connector/2/em/measurement_status"
#define I_2_22   "vsecc/connector/2/em/signed_reading"
#define I_2_32   "vsecc/connector/2/em/unsigned_reading"
#define I_2_42   "vsecc/connector/{evse_id}/em/log"
#define I_2_52   "vsecc/io/d_in/{d_in_id}/value"
#define I_2_62   "vsecc/io/a_in/{a_in_id}/value"
#define I_2_72   "vsecc/io/t_in/{t_in_id}/temperature"
#define I_2_82   "vsecc/io/t_in/{t_in_id}/resistance"
#define I_2_92   "vsecc/connector/2/status/components/report_failure"
#define I_2_102  "vsecc/connector/2/status/components/report_resolution"

//Actual Event Topics from Vector Device.
#define AUTH_STATUS             I_1_51
#define CONNECT_CHARGER         "topic2"
#define CHARGER_CONNECTED       I_1_111
#define CHARGE_STOPPED          I_1_141
#define CHARGER_DISCONNECTED    "topic5"

//Info Page topics (GUN1)
#define SOC_1               I_1_121
#define VOLTAGE_1           I_1_21
#define CURRENT_1           I_1_31
#define FULL_SOC_1          I_1_131
#define ENERGY_1            I_1_91

//Info Page topics (GUN2)
#define SOC_2               I_1_122
#define VOLTAGE_2           I_1_22
#define CURRENT_2           I_1_32
#define FULL_SOC_2          I_1_132
#define ENERGY_2            I_1_92

//Messages or Payloads (From topic I_1_111 )
#define STATE_A "state_a" // After diconnecting charger (Default State)
#define STATE_B "state_b" //Charger connected

//Messages or Payloads (From topic I_1_51)
#define DEAUTH  "deauthoriezed"
#define AUTH    "authorized"
#define PENDING "pending"

//Messages or Paloads (From topic I_1_141)
#define CHARGE_STOPPED_MESSAGE "SLACok"

#endif // MQTT_TOPICS_H
