/* Copyright (c) 2011-2012, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/mfd/pm8xxx/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {1928, 1941, 1940, 1940, 1926},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40,
		35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{1804, 285, 100, 80, 72},
				{1804, 285, 100, 80, 72},
				{1753, 287, 101, 82, 73},
				{1735, 292, 105, 83, 74},
				{1717, 294, 108, 86, 77},
				{1504, 310, 116, 89, 79},
				{1456, 274, 116, 91, 82},
				{1434, 267, 127, 97, 84},
				{1452, 262, 129, 103, 88},
				{1505, 252, 113, 101, 89},
				{1594, 250, 99, 80, 74},
				{1704, 250, 99, 82, 75},
				{1834, 254, 101, 85, 78},
				{1978, 270, 104, 88, 81},
				{2125, 293, 107, 86, 82},
				{2280, 322, 110, 85, 74},
				{2450, 346, 108, 85, 75},
				{2617, 353, 106, 84, 76},
				{2766, 359, 100, 81, 74},
				{2782, 342, 98, 80, 74},
				{2852, 351, 99, 82, 76},
				{2946, 365, 102, 84, 77},
				{3053, 380, 105, 86, 79},
				{3173, 402, 108, 89, 80},
				{3307, 425, 114, 92, 83},
				{3464, 449, 116, 92, 82},
				{3664, 462, 110, 86, 78},
				{3929, 494, 111, 88, 80},
				{4356, 563, 121, 95, 87},
				{4356, 563, 121, 95, 87},
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40,
		35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4340, 4339, 4335, 4330, 4323},
				{4229, 4261, 4265, 4266, 4260},
				{4159, 4203, 4208, 4208, 4203},
				{4105, 4150, 4153, 4153, 4149},
				{4051, 4099, 4101, 4101, 4097},
				{3969, 4056, 4057, 4051, 4048},
				{3917, 3975, 3994, 3999, 4003},
				{3874, 3928, 3962, 3965, 3962},
				{3843, 3895, 3925, 3927, 3925},
				{3823, 3860, 3877, 3885, 3884},
				{3810, 3832, 3838, 3840, 3839},
				{3798, 3808, 3815, 3816, 3816},
				{3786, 3791, 3796, 3798, 3797},
				{3773, 3780, 3782, 3782, 3781},
				{3758, 3771, 3771, 3768, 3765},
				{3740, 3759, 3762, 3754, 3741},
				{3720, 3740, 3744, 3736, 3722},
				{3704, 3715, 3719, 3712, 3700},
				{3692, 3699, 3692, 3685, 3675},
				{3683, 3693, 3687, 3680, 3668},
				{3678, 3690, 3686, 3679, 3668},
				{3671, 3688, 3685, 3678, 3667},
				{3663, 3686, 3684, 3677, 3666},
				{3651, 3683, 3682, 3676, 3665},
				{3634, 3679, 3680, 3673, 3661},
				{3609, 3669, 3672, 3663, 3648},
				{3575, 3638, 3638, 3628, 3612},
				{3529, 3585, 3580, 3571, 3556},
				{3463, 3508, 3501, 3493, 3480},
				{3351, 3388, 3380, 3377, 3365},
				{3000, 3000, 3000, 3000, 3000}
	}
};


struct bms_battery_data Samsung_8930_Serrano_1900mAh_data = {
	.fcc				= 1900,
	.fcc_temp_lut		= &fcc_temp,
	.fcc_sf_lut			= &fcc_sf,
	.pc_temp_ocv_lut	= &pc_temp_ocv,
	.rbatt_sf_lut		= &rbatt_sf,
	.default_rbatt_mohm		= 167,
	.rbatt_capacitive_mohm	= 160,
};
