/*
 * Copyright (c) 2017-2021, NVIDIA CORPORATION.  All rights reserved.
 * Copyright (c) 2022, CTCaer
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

static const int coreb01slt_voltages_mv[MAX_DVFS_FREQS] = {
	600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050
};

static struct dvfs coreb01slt_dvfs_table[] = {
/* Per-bin Tables */
	/* SOC Speedo 2, Process 0. Core voltages(mV):	    600,     625,     650,     675,     700,     725,     750,     775,     800,     825,     850,     875,     900,     925,     950,     975,    1000,    1025,    1050 */
	CORE_DVFS("emc",		2, 0, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000),

	CORE_DVFS("vic03",		2, 0, 1, KHZ,	 326400,  384000,  422400,  460800,  518400,  537600,  556800,  576000,  595200,  595200,  614400,  614400,  633600,  633600,  633600,  672000,  672000,  672000,  672000),
	CORE_DVFS("nvjpg",		2, 0, 1, KHZ,	 326400,  384000,  422400,  460800,  518400,  537600,  556800,  576000,  595200,  595200,  614400,  614400,  633600,  633600,  633600,  672000,  672000,  672000,  672000),
	CORE_DVFS("se",			2, 0, 1, KHZ,	 326400,  384000,  422400,  460800,  518400,  537600,  556800,  576000,  595200,  595200,  614400,  614400,  633600,  633600,  633600,  672000,  672000,  672000,  672000),
	CORE_DVFS("tsecb",		2, 0, 1, KHZ,	 326400,  384000,  422400,  460800,  518400,  537600,  556800,  576000,  595200,  595200,  614400,  614400,  633600,  633600,  633600,  672000,  672000,  672000,  672000),
	CORE_DVFS("c2bus",		2, 0, 1, KHZ,	 326400,  384000,  422400,  460800,  518400,  537600,  556800,  576000,  595200,  595200,  614400,  614400,  633600,  633600,  633600,  672000,  672000,  672000,  672000),

	CORE_DVFS("nvenc",		2, 0, 1, KHZ,	 403200,  422400,  460800,  556800,  595200,  652800,  691200,  729600,  768000,  806400,  844800,  864000,  883200,  902400,  921600,  940800,  960000,  979200,  998400),
	CORE_DVFS("nvdec",		2, 0, 1, KHZ,	 403200,  422400,  460800,  556800,  595200,  652800,  691200,  729600,  768000,  806400,  844800,  864000,  883200,  902400,  921600,  940800,  960000,  979200,  998400),
	CORE_DVFS("c3bus",		2, 0, 1, KHZ,	 403200,  422400,  460800,  556800,  595200,  652800,  691200,  729600,  768000,  806400,  844800,  864000,  883200,  902400,  921600,  940800,  960000,  979200,  998400),

	CORE_DVFS("vi",			2, 0, 1, KHZ,	 422400,  480000,  480000,  576000,  595200,  672000,  691200,  729600,  787200,  825600,  864000,  902400,  940800,  979200, 1017600, 1056000, 1075200, 1113600, 1132800),
	CORE_DVFS("cbus",		2, 0, 1, KHZ,	 422400,  480000,  480000,  576000,  595200,  672000,  691200,  729600,  787200,  825600,  864000,  902400,  940800,  979200, 1017600, 1056000, 1075200, 1113600, 1132800),

	CORE_DVFS("abus",		2, 0, 1, KHZ,	 537600,  614400,  729600,  768000,  806400,  883200,  960000, 1017600, 1075200, 1132800, 1152000, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400),
	CORE_DVFS("aclk",		2, 0, 1, KHZ,	 537600,  614400,  729600,  768000,  806400,  883200,  960000, 1017600, 1075200, 1132800, 1152000, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400),

	CORE_DVFS("ape",		2, 0, 1, KHZ,	 422400,  480000,  499200,  556800,  614400,  652800,  710400,  748800,  787200,  825600,  864000,  902400,  940800,  960000,  998400,  998400,  998400,  998400,  998400),
	CORE_DVFS("sbus",		2, 0, 1, KHZ,	 102000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("sclk",		2, 0, 1, KHZ,	 102000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),

	CORE_DVFS("host1x",		2, 0, 1, KHZ,	 102000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("tsec",		2, 0, 1, KHZ,	 326400,  384000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("mselect",		2, 0, 1, KHZ,	 102000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),

	CORE_DVFS("disp1",		2, 0, 0, KHZ,	      1,  300000,  400000,  450000,  500000,  550000,  600000,  640000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000),
	CORE_DVFS("disp2",		2, 0, 0, KHZ,	      1,  300000,  400000,  450000,  500000,  550000,  600000,  640000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000),


	CORE_DVFS("sor1",		2, 0, 1, KHZ,	      1,       1,       1,  297000,  600000,  600000,  600000,  600000,  600000,  600000,  600000,  600000,  600000,  600000,  600000,  600000,  600000,  600000,  600000),
	CORE_DVFS("hda",		2, 0, 1, KHZ,	      1,       1,       1,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),
	CORE_DVFS("hda2codec_2x",	2, 0, 1, KHZ,	      1,       1,       1,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000),
	CORE_DVFS("maud",		2, 0, 1, KHZ,	      1,       1,       1,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),

	/* SOC Speedo 2, Process 1. Core voltages(mV):	    600,     625,     650,     675,     700,     725,     750,     775,     800,     825,     850,     875,     900,     925,     950,     975,    1000,    1025,    1050 */
	CORE_DVFS("emc",		2, 1, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000),

	CORE_DVFS("vic03",		2, 1, 1, KHZ,	 403200,  441600,  460800,  518400,  537600,  556800,  576000,  595200,  595200,  614400,  633600,  633600,  652800,  652800,  652800,  672000,  672000,  672000,  672000),
	CORE_DVFS("nvjpg",		2, 1, 1, KHZ,	 403200,  441600,  460800,  518400,  537600,  556800,  576000,  595200,  595200,  614400,  633600,  633600,  652800,  652800,  652800,  672000,  672000,  672000,  672000),
	CORE_DVFS("se",			2, 1, 1, KHZ,	 403200,  441600,  460800,  518400,  537600,  556800,  576000,  595200,  595200,  614400,  633600,  633600,  652800,  652800,  652800,  672000,  672000,  672000,  672000),
	CORE_DVFS("tsecb",		2, 1, 1, KHZ,	 403200,  441600,  460800,  518400,  537600,  556800,  576000,  595200,  595200,  614400,  633600,  633600,  652800,  652800,  652800,  672000,  672000,  672000,  672000),
	CORE_DVFS("c2bus",		2, 1, 1, KHZ,	 403200,  441600,  460800,  518400,  537600,  556800,  576000,  595200,  595200,  614400,  633600,  633600,  652800,  652800,  652800,  672000,  672000,  672000,  672000),

	CORE_DVFS("nvenc",		2, 1, 1, KHZ,	 480000,  518400,  556800,  614400,  652800,  710400,  729600,  768000,  806400,  844800,  864000,  902400,  921600,  940800,  960000,  979200,  998400,  998400,  998400),
	CORE_DVFS("nvdec",		2, 1, 1, KHZ,	 480000,  518400,  556800,  614400,  652800,  710400,  729600,  768000,  806400,  844800,  864000,  902400,  921600,  940800,  960000,  979200,  998400,  998400,  998400),
	CORE_DVFS("c3bus",		2, 1, 1, KHZ,	 480000,  518400,  556800,  614400,  652800,  710400,  729600,  768000,  806400,  844800,  864000,  902400,  921600,  940800,  960000,  979200,  998400,  998400,  998400),

	CORE_DVFS("vi",			2, 1, 1, KHZ,	 480000,  518400,  556800,  633600,  672000,  748800,  787200,  825600,  864000,  902400,  940800,  979200, 1017600, 1056000, 1075200, 1113600, 1132800, 1132800, 1132800),
	CORE_DVFS("cbus",		2, 1, 1, KHZ,	 480000,  518400,  556800,  633600,  672000,  748800,  787200,  825600,  864000,  902400,  940800,  979200, 1017600, 1056000, 1075200, 1113600, 1132800, 1132800, 1132800),

	CORE_DVFS("abus",		2, 1, 1, KHZ,	 652800,  729600,  806400,  844800,  921600,  960000,  998400, 1094400, 1152000, 1171200, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400),
	CORE_DVFS("aclk",		2, 1, 1, KHZ,	 652800,  729600,  806400,  844800,  921600,  960000,  998400, 1094400, 1152000, 1171200, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400),

	CORE_DVFS("ape",		2, 1, 1, KHZ,	 460800,  499200,  499200,  595200,  652800,  691200,  748800,  787200,  844800,  864000,  902400,  940800,  979200,  998400,  998400,  998400,  998400,  998400,  998400),
	CORE_DVFS("sbus",		2, 1, 1, KHZ,	 204000,  204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("sclk",		2, 1, 1, KHZ,	 204000,  204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),

	CORE_DVFS("host1x",		2, 1, 1, KHZ,	 204000,  204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("tsec",		2, 1, 1, KHZ,	 403200,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("mselect",		2, 1, 1, KHZ,	 204000,  204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),

	CORE_DVFS("disp1",		2, 1, 0, KHZ,	 400000,  435000,  500000,  550000,  600000,  640000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000),
	CORE_DVFS("disp2",		2, 1, 0, KHZ,	 400000,  435000,  500000,  550000,  600000,  640000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000),


	CORE_DVFS("sor1",		2, 1, 1, KHZ,	      1,  297000,  297000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000),
	CORE_DVFS("hda",		2, 1, 1, KHZ,	      1,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),
	CORE_DVFS("hda2codec_2x",	2, 1, 1, KHZ,	      1,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000),
	CORE_DVFS("maud",		2, 1, 1, KHZ,	      1,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),

	/* SOC Speedo 2, Process 2. Core voltages(mV):	    600,     625,     650,     675,     700,     725,     750,     775,     800,     825,     850,     875,     900,     925,     950,     975,    1000,    1025,    1050 */
	CORE_DVFS("emc",		2, 2, 1, KHZ,	      1,       1,       1,       1,       1,       1,       1,       1, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000, 3200000),

	CORE_DVFS("vic03",		2, 2, 1, KHZ,	 480000,  556800,  537600,  556800,  576000,  595200,  614400,  633600,  633600,  652800,  672000,  672000,  672000,  672000,  672000,  672000,  672000,  672000,  672000),
	CORE_DVFS("nvjpg",		2, 2, 1, KHZ,	 480000,  556800,  537600,  556800,  576000,  595200,  614400,  633600,  633600,  652800,  672000,  672000,  672000,  672000,  672000,  672000,  672000,  672000,  672000),
	CORE_DVFS("se",			2, 2, 1, KHZ,	 480000,  556800,  537600,  556800,  576000,  595200,  614400,  633600,  633600,  652800,  672000,  672000,  672000,  672000,  672000,  672000,  672000,  672000,  672000),
	CORE_DVFS("tsecb",		2, 2, 1, KHZ,	 480000,  556800,  537600,  556800,  576000,  595200,  614400,  633600,  633600,  652800,  672000,  672000,  672000,  672000,  672000,  672000,  672000,  672000,  672000),
	CORE_DVFS("c2bus",		2, 2, 1, KHZ,	 480000,  556800,  537600,  556800,  576000,  595200,  614400,  633600,  633600,  652800,  672000,  672000,  672000,  672000,  672000,  672000,  672000,  672000,  672000),

	CORE_DVFS("nvenc",		2, 2, 1, KHZ,	 537600,  614400,  652800,  691200,  729600,  787200,  825600,  864000,  864000,  883200,  902400,  940800,  960000,  960000,  979200,  998400,  998400,  998400,  998400),
	CORE_DVFS("nvdec",		2, 2, 1, KHZ,	 537600,  614400,  652800,  691200,  729600,  787200,  825600,  864000,  864000,  883200,  902400,  940800,  960000,  960000,  979200,  998400,  998400,  998400,  998400),
	CORE_DVFS("c3bus",		2, 2, 1, KHZ,	 537600,  614400,  652800,  691200,  729600,  787200,  825600,  864000,  864000,  883200,  902400,  940800,  960000,  960000,  979200,  998400,  998400,  998400,  998400),

	CORE_DVFS("vi",			2, 2, 1, KHZ,	 556800,  633600,  672000,  672000,  691200,  787200,  806400,  844800,  883200,  921600,  960000,  998400, 1036800, 1094400, 1113600, 1132800, 1132800, 1132800, 1132800),
	CORE_DVFS("cbus",		2, 2, 1, KHZ,	 556800,  633600,  672000,  672000,  691200,  787200,  806400,  844800,  883200,  921600,  960000,  998400, 1036800, 1094400, 1113600, 1132800, 1132800, 1132800, 1132800),

	CORE_DVFS("abus",		2, 2, 1, KHZ,	 748800,  825600,  883200,  979200, 1017600, 1036800, 1113600, 1132800, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400),
	CORE_DVFS("aclk",		2, 2, 1, KHZ,	 748800,  825600,  883200,  979200, 1017600, 1036800, 1113600, 1132800, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400, 1190400),

	CORE_DVFS("ape",		2, 2, 1, KHZ,	 518400,  614400,  633600,  691200,  748800,  748800,  844800,  883200,  921600,  960000,  998400,  998400,  998400,  998400,  998400,  998400,  998400,  998400,  998400),
	CORE_DVFS("sbus",		2, 2, 1, KHZ,	 204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("sclk",		2, 2, 1, KHZ,	 204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),

	CORE_DVFS("host1x",		2, 2, 1, KHZ,	 204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("tsec",		2, 2, 1, KHZ,	 408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),
	CORE_DVFS("mselect",		2, 2, 1, KHZ,	 204000,  204000,  204000,  204000,  204000,  204000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000,  408000),

	CORE_DVFS("disp1",		2, 2, 0, KHZ,	 400000,  450000,  550000,  600000,  640000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000),
	CORE_DVFS("disp2",		2, 2, 0, KHZ,	 400000,  450000,  550000,  600000,  640000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000,  665000),


	CORE_DVFS("sor1",		2, 2, 1, KHZ,	 297000,  297000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000,  594000),
	CORE_DVFS("hda",		2, 2, 1, KHZ,	 102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),
	CORE_DVFS("hda2codec_2x",	2, 2, 1, KHZ,	  48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000),
	CORE_DVFS("maud",		2, 2, 1, KHZ,	 102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),

/* Common Tables */
	/* Core voltages(mV):				    600,     625,     650,     675,     700,     725,     750,     775,     800,     825,     850,     875,     900,     925,     950,     975,    1000,    1025,    1050 */
	CORE_DVFS("pll_a",		-1, -1, 1, KHZ,	1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000),
	CORE_DVFS("pll_c",		-1, -1, 1, KHZ,	1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000),
	CORE_DVFS("pll_c2",		-1, -1, 1, KHZ,	1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000),
	CORE_DVFS("pll_c3",		-1, -1, 1, KHZ,	1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000),
	CORE_DVFS("pll_c4_out0",	-1, -1, 1, KHZ,	1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000),
	CORE_DVFS("pll_d_out0",		-1, -1, 1, KHZ,	1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000),
	CORE_DVFS("pll_d2",		-1, -1, 1, KHZ,	1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000),
	CORE_DVFS("pll_dp",		-1, -1, 1, KHZ,	1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000, 1500000),

	/* Core voltages(mV):				    600,     625,     650,     675,     700,     725,     750,     775,     800,     825,     850,     875,     900,     925,     950,     975,    1000,    1025,    1050 */
	CORE_DVFS("csi",		-1, -1, 1, KHZ,	 750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000),
	CORE_DVFS("cilab",		-1, -1, 1, KHZ,	 102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  204000,  204000,  204000,  204000,  204000,  204000),
	CORE_DVFS("cilcd",		-1, -1, 1, KHZ,	 102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  204000,  204000,  204000,  204000,  204000,  204000),

	CORE_DVFS("clk72mhz",		-1, -1, 1, KHZ,	  68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000,   68000),
	CORE_DVFS("dsia",		-1, -1, 1, KHZ,	 750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000),
	CORE_DVFS("dsib",		-1, -1, 1, KHZ,	 750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000,  750000),

	CORE_DVFS("dsialp",		-1, -1, 1, KHZ,	 102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),
	CORE_DVFS("dsiblp",		-1, -1, 1, KHZ,	 102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000,  102000),



	CORE_DVFS("i2s0",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576),
	CORE_DVFS("i2s1",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576),
	CORE_DVFS("i2s2",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576),
	CORE_DVFS("i2s3",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576),
	CORE_DVFS("i2s4",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576),

	CORE_DVFS("d_audio",		-1, -1, 1, KHZ,	  98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304,   98304),
	CORE_DVFS("spdif_in",		-1, -1, 1, KHZ,	 163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200,  163200),
	CORE_DVFS("spdif_out",		-1, -1, 1, KHZ,	  24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576,   24576),
	CORE_DVFS("dmic1",		-1, -1, 1, KHZ,	  12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288),
	CORE_DVFS("dmic2",		-1, -1, 1, KHZ,	  12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288),
	CORE_DVFS("dmic3",		-1, -1, 1, KHZ,	  12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288,   12288),




	CORE_DVFS("sdmmc1",		-1, -1, 1, KHZ,	 416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000,  416000),
	CORE_DVFS("sdmmc3",		-1, -1, 1, KHZ,	 204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000,  204000),

	CORE_DVFS("sdmmc2",		-1, -1, 1, KHZ,	 200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000),
	CORE_DVFS("sdmmc4",		-1, -1, 1, KHZ,	 200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000),

	CORE_DVFS("sdmmc_legacy",	-1, -1, 1, KHZ,	  12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000,   12000),

	CORE_DVFS("xusb_falcon_src",	-1, -1, 1, KHZ,	 336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000,  336000),
	CORE_DVFS("xusb_host_src",	-1, -1, 1, KHZ,	 112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000),
	CORE_DVFS("xusb_dev_src",	-1, -1, 1, KHZ,	 112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000,  112000),
	CORE_DVFS("xusb_ssp_src",	-1, -1, 1, KHZ,	 120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000,  120000),
	CORE_DVFS("xusb_fs_src",	-1, -1, 1, KHZ,	  48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000),
	CORE_DVFS("xusb_hs_src",	-1, -1, 1, KHZ,	 480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000),
	CORE_DVFS("usbd",		-1, -1, 1, KHZ,	 480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000),
	CORE_DVFS("usb2",		-1, -1, 1, KHZ,	 480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000,  480000),

	CORE_DVFS("pcie",		-1, -1, 1, KHZ,	 500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000,  500000),

	CORE_DVFS("i2c1",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("i2c2",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("i2c3",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("i2c4",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("i2c5",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("i2c6",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("vii2c",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),

	CORE_DVFS("i2cslow",		-1, -1, 1, KHZ,	     33,      33,      33,      33,      33,      33,      33,      33,      33,      33,      33,      33,      33,      33,      33,      33,      33,      33,      33),
	CORE_DVFS("pwm",		-1, -1, 1, KHZ,	  48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000,   48000),

	CORE_DVFS("extern1",		-1, -1, 1, KHZ,	  49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152),
	CORE_DVFS("extern2",		-1, -1, 1, KHZ,	  49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152),
	CORE_DVFS("extern3",		-1, -1, 1, KHZ,	  49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152,   49152),

	CORE_DVFS("soc_therm",		-1, -1, 1, KHZ,	 136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000,  136000),
	CORE_DVFS("tsensor",		-1, -1, 1, KHZ,	  19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200,   19200),
};

static struct dvfs sor1_dpb01slt_dvfs_table[] = {
	CORE_DVFS("sor1",		2, 0, 1, KHZ,	      1,       1,       1,  270000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000),
	CORE_DVFS("sor1",		2, 1, 1, KHZ,	      1,  270000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000),
	CORE_DVFS("sor1",		2, 2, 1, KHZ,	 270000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000,  540000),
};

static struct dvfs spib01slt_dvfs_table[] = {
	CORE_DVFS("sbc1",		-1, -1, 1, KHZ,	  51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000),
	CORE_DVFS("sbc2",		-1, -1, 1, KHZ,	  51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000),
	CORE_DVFS("sbc3",		-1, -1, 1, KHZ,	  51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000),
	CORE_DVFS("sbc4",		-1, -1, 1, KHZ,	  51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000,   51000),

};

static struct dvfs spi_slaveb01slt_dvfs_table[] = {
	CORE_DVFS("sbc1",		-1, -1, 1, KHZ,	  45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000),
	CORE_DVFS("sbc2",		-1, -1, 1, KHZ,	  45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000),
	CORE_DVFS("sbc3",		-1, -1, 1, KHZ,	  45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000),
	CORE_DVFS("sbc4",		-1, -1, 1, KHZ,	  45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000,   45000),

};

static struct dvfs qspi_sdrb01slt_dvfs_table[] = {
	CORE_DVFS("qspi",		-1, -1, 1, KHZ,	 133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000,  133000),
};

static struct dvfs qspi_ddrb01slt_dvfs_table[] = {
	CORE_DVFS("qspi",		-1, -1, 1, KHZ,	 200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000,  200000),
};

/* EMC DVB DVFS tables */
static struct dvb_dvfs emcb01slt_dvb_dvfs_table[] = {
	{
		.speedo_id = -1,
		.freqs_mult = KHZ,
		.dvb_table = {
			{  204000, {  600,  600,  600, } },
			{  408000, {  600,  600,  600, } },
			{  800000, {  600,  600,  600, } },
			{ 1065600, {  600,  600,  600, } },
			{ 1331200, {  650,  600,  600, } },
			{ 1600000, {  650,  650,  625, } },
			{ 1862400, {  650,  650,  625, } },
			{ 2133000, {  675,  675,  650, } },
			{ 2400000, {  700,  700,  675, } },
			{ 2666000, {  700,  700,  675, } },
			{ 2933000, {  725,  725,  700, } },
			{ 3200000, {  750,  750,  725, } },
			{ 0, { } },
		},
	},
};

static const char coreb01slt_dvfs_table_ver[] = "SOC - p4v3-AggressiveSLT SOC_IO - p4v2-AggressiveSLT SOC_EMC- p4v2-AggressiveSLT";
