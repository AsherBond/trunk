//##########################################################################
//#                                                                        #
//#                            CLOUDCOMPARE                                #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################

#ifndef CC_SENSOR_PROJECTION_DIALOG_HEADER
#define CC_SENSOR_PROJECTION_DIALOG_HEADER

#include <ui_sensorProjectDlg.h>

class ccGBLSensor;

//Ground-based (lidar) sensor parameters dialog
class ccSensorProjectionDlg : public QDialog, public Ui::SensorProjectDialog
{
public:

	//! Default constructor
	ccSensorProjectionDlg(QWidget* parent = 0);

	void initWithGBLSensor(const ccGBLSensor* sensor);
	void updateGBLSensor(ccGBLSensor* sensor);

};

#endif //CC_SENSOR_PROJECTION_DIALOG_HEADER
