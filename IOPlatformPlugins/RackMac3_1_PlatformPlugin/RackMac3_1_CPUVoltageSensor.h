/*
 * Copyright (c) 2003 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * Copyright (c) 1999-2003 Apple Computer, Inc.  All Rights Reserved.
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*
 * Copyright (c) 2003 Apple Computer, Inc.  All rights reserved.
 *
 *
 */

#ifndef _RACKMAC3_1_CPUVOLTAGESENSOR_H
#define _RACKMAC3_1_CPUVOLTAGESENSOR_H

#include "IOPlatformSensor.h"

#define kRM31GroupTag				"group"
#define kRM31SortNumber				"sort-key"

#define kRM31ScalingFactorKey	"scaling-factor"

class RackMac3_1_CPUVoltageSensor : public IOPlatformSensor
{

    OSDeclareDefaultStructors(RackMac3_1_CPUVoltageSensor)

protected:

    UInt32 scalingFactor;

    // initialize a sensor from it's SensorArray dict in the IOPlatformThermalProfile
    virtual IOReturn		initPlatformSensor( const OSDictionary * dict );

    // apply scaling factor
	virtual SensorValue applyCurrentValueTransform( SensorValue ) const;

};
#endif // _RACKMAC3_1_CPUVOLTAGESENSOR_H