/*
 * Copyright (C) 2011-2020 Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *   * Neither the name of Intel Corporation nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#pragma once
#define LE_SS_LEN 1808
const int sgx_le_ss_length = LE_SS_LEN;

const unsigned char sgx_le_ss[LE_SS_LEN] =
{
	0x06,0x00,0x00,0x00,0xe1,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
	0x86,0x80,0x00,0x00,0x14,0x06,0x19,0x20,0x01,0x01,0x00,0x00,0x60,0x00,0x00,0x00,
	0x60,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x31,0xec,0xdd,0x4f,0x85,0x40,0xf9,0xa0,0x7d,0x90,0x69,0x29,0x82,0x90,0x6b,0xab,
	0xe5,0x51,0x86,0x9f,0x27,0x58,0x7b,0x3e,0xc2,0x68,0x95,0x20,0x94,0xe3,0x02,0xd1,
	0x28,0xda,0x31,0x85,0xe1,0x75,0xea,0x52,0x07,0x50,0x1a,0xcf,0x88,0x68,0xbe,0xa5,
	0x1c,0x41,0xc1,0x1a,0x3c,0x8e,0x5b,0xcf,0xd1,0x07,0xf4,0x4e,0x20,0xb6,0xd7,0xa2,
	0x36,0x60,0x49,0x12,0x73,0x68,0x8b,0xf0,0x91,0x7e,0xf1,0x20,0xbf,0xea,0x56,0xda,
	0x61,0x0b,0xf3,0x04,0x87,0xec,0xb9,0x40,0x68,0xec,0x7a,0x88,0x03,0x51,0xdf,0xd3,
	0x94,0x6f,0x66,0x73,0x9c,0x40,0xe4,0xf0,0xe2,0x8d,0x24,0x71,0xf5,0x8c,0x17,0xe6,
	0x4f,0xf3,0xbf,0xb1,0x0c,0x6b,0x8c,0xae,0x0c,0xd9,0x67,0x71,0x4b,0xd0,0xc0,0x0d,
	0xdf,0xc1,0x0b,0x03,0xe4,0x27,0xf1,0xad,0xd7,0xa0,0xed,0xbc,0x4e,0xf5,0xac,0x06,
	0xeb,0x8a,0x99,0x86,0x6b,0x16,0x4a,0xd0,0x1d,0xaa,0x90,0x27,0x96,0x2d,0x19,0x23,
	0xf8,0xfd,0x2e,0xbb,0xe1,0xd4,0x0e,0x34,0xb3,0x16,0x53,0x8a,0xd9,0xa7,0xd3,0x7d,
	0x4c,0xda,0x81,0xc0,0x86,0xd4,0xd6,0x15,0xb6,0xdc,0x51,0x9c,0xb6,0xca,0xa4,0x3d,
	0x06,0xfc,0x68,0xfa,0x1d,0x16,0x00,0x02,0xf4,0x13,0xfb,0x88,0xe0,0x0a,0x49,0xfa,
	0xad,0x87,0xa5,0xb7,0x53,0xf1,0xfc,0x81,0x5c,0x52,0xca,0x9a,0x38,0x37,0xff,0x8e,
	0x92,0x20,0x66,0xf4,0xc7,0x06,0x97,0x0f,0x5d,0x87,0xfe,0x5a,0xc4,0xe7,0x02,0xe9,
	0xad,0x54,0x15,0x69,0x22,0xb4,0x21,0xed,0x56,0xf4,0xf7,0xf0,0x24,0xcd,0xa6,0xa6,
	0x0b,0x4b,0xc8,0x80,0xdb,0xed,0xa3,0x24,0xa3,0x79,0x04,0x41,0x4b,0x62,0x10,0xd4,
	0x61,0x51,0xe3,0x35,0xc9,0x23,0xdc,0x2a,0xbb,0x84,0x30,0xf8,0xe8,0x76,0x80,0x8b,
	0x19,0xc7,0x27,0x56,0x26,0x6a,0xec,0x5a,0x96,0x05,0x02,0x90,0xf0,0xa0,0x7e,0x66,
	0x18,0xe4,0xca,0xcf,0xe5,0x90,0x68,0x6a,0x5a,0x3b,0xa6,0x05,0xd8,0xc6,0x0a,0xc8,
	0x03,0xa7,0x72,0xe9,0x4f,0xa9,0xe6,0x7a,0xd9,0xe7,0x57,0x44,0xbb,0xa8,0x20,0x87,
	0x8f,0xc6,0xaf,0xff,0x2d,0x93,0x34,0x23,0x4c,0x4e,0x82,0x2e,0xfc,0x03,0x22,0xb1,
	0x9c,0x0c,0xab,0x9b,0x98,0xfb,0xc7,0x8d,0x74,0x0e,0x0e,0xc3,0x5c,0xf2,0x81,0x98,
	0x90,0x09,0x42,0xff,0xba,0x22,0xf0,0xd8,0x6f,0x2e,0xcd,0x4e,0x0f,0xdd,0x74,0x9f,
	0x03,0x00,0x00,0x00,0x6d,0x08,0xfa,0x01,0xb5,0x6f,0xd7,0xef,0x8e,0xda,0xcb,0x43,
	0xba,0xd6,0x57,0xc8,0xa2,0xa2,0xbc,0xd0,0x3d,0x20,0xe7,0x5a,0xb0,0xb1,0xd4,0xee,
	0x6a,0xce,0xb2,0x9a,0xb5,0x7e,0x3d,0x9a,0xf1,0xf9,0x66,0x32,0xa1,0x20,0x4a,0xfe,
	0xd4,0xac,0xa9,0xe9,0xfe,0x1b,0x60,0x54,0xbc,0x40,0x3b,0xdb,0x73,0x1c,0x2f,0xd1,
	0xe3,0xa9,0x3c,0x75,0x23,0xf3,0x3e,0xfc,0x72,0x55,0x40,0x26,0xe0,0x53,0x28,0x4a,
	0x6b,0xce,0xcc,0xb1,0x76,0xd6,0x47,0x74,0x51,0x30,0x2a,0x3e,0x94,0x99,0xa2,0x9e,
	0x2a,0xc7,0x4f,0x5a,0x41,0xad,0xa1,0xfa,0x8f,0xe5,0x95,0x3b,0xc6,0xac,0x58,0xa1,
	0x45,0x92,0xa5,0x60,0xe1,0x94,0xf5,0xf9,0xd7,0xe8,0xbd,0x11,0x41,0xc7,0x43,0xb0,
	0x93,0x5c,0xb6,0x6f,0xe0,0xca,0xca,0xee,0x43,0xa5,0x2c,0x79,0x91,0x4a,0xc4,0x5c,
	0x1e,0x90,0x69,0xaa,0x08,0xdb,0xa3,0x63,0x85,0xc0,0x5f,0x0b,0xd4,0x85,0x69,0xc2,
	0x0d,0x97,0xb2,0xe8,0x80,0x69,0x72,0xb6,0x34,0x59,0x7e,0xa9,0x73,0xea,0xbb,0xd7,
	0x80,0xfb,0x57,0x9e,0xf3,0x14,0x97,0xd9,0xbb,0xbe,0xc7,0x8f,0xbd,0x74,0x5f,0xf9,
	0x5b,0x0f,0x3b,0x56,0xe0,0x78,0x97,0x95,0x57,0x03,0x56,0x3b,0xb7,0x37,0x57,0x20,
	0xfb,0x59,0x69,0x0d,0x2d,0xcc,0x80,0xcb,0x61,0x4b,0x13,0xba,0x2c,0x43,0x24,0x7a,
	0x34,0xdd,0x33,0xe3,0x2d,0xf0,0x53,0xb3,0xaa,0xf4,0xc8,0xe1,0x13,0xd3,0x88,0x77,
	0x7a,0x63,0xe3,0xb7,0xa4,0xf9,0x08,0x90,0xd2,0xf9,0x71,0xd2,0xb5,0xf9,0x83,0xf3,
	0x98,0x0a,0x33,0x83,0xcd,0x3c,0xc3,0xc2,0x24,0x36,0xaa,0xfc,0xd4,0x71,0xf9,0xf0,
	0xf7,0x33,0xb6,0x0c,0x8c,0xb6,0x97,0xee,0xf5,0xdb,0xaa,0x7a,0xd3,0x68,0x0d,0xc6,
	0x44,0x6f,0x22,0xaf,0xdb,0x37,0x8c,0xfa,0x44,0x3c,0x35,0x36,0x94,0x04,0xa0,0xc9,
	0x26,0x92,0x2d,0xbe,0x63,0x7c,0x8f,0x61,0xd2,0x9e,0xaf,0x8b,0xc9,0x5a,0xbd,0x9b,
	0x57,0xe7,0x47,0x57,0xb0,0x20,0x14,0x4d,0x06,0x45,0x0e,0xea,0xdf,0xe4,0xaa,0x62,
	0x4d,0x00,0x52,0xaf,0x2c,0x04,0xb1,0x24,0x5a,0x6e,0xf9,0x54,0x33,0x51,0x40,0x97,
	0x01,0xd0,0x97,0x77,0x46,0xf0,0x65,0xce,0x73,0x47,0x1b,0x0a,0x22,0xe0,0xfe,0x30,
	0x7e,0x2d,0x54,0x35,0x13,0xbe,0xb0,0xbc,0xe2,0x96,0x46,0x69,0xe9,0x74,0x59,0x8e,
	0x29,0xf6,0xcc,0x2c,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xda,0xa8,0x00,0x28,0x8f,0x0d,0x88,0xb0,0x78,0x99,0x94,0x77,0x53,0x8b,0xb9,0xc0,
	0x88,0x8d,0x1e,0x0e,0xaf,0xe0,0xbe,0x20,0x2c,0x49,0x3d,0x3e,0x27,0x4e,0xd9,0x80,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xa4,0x6b,0x8b,0xb2,0x71,0x19,0x62,0x38,0xba,0x8d,0x96,0x19,0xbf,0x63,0x6a,0xaf,
	0xbb,0x75,0x3c,0xb5,0xa7,0x2f,0x1c,0xad,0x36,0x9d,0xdf,0x9e,0x23,0xd3,0x9b,0x2d,
	0x3d,0x96,0xda,0x7e,0x36,0x3e,0xf0,0x37,0x1b,0xc0,0x3a,0xfb,0x4c,0xad,0x36,0xe4,
	0xaf,0x7a,0x80,0x77,0x87,0xaf,0x43,0x7b,0xe8,0x3a,0x0b,0x8d,0xef,0x38,0x7c,0x1b,
	0x14,0x3f,0x7c,0xf8,0x5f,0xb7,0x93,0x13,0xb9,0xd2,0x10,0xb6,0x6e,0x02,0x32,0x7f,
	0xeb,0xd9,0x93,0x73,0x66,0x2d,0x42,0xd7,0x2e,0xaf,0xe1,0x3d,0x8c,0x9e,0x75,0x51,
	0x30,0xad,0x3f,0xa6,0xd8,0xbb,0x8f,0xd2,0xdc,0x6a,0xb8,0xa0,0x86,0x25,0xde,0xfe,
	0xd1,0x7b,0x72,0x9f,0x6b,0x66,0xc7,0xd7,0x25,0x61,0x27,0x52,0x58,0x50,0xc4,0xa5,
	0xee,0x88,0xc5,0x47,0x6d,0xaf,0x50,0xaf,0x3f,0xac,0xfb,0xdc,0x36,0x00,0xa2,0x91,
	0xf7,0xb3,0x3a,0x08,0x87,0x33,0xd5,0xb0,0xb2,0x05,0xcd,0x0a,0xa3,0x16,0xc6,0x28,
	0x26,0x41,0xc1,0xea,0x73,0x41,0x29,0xb8,0x02,0xe2,0x08,0x4d,0xff,0xba,0x3c,0x18,
	0x3e,0xc5,0x40,0x21,0xa9,0x2f,0x7c,0x32,0x4f,0x4f,0x8b,0x3a,0x29,0x14,0xa6,0x90,
	0x3c,0x0a,0x60,0x70,0x7f,0xc1,0x6b,0x35,0x7f,0xf5,0x2c,0x4d,0xe3,0x06,0x60,0xe3,
	0xa8,0x52,0xb3,0xc9,0x3c,0x0e,0x70,0xca,0xee,0x00,0xf9,0x9c,0xaa,0xb0,0x9a,0x52,
	0xd0,0xfe,0x3d,0x22,0xb5,0x50,0xf3,0x8a,0x25,0x39,0x3a,0x89,0x9f,0x7e,0x73,0xc8,
	0x30,0xf5,0x15,0x0f,0xf6,0x1f,0xfb,0x86,0x52,0x20,0xec,0x5d,0x45,0x5d,0x04,0x3f,
	0xb1,0x25,0x73,0x49,0x42,0x65,0xfe,0xa3,0xe3,0xcd,0xe8,0x01,0x7c,0xee,0x6b,0xf6,
	0xb5,0x6d,0x2c,0x23,0xd1,0x1a,0x21,0x25,0x11,0xba,0xb7,0xc5,0xf8,0xcb,0xae,0xff,
	0x80,0xb7,0x0d,0xa1,0x77,0x98,0xba,0x33,0x75,0x06,0x81,0xd1,0x79,0x0f,0x2e,0x33,
	0x2c,0x51,0x02,0xda,0xba,0xbb,0xb3,0x61,0x1e,0xa2,0x0f,0x3f,0x1b,0x41,0x6b,0xf8,
	0x59,0xae,0x4a,0xdb,0x86,0x0c,0x7a,0x1d,0xeb,0x0e,0xb2,0xea,0x10,0x00,0x99,0xd1,
	0x92,0x77,0xa8,0x3b,0x5e,0xce,0x2c,0x64,0x9e,0xb1,0x82,0x4c,0xc5,0x72,0x9c,0x9c,
	0x5c,0x8c,0x34,0x06,0xb3,0x43,0xd9,0x74,0xcc,0x78,0x45,0x02,0x3d,0xae,0x50,0x69,
	0x6f,0xb8,0x9e,0x85,0xac,0x0f,0xb1,0x8a,0xef,0x2c,0xcf,0x80,0xde,0x4c,0x96,0x0c,
	0xb1,0xdf,0x8b,0x04,0x4e,0xf0,0xd7,0x2b,0x17,0x6d,0x2b,0x23,0x31,0x35,0x69,0xa0,
	0x7b,0x0a,0xba,0x4a,0xba,0xd9,0x31,0xdf,0x9a,0x7a,0x1b,0x0b,0x71,0xa9,0x07,0x4d,
	0xee,0x32,0x0a,0x5f,0x41,0xbe,0x93,0xd8,0xac,0xf7,0xf2,0x0e,0xfb,0xae,0x64,0x5a,
	0x87,0xb8,0x9c,0x31,0x75,0xaa,0x17,0x3c,0x32,0xc2,0x75,0xf5,0xd1,0x14,0xb7,0xbc,
	0xf2,0xba,0x6a,0xf2,0x83,0xb1,0xe6,0xc1,0x1d,0x97,0x6e,0x99,0x5a,0x80,0x40,0x1b,
	0xfa,0xe2,0x9d,0xeb,0xd4,0x38,0xe5,0x75,0xd3,0xf0,0xe3,0x83,0xb2,0x8b,0x1f,0x21,
	0x13,0xd4,0x7e,0x38,0x8b,0xbd,0xcd,0xba,0xea,0x34,0x69,0x8d,0x74,0x8f,0x08,0xb3,
	0x82,0x3c,0xda,0xb2,0xf1,0x90,0x63,0x24,0x45,0xba,0x25,0x83,0xfe,0x7a,0x6b,0xc0,
	0xdc,0x07,0xe6,0x8d,0xf0,0xc9,0x9d,0xb8,0x47,0x47,0xf2,0xa5,0x9a,0xba,0xaf,0x80,
	0x9e,0x04,0xc8,0xf6,0x9c,0x69,0x39,0x22,0xf9,0x95,0x71,0x13,0xf8,0xfb,0xb9,0xb8,
	0x11,0x57,0xd9,0xd1,0xdf,0x11,0x28,0xe5,0xc5,0x23,0x37,0xfb,0x0a,0xfc,0x0d,0x7c,
	0xa4,0x36,0xbe,0x03,0x4b,0xc7,0xa5,0x2a,0x67,0xed,0xd7,0x58,0x7c,0x08,0xf2,0x3a,
	0x63,0x7d,0x9f,0x3a,0x65,0xb1,0xbf,0x3b,0x55,0xe7,0x13,0x28,0x2a,0x16,0x2e,0xe3,
	0x80,0x39,0x9a,0x3b,0x7a,0x89,0xa2,0x0c,0x9c,0xc6,0xaf,0xbd,0x6b,0xb5,0x8d,0x90,
	0xf7,0x4a,0xbb,0xd7,0x69,0x19,0xe0,0xbe,0x3c,0xd4,0xab,0x41,0x60,0xf5,0x74,0x92,
	0xf1,0xce,0x15,0xd2,0xcf,0x85,0xfb,0x70,0x40,0x30,0xe0,0xef,0x1b,0x8a,0x76,0x3e,
	0x67,0xcc,0x37,0x59,0x39,0x7d,0x1e,0x06,0x78,0x3f,0x95,0xd6,0xb2,0x6f,0x50,0xa8,
	0x3b,0x60,0x6a,0x28,0xb2,0x90,0xbd,0x23,0xd4,0xc7,0xeb,0xef,0x6b,0xe8,0x83,0x91,
	0x9d,0xb9,0x42,0x58,0xd8,0xff,0x5e,0x0a,0xc3,0x9b,0x01,0x3e,0xa1,0xd6,0x3b,0xcf,
	0x51,0xd7,0xec,0x65,0xb7,0x56,0xbc,0x23,0x01,0x46,0xd5,0xf0,0x72,0x0d,0xa7,0xe8,
	0x6c,0x61,0x43,0x21,0xd4,0x89,0x4a,0xe0,0x25,0x74,0xd8,0xa9,0x66,0xbd,0xc2,0xb5,
	0x50,0x46,0xc0,0xb3,0x90,0x51,0xbf,0xa5,0x3f,0xa3,0x3e,0xbb,0xdd,0x95,0x9f,0xb6,
	0xd8,0xcc,0x7d,0x65,0xb6,0x5d,0xfd,0x01,0x69,0x3c,0xcf,0xf3,0x90,0x73,0x71,0x1a,
	0xab,0xc0,0xcf,0x06,0x7a,0x16,0xfa,0x08,0x00,0xcb,0x09,0xb2,0x79,0x1f,0x01,0x16,
};
