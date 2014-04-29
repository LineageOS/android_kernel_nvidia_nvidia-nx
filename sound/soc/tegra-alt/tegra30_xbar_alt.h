/*
 * tegra30_xbar_alt.h - TEGRA XBAR registers
 *
 * Copyright (c) 2011-2014 NVIDIA CORPORATION.  All rights reserved.
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

#ifndef __TEGRA_XBAR_ALT_H__
#define __TEGRA_XBAR_ALT_H__

#define TEGRA_AHUB_AUDIO_RX					0x0
#define TEGRA_AHUB_AUDIO_RX1					0x200
#define TEGRA_AHUB_AUDIO_RX_STRIDE				0x4
#define TEGRA_AHUB_AUDIO_RX_COUNT				168
/* This register repeats twice for each XBAR TX CIF */
/* The fields in this register are 1 bit per XBAR RX CIF */

/* Fields in *_CIF_RX/TX_CTRL; used by AHUB FIFOs, and all other audio modules */

#define TEGRA30_AUDIOCIF_CTRL_FIFO_THRESHOLD_SHIFT	28
#define TEGRA30_AUDIOCIF_CTRL_FIFO_THRESHOLD_MASK_US	0xf
#define TEGRA30_AUDIOCIF_CTRL_FIFO_THRESHOLD_MASK	(TEGRA30_AUDIOCIF_CTRL_FIFO_THRESHOLD_MASK_US << TEGRA30_AUDIOCIF_CTRL_FIFO_THRESHOLD_SHIFT)

#define TEGRA124_AUDIOCIF_CTRL_FIFO_THRESHOLD_SHIFT	24
#define TEGRA124_AUDIOCIF_CTRL_FIFO_THRESHOLD_MASK_US	0x3f
#define TEGRA124_AUDIOCIF_CTRL_FIFO_THRESHOLD_MASK	(TEGRA124_AUDIOCIF_CTRL_FIFO_THRESHOLD_MASK_US << TEGRA124_AUDIOCIF_CTRL_FIFO_THRESHOLD_SHIFT)

/* Channel count minus 1 */
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_CHANNELS_SHIFT	24
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_CHANNELS_MASK_US	7
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_CHANNELS_MASK	(TEGRA30_AUDIOCIF_CTRL_AUDIO_CHANNELS_MASK_US << TEGRA30_AUDIOCIF_CTRL_AUDIO_CHANNELS_SHIFT)

/* Channel count minus 1 */
#define TEGRA124_AUDIOCIF_CTRL_AUDIO_CHANNELS_SHIFT	20
#define TEGRA124_AUDIOCIF_CTRL_AUDIO_CHANNELS_MASK_US	0xf
#define TEGRA124_AUDIOCIF_CTRL_AUDIO_CHANNELS_MASK	(TEGRA124_AUDIOCIF_CTRL_AUDIO_CHANNELS_MASK_US << TEGRA124_AUDIOCIF_CTRL_AUDIO_CHANNELS_SHIFT)

/* Channel count minus 1 */
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_CHANNELS_SHIFT	16
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_CHANNELS_MASK_US	7
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_CHANNELS_MASK	(TEGRA30_AUDIOCIF_CTRL_CLIENT_CHANNELS_MASK_US << TEGRA30_AUDIOCIF_CTRL_CLIENT_CHANNELS_SHIFT)

/* Channel count minus 1 */
#define TEGRA124_AUDIOCIF_CTRL_CLIENT_CHANNELS_SHIFT	16
#define TEGRA124_AUDIOCIF_CTRL_CLIENT_CHANNELS_MASK_US	0xf
#define TEGRA124_AUDIOCIF_CTRL_CLIENT_CHANNELS_MASK	(TEGRA30_AUDIOCIF_CTRL_CLIENT_CHANNELS_MASK_US << TEGRA30_AUDIOCIF_CTRL_CLIENT_CHANNELS_SHIFT)

#define TEGRA30_AUDIOCIF_BITS_4				0
#define TEGRA30_AUDIOCIF_BITS_8				1
#define TEGRA30_AUDIOCIF_BITS_12			2
#define TEGRA30_AUDIOCIF_BITS_16			3
#define TEGRA30_AUDIOCIF_BITS_20			4
#define TEGRA30_AUDIOCIF_BITS_24			5
#define TEGRA30_AUDIOCIF_BITS_28			6
#define TEGRA30_AUDIOCIF_BITS_32			7

#define TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT		12
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_MASK		(7                        << TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_4		(TEGRA30_AUDIOCIF_BITS_4  << TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_8		(TEGRA30_AUDIOCIF_BITS_8  << TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_12		(TEGRA30_AUDIOCIF_BITS_12 << TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_16		(TEGRA30_AUDIOCIF_BITS_16 << TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_20		(TEGRA30_AUDIOCIF_BITS_20 << TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_24		(TEGRA30_AUDIOCIF_BITS_24 << TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_28		(TEGRA30_AUDIOCIF_BITS_28 << TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_32		(TEGRA30_AUDIOCIF_BITS_32 << TEGRA30_AUDIOCIF_CTRL_AUDIO_BITS_SHIFT)

#define TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT		8
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_MASK		(7                        << TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_4		(TEGRA30_AUDIOCIF_BITS_4  << TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_8		(TEGRA30_AUDIOCIF_BITS_8  << TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_12		(TEGRA30_AUDIOCIF_BITS_12 << TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_16		(TEGRA30_AUDIOCIF_BITS_16 << TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_20		(TEGRA30_AUDIOCIF_BITS_20 << TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_24		(TEGRA30_AUDIOCIF_BITS_24 << TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_28		(TEGRA30_AUDIOCIF_BITS_28 << TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_32		(TEGRA30_AUDIOCIF_BITS_32 << TEGRA30_AUDIOCIF_CTRL_CLIENT_BITS_SHIFT)

#define TEGRA30_AUDIOCIF_EXPAND_ZERO			0
#define TEGRA30_AUDIOCIF_EXPAND_ONE			1
#define TEGRA30_AUDIOCIF_EXPAND_LFSR			2

#define TEGRA30_AUDIOCIF_CTRL_EXPAND_SHIFT		6
#define TEGRA30_AUDIOCIF_CTRL_EXPAND_MASK		(3                            << TEGRA30_AUDIOCIF_CTRL_EXPAND_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_EXPAND_ZERO		(TEGRA30_AUDIOCIF_EXPAND_ZERO << TEGRA30_AUDIOCIF_CTRL_EXPAND_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_EXPAND_ONE		(TEGRA30_AUDIOCIF_EXPAND_ONE  << TEGRA30_AUDIOCIF_CTRL_EXPAND_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_EXPAND_LFSR		(TEGRA30_AUDIOCIF_EXPAND_LFSR << TEGRA30_AUDIOCIF_CTRL_EXPAND_SHIFT)

#define TEGRA30_AUDIOCIF_STEREO_CONV_CH0		0
#define TEGRA30_AUDIOCIF_STEREO_CONV_CH1		1
#define TEGRA30_AUDIOCIF_STEREO_CONV_AVG		2

#define TEGRA30_AUDIOCIF_CTRL_STEREO_CONV_SHIFT		4
#define TEGRA30_AUDIOCIF_CTRL_STEREO_CONV_MASK		(3                                << TEGRA30_AUDIOCIF_CTRL_STEREO_CONV_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_STEREO_CONV_CH0		(TEGRA30_AUDIOCIF_STEREO_CONV_CH0 << TEGRA30_AUDIOCIF_CTRL_STEREO_CONV_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_STEREO_CONV_CH1		(TEGRA30_AUDIOCIF_STEREO_CONV_CH1 << TEGRA30_AUDIOCIF_CTRL_STEREO_CONV_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_STEREO_CONV_AVG		(TEGRA30_AUDIOCIF_STEREO_CONV_AVG << TEGRA30_AUDIOCIF_CTRL_STEREO_CONV_SHIFT)

#define TEGRA30_AUDIOCIF_CTRL_REPLICATE_SHIFT		3

#define TEGRA30_AUDIOCIF_DIRECTION_TX			0
#define TEGRA30_AUDIOCIF_DIRECTION_RX			1

#define TEGRA30_AUDIOCIF_CTRL_DIRECTION_SHIFT		2
#define TEGRA30_AUDIOCIF_CTRL_DIRECTION_MASK		(1                             << TEGRA30_AUDIOCIF_CTRL_DIRECTION_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_DIRECTION_TX		(TEGRA30_AUDIOCIF_DIRECTION_TX << TEGRA30_AUDIOCIF_CTRL_DIRECTION_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_DIRECTION_RX		(TEGRA30_AUDIOCIF_DIRECTION_RX << TEGRA30_AUDIOCIF_CTRL_DIRECTION_SHIFT)

#define TEGRA30_AUDIOCIF_TRUNCATE_ROUND			0
#define TEGRA30_AUDIOCIF_TRUNCATE_CHOP			1

#define TEGRA30_AUDIOCIF_CTRL_TRUNCATE_SHIFT		1
#define TEGRA30_AUDIOCIF_CTRL_TRUNCATE_MASK		(1                               << TEGRA30_AUDIOCIF_CTRL_TRUNCATE_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_TRUNCATE_ROUND		(TEGRA30_AUDIOCIF_TRUNCATE_ROUND << TEGRA30_AUDIOCIF_CTRL_TRUNCATE_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_TRUNCATE_CHOP		(TEGRA30_AUDIOCIF_TRUNCATE_CHOP  << TEGRA30_AUDIOCIF_CTRL_TRUNCATE_SHIFT)

#define TEGRA30_AUDIOCIF_MONO_CONV_ZERO			0
#define TEGRA30_AUDIOCIF_MONO_CONV_COPY			1

#define TEGRA30_AUDIOCIF_CTRL_MONO_CONV_SHIFT		0
#define TEGRA30_AUDIOCIF_CTRL_MONO_CONV_MASK		(1                               << TEGRA30_AUDIOCIF_CTRL_MONO_CONV_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_MONO_CONV_ZERO		(TEGRA30_AUDIOCIF_MONO_CONV_ZERO << TEGRA30_AUDIOCIF_CTRL_MONO_CONV_SHIFT)
#define TEGRA30_AUDIOCIF_CTRL_MONO_CONV_COPY		(TEGRA30_AUDIOCIF_MONO_CONV_COPY << TEGRA30_AUDIOCIF_CTRL_MONO_CONV_SHIFT)

struct tegra30_xbar_cif_conf {
	unsigned int threshold;
	unsigned int audio_channels;
	unsigned int client_channels;
	unsigned int audio_bits;
	unsigned int client_bits;
	unsigned int expand;
	unsigned int stereo_conv;
	unsigned int replicate;
	unsigned int direction;
	unsigned int truncate;
	unsigned int mono_conv;
};

void tegra30_xbar_set_cif(struct regmap *regmap, unsigned int reg,
			  struct tegra30_xbar_cif_conf *conf);
void tegra124_xbar_set_cif(struct regmap *regmap, unsigned int reg,
			   struct tegra30_xbar_cif_conf *conf);
int tegra30_xbar_read_reg(unsigned int reg, unsigned int *val);

struct tegra30_xbar_soc_data {
	const struct regmap_config *regmap_config;
	unsigned int num_dais;
	unsigned int num_mux_widgets;
	unsigned int num_mux0_input;
	unsigned int num_mux1_input;
	unsigned int mask[2];
};

struct tegra30_xbar {
	struct clk *clk;
	struct clk *clk_parent;
	struct regmap *regmap;
	const struct tegra30_xbar_soc_data *soc_data;
};

#endif
