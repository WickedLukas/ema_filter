/*
* ema_filter.h
*
* Created: 30.09.2018 11:45:00
*  Author: Lukas
*/


#ifndef __EMA_FILTER_H__
#define __EMA_FILTER_H__

template<typename V, typename F>
F ema_filter(V current_value, F previous_value, float ema_alpha) {
	return ((F) ema_alpha * current_value + (1 - ema_alpha) * previous_value);
}

#endif //__EMA_FILTER_H__
