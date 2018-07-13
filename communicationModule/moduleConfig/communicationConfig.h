
#ifndef COMMUNICATION_CONFIG_H
#define COMMUNICATION_CONFIG_H

// Unique Humidity Sensor Identifier
#define HUMIDITY_SENSOR_UID				"SH-v4-000"

// Tx Channels
#define TX_SMS								0
#define TX_EMAIL							0
#define TX_MQTT								0

// Rx Channels
#define RX_SMS								0
#define RX_EMAIL							0
#define RX_MQTT								0


// Tx Channel Priority
#define TX_PRIORITY_SMS						0
#define TX_PRIORITY_EMAIL					1
#define TX_PRIORITY_MQTT					2

// Rx Channel Priority
#define RX_PRIORITY_SMS						0
#define RX_PRIORITY_EMAIL					1
#define RX_PRIORITY_MQTT					2



// Communication Channels Flags ( Do not modify :) )
#define USING_SMS			(TX_PRIORITY_SMS || RX_PRIORITY_SMS)
#define USING_EMAIL			(TX_PRIORITY_EMAIL || RX_PRIORITY_EMAIL)
#define USING_MQTT			(TX_PRIORITY_MQTT || RX_PRIORITY_MQTT)


// Internet Config
#if ((TX_EMAIL == 1 || RX_EMAIL == 1) || (TX_MQTT == 1 || RX_MQTT == 1))
	#define INTERNET_APN					"antel.lte"
	#define INTERNET_USER					""
	#define INTERNET_PASSWORD				""
#endif


// SMS Config
#if (TX_SMS == 1 || RX_SMS == 1)
	#define SMS_HUMIDITY_SENSOR_NUMBER		"+598..."
	#define SMS_DEFAULT_REPORT_NUMBER		"+598..."
#endif


// Email Config
#if (TX_EMAIL == 1 || RX_EMAIL == 1)
	#define EMAIL_HUMIDITY_SENSOR			"humsensor0@gmail.com"
	#define EMAIL_HUMIDITY_SENSOR_PASSWORD	"humSensor_0"

	#define EMAIL_DEFAULT_REPORT			"ibrugnoli@focusingenieria.com.uy"

	#define EMAIL_POP3_SERVER				"pop.gmail.com"
	#define EMAIL_POP3_PORT					995

	#define EMAIL_SMTP_SERVER				"smtp.gmail.com"
	#define EMAIL_SMTP_PORT					465
#endif


// MQTT Config
#if (TX_MQTT == 1 || RX_MQTT == 1)	
	#define MQTT_REPORT_TOPIC				"humSensor_0/report"
	#define MQTT_RECEPTION_TOPIC			"humSensor_0/receive"

	#define	MQTT_HOST						"mqtt.flespi.io"
	#define MQTT_PORT						"1883"

	#define MQTT_BROKER_USER				"os8xar9uL5WqoAsVmwWKs75IAOIi7sOjIKGG1G1AzLQLc7wmrgUKeNgCsMLn4nwB"
	#define MQTT_BROKER_PASSWORD			""

	#define MQTT_DEFAULT_KEEPALIVE			20
	
#endif


#endif