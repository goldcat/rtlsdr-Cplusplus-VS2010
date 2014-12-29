//	tuner_Dummy.h	// Dummy do nothing tuner

#include "stdafx.h"
#include "librtlsdr.h"

class dummy_Tuner : public ITuner
{
	virtual int init					( rtlsdr* ) _DUMMY_
	virtual int exit					( void ) _DUMMY_
	virtual int set_freq				( uint32_t freq /* Hz */
										, uint32_t * lo_freq
										) _DUMMY_
	virtual int set_bw					( int bw /* Hz */) _DUMMY_
	virtual int set_gain				( int gain /* tenth dB */) _DUMMY_
	virtual int set_if_gain				( int stage
										, int gain /* tenth dB */
										) _DUMMY_
	virtual int set_gain_mode			( int manual ) _DUMMY_
	virtual int set_dither				( int dither ) _DUMMY_

	virtual int	get_xtal_frequency		( uint32_t& xtalfreq ) _DUMMY_
	virtual int	set_xtal_frequency		( uint32_t xtalfreq ) _DUMMY_
};