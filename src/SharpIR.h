/*
 * SharpIR
 * Library for the acquisition of distance data from Sharp IR sensors
 *
 * Created by Giuseppe Masino, 28 may 2016
 * Author URL http://www.facebook.com/dev.giuseppemasino
 * Author email: dev.giuseppemasino@outlook.it
 *
 * This library and the relative example files are released under the
 * CreativeCommons ShareAlike-Attribution 4.0 International license
 * and a custom MIT license.
 *
 * The license terms can be read at the following url: https://www.facebook.com/notes/giuseppe-masino/faqs-about-my-works/197854657355058
 *
 */

#pragma once

#include <Arduino.h>

class SharpIR
	{
		public:

			using sensorCode = const uint8_t ;

			SharpIR( sensorCode _sensorType , uint8_t _sensorPin ) : sensorType( _sensorType ) , pin( _sensorPin ) {}

			uint8_t getDistance( bool avoidBurstRead = true ) ;

			static sensorCode GP2Y0A41SK0F = 0 ;
			static sensorCode GP2Y0A21YK0F = 1 ;
			static sensorCode GP2Y0A02YK0F = 3 ;

		protected:

			uint8_t sensorType, pin ;

		private:

			uint32_t lastTime = 0 ;
	};
