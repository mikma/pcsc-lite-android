/*
 * MUSCLE SmartCard Development ( http://www.linuxnet.com )
 *
 * Copyright (C) 2006-2011
 *  Ludovic Rousseau <ludovic.rousseau@free.fr>
 *
 * $Id: pcscd.h.in 6323 2012-06-05 09:19:06Z rousseau $
 */

/**
 * @file
 * @brief This keeps a list of defines for pcsc-lite.
 */

#ifndef __pcscd_h__
#define __pcscd_h__

#define TIME_BEFORE_SUICIDE 60

#define SCARD_SCOPE_GLOBAL		0x0003	/**< Scope is global */

#define SCARD_RESET			0x0001	/**< Card was reset */
#define SCARD_INSERTED			0x0002	/**< Card was inserted */
#define SCARD_REMOVED			0x0004	/**< Card was removed */

#define PCSCLITE_CONFIG_DIR		"/etc/reader.conf.d"

#define PCSCLITE_IPC_DIR		USE_IPCDIR
#define PCSCLITE_RUN_PID		PCSCLITE_IPC_DIR "/pcscd.pid"

#define PCSCLITE_CSOCK_NAME		PCSCLITE_IPC_DIR "/pcscd.comm"

#define PCSCLITE_VERSION_NUMBER		"1.8.7"	/**< Current version */
#define PCSCLITE_STATUS_POLL_RATE	400000		/**< Status polling rate */
#define PCSCLITE_LOCK_POLL_RATE		100000		/**< Lock polling rate */

#define PCSC_MAX_CONTEXT_THREADS 200
#define PCSC_MAX_CONTEXT_CARD_HANDLES 200
#define PCSC_MAX_READER_HANDLES 200

#define PCSCLITE_STATUS_WAIT		200000	/**< Status Change Sleep */
#define MAX_DEVICENAME		255

/** Different values for struct ReaderContext powerState field */
enum
{
	POWER_STATE_UNPOWERED,	/**< auto power off */
	POWER_STATE_POWERED,	/**< powered */
	POWER_STATE_GRACE_PERIOD,	/**< card was in use */
	POWER_STATE_INUSE		/**< card is used */
};

/** time to wait before powering down an unused card */
#define PCSCLITE_POWER_OFF_GRACE_PERIOD 5*1000 /* 5 second */

/** normal timeout for pthCardEvent driver function when
 * no card or card in use */
#define PCSCLITE_STATUS_EVENT_TIMEOUT 10*60*1000 /* 10 minutes */

/* Uncomment the next line if you do NOT want to use auto power off */
/* #define DISABLE_ON_DEMAND_POWER_ON */

/* Uncomment the next line if you do not want the card to be powered on
 * when inserted */
/* #define DISABLE_AUTO_POWER_ON */

#endif
