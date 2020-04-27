/*
 * Port_PBcfg.c
 *
 *  Created on: Mar 16, 2020
 *      Author: mauneltohamy
 */

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between PORT_PBcfg.c and PORT.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Dio_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

const Port_ConfigType Port_Configuration =
                                   {
                                       	PortConf_PORT_NUM0,PortConf_CHANNEL_NUM0,
       									PortConf_DEFAULT_DIRECTION_NUM0,
       									PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM0,
       									PortConf_DEFAULT_MODE_NUM0,
       									PortConf_DEFAULT_MODE_CHANGEABLE_NUM0,
       									PortConf_DEFAULT_INIT_LEVEL_NUM0,/*Pin 0 initialization*/
	                                	PortConf_PORT_NUM0,PortConf_CHANNEL_NUM1,
										PortConf_DEFAULT_DIRECTION_NUM1,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM1,
										PortConf_DEFAULT_MODE_NUM1,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM1,
										PortConf_DEFAULT_INIT_LEVEL_NUM1,/*Pin 1 initialization*/
	                                	PortConf_PORT_NUM0,PortConf_CHANNEL_NUM2,
										PortConf_DEFAULT_DIRECTION_NUM2,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM2,
										PortConf_DEFAULT_MODE_NUM2,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM2,
										PortConf_DEFAULT_INIT_LEVEL_NUM2,/*Pin 2 initialization*/
	                                	PortConf_PORT_NUM0,PortConf_CHANNEL_NUM3,
										PortConf_DEFAULT_DIRECTION_NUM3,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM3,
										PortConf_DEFAULT_MODE_NUM3,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM3,
										PortConf_DEFAULT_INIT_LEVEL_NUM3,/*Pin 3 initialization*/
	                                	PortConf_PORT_NUM0,PortConf_CHANNEL_NUM4,
										PortConf_DEFAULT_DIRECTION_NUM4,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM4,
										PortConf_DEFAULT_MODE_NUM4,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM4,
										PortConf_DEFAULT_INIT_LEVEL_NUM4,/*Pin 4 initialization*/
	                                	PortConf_PORT_NUM0,PortConf_CHANNEL_NUM5,
										PortConf_DEFAULT_DIRECTION_NUM5,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM5,
										PortConf_DEFAULT_MODE_NUM5,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM5,
										PortConf_DEFAULT_INIT_LEVEL_NUM5,/*Pin 5 initialization*/
	                                	PortConf_PORT_NUM0,PortConf_CHANNEL_NUM6,
										PortConf_DEFAULT_DIRECTION_NUM6,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM6,
										PortConf_DEFAULT_MODE_NUM6,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM6,
										PortConf_DEFAULT_INIT_LEVEL_NUM6,/*Pin 6 initialization*/
	                                	PortConf_PORT_NUM0,PortConf_CHANNEL_NUM7,
										PortConf_DEFAULT_DIRECTION_NUM7,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM7,
										PortConf_DEFAULT_MODE_NUM7,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM7,
										PortConf_DEFAULT_INIT_LEVEL_NUM7,/*Pin 7 initialization*/
	                                	PortConf_PORT_NUM1,PortConf_CHANNEL_NUM0,
										PortConf_DEFAULT_DIRECTION_NUM8,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM8,
										PortConf_DEFAULT_MODE_NUM8,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM8,
										PortConf_DEFAULT_INIT_LEVEL_NUM8,/*Pin 8 initialization*/
	                                	PortConf_PORT_NUM1,PortConf_CHANNEL_NUM1,
										PortConf_DEFAULT_DIRECTION_NUM9,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM9,
										PortConf_DEFAULT_MODE_NUM9,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM9,
										PortConf_DEFAULT_INIT_LEVEL_NUM9,/*Pin 9 initialization*/
	                                	PortConf_PORT_NUM1,PortConf_CHANNEL_NUM2,
										PortConf_DEFAULT_DIRECTION_NUM10,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM10,
										PortConf_DEFAULT_MODE_NUM10,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM10,
										PortConf_DEFAULT_INIT_LEVEL_NUM10,/*Pin 10 initialization*/
	                                	PortConf_PORT_NUM1,PortConf_CHANNEL_NUM3,
										PortConf_DEFAULT_DIRECTION_NUM11,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM11,
										PortConf_DEFAULT_MODE_NUM11,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM11,
										PortConf_DEFAULT_INIT_LEVEL_NUM11,/*Pin 11 initialization*/
	                                	PortConf_PORT_NUM1,PortConf_CHANNEL_NUM4,
										PortConf_DEFAULT_DIRECTION_NUM12,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM12,
										PortConf_DEFAULT_MODE_NUM12,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM12,
										PortConf_DEFAULT_INIT_LEVEL_NUM12,/*Pin 12 initialization*/
	                                	PortConf_PORT_NUM1,PortConf_CHANNEL_NUM5,
										PortConf_DEFAULT_DIRECTION_NUM13,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM13,
										PortConf_DEFAULT_MODE_NUM13,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM13,
										PortConf_DEFAULT_INIT_LEVEL_NUM13,/*Pin 13 initialization*/
	                                	PortConf_PORT_NUM1,PortConf_CHANNEL_NUM6,
										PortConf_DEFAULT_DIRECTION_NUM14,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM14,
										PortConf_DEFAULT_MODE_NUM14,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM14,
										PortConf_DEFAULT_INIT_LEVEL_NUM14,/*Pin 14 initialization*/
	                                	PortConf_PORT_NUM1,PortConf_CHANNEL_NUM7,
										PortConf_DEFAULT_DIRECTION_NUM15,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM15,
										PortConf_DEFAULT_MODE_NUM15,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM15,
										PortConf_DEFAULT_INIT_LEVEL_NUM15,/*Pin 15 initialization*/
	                                	PortConf_PORT_NUM2,PortConf_CHANNEL_NUM0,
										PortConf_DEFAULT_DIRECTION_NUM16,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM16,
										PortConf_DEFAULT_MODE_NUM16,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM16,
										PortConf_DEFAULT_INIT_LEVEL_NUM16,/*Pin 16 initialization*/
	                                	PortConf_PORT_NUM2,PortConf_CHANNEL_NUM1,
										PortConf_DEFAULT_DIRECTION_NUM17,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM17,
										PortConf_DEFAULT_MODE_NUM17,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM17,
										PortConf_DEFAULT_INIT_LEVEL_NUM17,/*Pin 17 initialization*/
	                                	PortConf_PORT_NUM2,PortConf_CHANNEL_NUM2,
										PortConf_DEFAULT_DIRECTION_NUM18,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM18,
										PortConf_DEFAULT_MODE_NUM18,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM18,
										PortConf_DEFAULT_INIT_LEVEL_NUM18,/*Pin 18 initialization*/
	                                	PortConf_PORT_NUM2,PortConf_CHANNEL_NUM3,
										PortConf_DEFAULT_DIRECTION_NUM19,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM19,
										PortConf_DEFAULT_MODE_NUM19,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM19,
										PortConf_DEFAULT_INIT_LEVEL_NUM19,/*Pin 19 initialization*/
										PortConf_PORT_NUM2,PortConf_CHANNEL_NUM4,
										PortConf_LED_DIRECTION,
										PortConf_LED_DIRECTION_CHANGEABLE,
										PortConf_LED_MODE,
										PortConf_LED_MODE_CHANGEABLE,
										PortConf_LED_INIT_LEVEL,/*LED initialization*/
										PortConf_PORT_NUM2,PortConf_CHANNEL_NUM5,
										PortConf_DEFAULT_DIRECTION_NUM21,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM21,
										PortConf_DEFAULT_MODE_NUM21,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM21,
										PortConf_DEFAULT_INIT_LEVEL_NUM21,/*Pin 21 initialization*/
	                                	PortConf_PORT_NUM2,PortConf_CHANNEL_NUM6,
										PortConf_DEFAULT_DIRECTION_NUM22,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM22,
										PortConf_DEFAULT_MODE_NUM22,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM22,
										PortConf_DEFAULT_INIT_LEVEL_NUM22,/*Pin 22 initialization*/
	                                	PortConf_PORT_NUM2,PortConf_CHANNEL_NUM7,
										PortConf_DEFAULT_DIRECTION_NUM23,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM23,
										PortConf_DEFAULT_MODE_NUM23,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM23,
										PortConf_DEFAULT_INIT_LEVEL_NUM23,/*Pin 23 initialization*/
	                                	PortConf_PORT_NUM3,PortConf_CHANNEL_NUM0,
										PortConf_DEFAULT_DIRECTION_NUM24,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM24,
										PortConf_DEFAULT_MODE_NUM24,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM24,
										PortConf_DEFAULT_INIT_LEVEL_NUM24,/*Pin 24 initialization*/
	                                	PortConf_PORT_NUM3,PortConf_CHANNEL_NUM1,
										PortConf_DEFAULT_DIRECTION_NUM25,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM25,
										PortConf_DEFAULT_MODE_NUM25,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM25,
										PortConf_DEFAULT_INIT_LEVEL_NUM25,/*Pin 25 initialization*/
										PortConf_PORT_NUM3,PortConf_CHANNEL_NUM2,
										PortConf_BUTTON_DIRECTION,
										PortConf_BUTTON_DIRECTION_CHANGEABLE,
										PortConf_BUTTON_MODE,
										PortConf_BUTTON_MODE_CHANGEABLE,
										PortConf_BUTTON_INIT_LEVEL,/*BUTTON initialization*/
										PortConf_PORT_NUM3,PortConf_CHANNEL_NUM3,
										PortConf_DEFAULT_DIRECTION_NUM27,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM27,
										PortConf_DEFAULT_MODE_NUM27,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM27,
										PortConf_DEFAULT_INIT_LEVEL_NUM27,/*Pin 27 initialization*/
	                                	PortConf_PORT_NUM3,PortConf_CHANNEL_NUM4,
										PortConf_DEFAULT_DIRECTION_NUM28,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM28,
										PortConf_DEFAULT_MODE_NUM28,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM28,
										PortConf_DEFAULT_INIT_LEVEL_NUM28,/*Pin 28 initialization*/
	                                	PortConf_PORT_NUM3,PortConf_CHANNEL_NUM5,
										PortConf_DEFAULT_DIRECTION_NUM29,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM29,
										PortConf_DEFAULT_MODE_NUM29,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM29,
										PortConf_DEFAULT_INIT_LEVEL_NUM29,/*Pin 29 initialization*/
	                                	PortConf_PORT_NUM3,PortConf_CHANNEL_NUM6,
										PortConf_DEFAULT_DIRECTION_NUM30,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM30,
										PortConf_DEFAULT_MODE_NUM30,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM30,
										PortConf_DEFAULT_INIT_LEVEL_NUM30,/*Pin 30 initialization*/
	                                	PortConf_PORT_NUM3,PortConf_CHANNEL_NUM7,
										PortConf_DEFAULT_DIRECTION_NUM31,
										PortConf_DEFAULT_DIRECTION_CHANGEABLE_NUM31,
										PortConf_DEFAULT_MODE_NUM31,
										PortConf_DEFAULT_MODE_CHANGEABLE_NUM31,
										PortConf_DEFAULT_INIT_LEVEL_NUM31,/*Pin 31 initialization*/
                                   };
