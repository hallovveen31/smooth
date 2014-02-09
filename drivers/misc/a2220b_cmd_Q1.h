/* drivers/misc/a2220b_cmd_Q1.h - a2220b MACRO header file of Q1
 *
 * Copyright (C) 2011 Samsung Corporation.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#if defined(CONFIG_USA_MODEL_SGH_T879)
unsigned char phonecall_receiver_nson[] = {
	/* for preset firmware */
	0x80, 0x00, 0x00, 0x00, //SYNC write / read 
	0x80, 0x31, 0x00, 0x00, //USE API Preset 0 write / read
};
#else
unsigned char phonecall_receiver_nson[] = {
	0x80,0x52, 0x00,0x00,				//DHWPT disable
	0x80,0x1C, 0x00,0x01,				//0x801C:VoiceProcessingOn, 0x0001:On
	0x80,0x17, 0x00,0x02, 0x80,0x18, 0x00,0x00, //Microphone Configuration, 0x8018:SetAlgorithmParm, 0x0000:2-mic Close Talk (CT)
	0x80,0x26, 0x00,0x1A,				//0x8026:SelectRouting, 0x001A: 26
	0x80,0x1B, 0x00,0x0B,				//0x801B:SetDigitalInputGain,  0x00:PCM-A left,  0x0B : (11 dB)
	0x80,0x1B, 0x01,0x06,				//0x801B:SetDigitalInputGain,  0x01:PCM-A right, 0x06 : (6 dB)
	0x80,0x15, 0x04,0xFA,				//0x8015:SetDigitalOutputGain, 0x04:PCM-C left,  0xF8 : (-6 dB)
	0x80,0x15, 0x05,0xFA,				//0x8015:SetgitalOutputGain,   0x05:PCM-C right, 0xF8 : (-6 dB)
	0x80,0x1B, 0x02,0xF7,				//0x801B:SetDigitalInputGain,  0x02:PCM-B left,  0xF7 : (-9 dB)
	0x80,0x1B, 0x03,0xF7,				//0x801B:SetDigitalInputGain,  0x03:PCM-B right, 0xF7 : (-9 dB)
	0x80,0x15, 0x06,0x05,				//0x8015:SetgitalOutputGain,   0x06:PCM-D left,  0x05 : (5 dB)
	0x80,0x15, 0x07,0x05,				//0x8015:SetgitalOutputGain,   0x07:PCM-D right, 0x05 : (5 dB)
	0x80,0x17, 0x00,0x1E, 0x80,0x18, 0x00,0x03, //0x8017:SetAlgorithmParmID, 0x001E:Position/Suppression Tradeoff, 0x8018:SetAlgorithmParm, 0x0003:3
	0x80,0x17, 0x00,0x4B, 0x80,0x18, 0x00,0x08, //Tx Noise Suppression Level, 0x8018:SetAlgorithmParm, 0x0008:Level 8
	0x80,0x17, 0x00,0x03, 0x80,0x18, 0x00,0x01, //AEC Mode, 0x8018:SetAlgorithmParm, 0x0001:AEC ON
	0x80,0x17, 0x00,0x12, 0x80,0x18, 0x00,0x00, //Downlink Speaker Volume, 0x8018:SetAlgorithmParm, 0x0000:(0 dB)
	0x80,0x17, 0x00,0x23, 0x80,0x18, 0x00,0x00, //Use AEC Comfort Noise Fill, 0x8018:SetAlgorithmParm, 0x0000:No
	0x80,0x17, 0x00,0x34, 0x80,0x18, 0x00,0x03, //Echo Suppression Enhancement, 0x8018:SetAlgorithmParm, 0x0003:(3 dB)
	0x80,0x17, 0x00,0x2E, 0x80,0x18, 0x00,0x00, //AEC Comfort Noise Gain, 0x8018:SetAlgorithmParm, 0x0000:(0 dB)
	0x80,0x17, 0x00,0x04, 0x80,0x18, 0x00,0x00, //Use AGC, 0x8018:SetAlgorithmParm, 0x0000:No
	0x80,0x17, 0x00,0x28, 0x80,0x18, 0x00,0x00, //Use Rx AGC, 0x8018:SetAlgorithmParm, 0x0000:No
	0x80,0x17, 0x00,0x0E, 0x80,0x18, 0x00,0x00, //Far End Noise Suppression, 0x8018:SetAlgorithmParm, 0x0000:Off
	0x80,0x17, 0x00,0x4C, 0x80,0x18, 0x00,0x03, //Rx Noise Suppression Level, 0x8018:SetAlgorithmParm, 0x0003:Level 3
	0x80,0x17, 0x00,0x1A, 0x80,0x18, 0x00,0x00, //Tx ComfortNoise, 0x8018:SetAlgorithmParm, 0x0000:No
	0x80,0x17, 0x00,0x20, 0x80,0x18, 0x00,0x01, //0x8017:SetAlgorithmParmID, 0x0020:Tx PostEq Mode, 0x8018:SetAlgorithmParm, 0x0001:on
	0x80,0x17, 0x00,0x1F, 0x80,0x18, 0x00,0x00, //0x8017:SetAlgorithmParmID, 0x001F:Rx PostEq Mode, 0x8018:SetAlgorithmParm, 0x0000:off
	0x80,0x17, 0x00,0x30, 0x80,0x18, 0x00,0x00, //0x8017:SetAlgorithmParmID, 0x0030:Tx MBC Mode, 0x8018:SetAlgorithmParm, 0x0000:Off
	0x80,0x17, 0x00,0x31, 0x80,0x18, 0x00,0x00, //0x8017:SetAlgorithmParmID, 0x0031:Rx MBC Mode, 0x8018:SetAlgorithmParm, 0x0000:Off
};
#endif

unsigned char phonecall_receiver_nsoff[] = {
	0x80, 0x1C, 0x00, 0x00, //, 0x80, 0x1C:VoiceProcessingOn,, 0x00, 0x01:Off
	0x80, 0x17, 0x00, 0x02, 0x80, 0x18, 0x00, 0x00, // Microphone Configuration,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:2-mic Close Talk (CT)
	0x80, 0x26, 0x00, 0x1A, //, 0x80, 0x26:SelectRouting,, 0x00, 0x1A: 26
	0x80, 0x1B, 0x00, 0x04, //, 0x80, 0x1B:SetDigitalInputGain,, 0x00, 0x:PCM-A left, 0x04:(4 dB)
	0x80, 0x1B, 0x01, 0x04, //, 0x80, 0x1B:SetDigitalInputGain, 0x01:PCM-A right, 0x04:(4 dB)
	0x80, 0x15, 0x04, 0x03, // SetDigitalOutputGain, 0x04:PCM-C left, 0x03:(3 dB)
	0x80, 0x15, 0x05, 0x03, // setgitalOutputGain, 0x05:PCM-C right, 0x03:(3 dB)
	0x80, 0x17, 0x00, 0x4B, 0x80, 0x18, 0x00, 0x06, // Tx Noise Suppression Level,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x06:Level 6
	0x80, 0x17, 0x00, 0x03, 0x80, 0x18, 0x00, 0x00, // AEC Mode,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:AEC off
	0x80, 0x17, 0x00, 0x12, 0x80, 0x18, 0x00, 0x00, // Downlink Speaker Volume,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:(0 dB)
	0x80, 0x17, 0x00, 0x23, 0x80, 0x18, 0x00, 0x00, // Use AEC Comfort Noise Fill,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:No
	0x80, 0x17, 0x00, 0x34, 0x80, 0x18, 0x00, 0x00, // Echo Suppression Enhancement,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:(0 dB)
	0x80, 0x17, 0x00, 0x2E, 0x80, 0x18, 0x00, 0x00, // AEC Comfort Noise Gain,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:(0 dB)
	0x80, 0x17, 0x00, 0x04, 0x80, 0x18, 0x00, 0x00, // Use AGC,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:No
	0x80, 0x17, 0x00, 0x28, 0x80, 0x18, 0x00, 0x00, // Use Rx AGC,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:No
	0x80, 0x17, 0x00, 0x0E, 0x80, 0x18, 0x00, 0x00, // Far End Noise Suppression,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:Off
	0x80, 0x17, 0x00, 0x4C, 0x80, 0x18, 0x00, 0x03, // Rx Noise Suppression Level,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x03:Level 3
	0x80, 0x17, 0x00, 0x1A, 0x80, 0x18, 0x00, 0x00, // Tx ComfortNoise,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:No
	0x80, 0x17, 0x00, 0x20, 0x80, 0x18, 0x00, 0x01, //, 0x80, 0x17:SetAlgorithmParmID,, 0x00, 0x20:Tx PostEq Mode,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x01:on
	0x80, 0x17, 0x00, 0x1F, 0x80, 0x18, 0x00, 0x00, //, 0x80, 0x17:SetAlgorithmParmID,, 0x00, 0x1F:Rx PostEq Mode,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:off
	0x80, 0x17, 0x00, 0x30, 0x80, 0x18, 0x00, 0x00, //, 0x80, 0x17:SetAlgorithmParmID,, 0x00, 0x30:Tx MBC Mode,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:Off
	0x80, 0x17, 0x00, 0x31, 0x80, 0x18, 0x00, 0x00, //, 0x80, 0x17:SetAlgorithmParmID,, 0x00, 0x31:Rx MBC Mode,, 0x80, 0x18:SetAlgorithmParm,, 0x00, 0x00:Off
};

unsigned char bypass_multimedia[] = {
	0x80, 0x52, 0x00, 0x48, // 0x8052:
	0x80, 0x52, 0x00, 0x5C, // 0x8052:
	0x80, 0x10, 0x00, 0x01, // sleep
};

unsigned char bypass_multimedia_all[] = {
	0x80, 0x52, 0x00, 0xE2, // 0x8052:
	0x80, 0x52, 0x00, 0xDD, // 0x8052:
	0x80, 0x10, 0x00, 0x01, // sleep
};

unsigned char phonecall_headset[] = {
	0x80, 0x1C, 0x00, 0x00, 							//; 0x801C:VoiceProcessingOn, 0x0000:OFF
	0x80, 0x17, 0x00, 0x02, 0x80, 0x18, 0x00, 0x03, 	//; Microphone Configuration,0x0003:1-mic External (MD)
	0x80, 0x26, 0x00, 0x1A, 							//;0x8026:SelectRouting, 0x001A:(26)
	0x80, 0x1B, 0x00, 0x00, 							//;port a left in gain 0db
	0x80, 0x1B, 0x01, 0x00, 							//;port a right 0db
	0x80, 0x15, 0x04, 0x00, 							//; port c left out odb
	0x80, 0x15, 0x05, 0x00, 							//; port c Rout 0db
	0x80, 0x1B, 0x02, 0x00, 							//; Port B Lin 0db
	0x80, 0x1B, 0x03, 0x00, 							//; Port B Rin 0db
	0x80, 0x15, 0x06, 0x00, 							//; Port D Lout 0db
	0x80, 0x15, 0x07, 0x00, 							//; Port D Rout 0db
	0x80, 0x17, 0x00, 0x4B, 0x80, 0x18, 0x00, 0x00, 	//; Tx Noise Suppression Level, 0x8018:SetAlgorithmParm, 0x0006:Level 6
	0x80, 0x17, 0x00, 0x15, 0x80, 0x18, 0x00, 0x00, 	//; Side Tone Mode, 0x8018:SetAlgorithmParm, 0x0000:Off
	0x80, 0x17, 0x00, 0x03, 0x80, 0x18, 0x00, 0x00, 	//; AEC Mode, 0x8018:SetAlgorithmParm, 0x0001:AEC On (auto select mode)
	0x80, 0x17, 0x00, 0x12, 0x80, 0x18, 0x00, 0x00, 	//; Downlink Speaker Volume, 0x8018:SetAlgorithmParm, 0x0000:(0 dB)
	0x80, 0x17, 0x00, 0x34, 0x80, 0x18, 0x00, 0x00, 	//; Echo Suppression Enhancement, 0x8018:SetAlgorithmParm, 0x0000:(0 dB)
	0x80, 0x17, 0x00, 0x04, 0x80, 0x18, 0x00, 0x00, 	//; Use AGC, 0x8018:SetAlgorithmParm, 0x0000:No
	0x80, 0x17, 0x00, 0x28, 0x80, 0x18, 0x00, 0x00, 	//; Use Rx AGC, 0x8018:SetAlgorithmParm, 0x0000:No
	0x80, 0x17, 0x00, 0x09, 0x80, 0x18, 0x00, 0x00, 	//; Speaker Enhancement Mode, 0x8018:SetAlgorithmParm, 0x0000:SE Off (HPF only)
	0x80, 0x17, 0x00, 0x0E, 0x80, 0x18, 0x00, 0x00, 	//; Far End Noise Suppression, 0x8018:SetAlgorithmParm, 0x0002:On
	0x80, 0x17, 0x00, 0x4C, 0x80, 0x18, 0x00, 0x00, 	//; Rx Noise Suppression Level, 0x8018:SetAlgorithmParm, 0x0003:Level 3
	0x80, 0x17, 0x00, 0x20, 0x80, 0x18, 0x00, 0x00, 	//; Tx PostEq Mode, 0x8018:SetAlgorithmParm, 0x0000:Off
	0x80, 0x17, 0x00, 0x1F, 0x80, 0x18, 0x00, 0x00, 	//; Rx PostEq Mode, 0x8018:SetAlgorithmParm, 0x0000:Off
	0x80, 0x17, 0x00, 0x30, 0x80, 0x18, 0x00, 0x00, 	//; Tx MBC Mode, 0x8018:SetAlgorithmParm, 0x0000:Off
	0x80, 0x17, 0x00, 0x31, 0x80, 0x18, 0x00, 0x01, 	//; Rx MBC Mode, 0x8018:SetAlgorithmParm, 0x0001:On
	0x80, 0x17, 0x00, 0x1A, 0x80, 0x18, 0x00, 0x00, 	//; Use Tx ComfortNoise, 0x8018:SetAlgorithmParm, 0x0000:No
//	0x80, 0x17, 0x00, 0x4F, 0x80, 0x18, 0x00, 0x00, 	//; Use Bandwidth Expansion, 0x8018:SetAlgorithmParm, 0x0000:No
//	0x80, 0x17, 0x00, 0x50, 0x80, 0x18, 0xFF, 0xF6, 	//; Gain High Band (dB), 0x8018:SetAlgorithmParm, 0xFFF6:(-10 dB)
//	0x80, 0x17, 0x00, 0x52, 0x80, 0x18, 0x00, 0x00, 	//; Use BWE Post EQ, 0x8018:SetAlgorithmParm, 0x0000:No
};

unsigned char phonecall_speaker[] = {

	0x80, 0x1C, 0x00, 0x01, 															//; 0x801C:VoiceProcessingOn, 0x0001:On
	0x80, 0x17, 0x00, 0x02, 0x80, 0x18, 0x00, 0x02, 			//; 0x8017:SetAlgorithmParmID, 0x0002:Microphone Configuration, 0x8018:SetAlgorithmParm, 0x0002:1-mic FT
	0x80, 0x26, 0x00, 0x1B, 							  //; 0x8026:SelectRouting, 0x001B:(27)
	0x80, 0x1B, 0x00, 0xa6, 							  //;port a left in gain -90db
	0x80, 0x1B, 0x01, 0x00, 							  //;port a right 0db
	0x80, 0x15, 0x04, 0x00, 							  //; port c left out 0db
	0x80, 0x15, 0x05, 0x00, 							  //; port c Rout 0db
	0x80, 0x1B, 0x02, 0x00, 							  //; Port B Lin 0db
	0x80, 0x1B, 0x03, 0x00, 							  //; Port B Rin 0db
	0x80, 0x15, 0x06, 0x03, 							  //; Port D Lout 3db
	0x80, 0x15, 0x07, 0x03, 							  //; Port D Rout 3db
	0x80, 0x17, 0x00, 0x4B, 0x80, 0x18, 0x00, 0x03, 	  //; NS level 6
	0x80, 0x17, 0x00, 0x15, 0x80, 0x18, 0x00, 0x00, 	  //;side tone OFF
	0x80, 0x17, 0x00, 0x03, 0x80, 0x18, 0x00, 0x01, 	  //; AEC On
	0x80, 0x17, 0x00, 0x12, 0x80, 0x18, 0xFF, 0xF5, 	  //; DSV -11
	0x80, 0x17, 0x00, 0x23, 0x80, 0x18, 0x00, 0x00, 	  //;EC comfort noise off
	0x80, 0x17, 0x00, 0x34, 0x80, 0x18, 0x00, 0x10, 	  //; ese 16
	0x80, 0x17, 0x00, 0x04, 0x80, 0x18, 0x00, 0x00, 	  //; Tx AGC Off
	0x80, 0x17, 0x00, 0x28, 0x80, 0x18, 0x00, 0x00,       //; Rx AGC Off
	0x80, 0x17, 0x00, 0x09, 0x80, 0x18, 0x00, 0x00, 	  //; VEQ OFF
	0x80, 0x17, 0x00, 0x0E, 0x80, 0x18, 0x00, 0x02, 	  //;Rx NS on
	0x80, 0x17, 0x00, 0x4C, 0x80, 0x18, 0x00, 0x00, 	  //; Rx NS 3
	0x80, 0x17, 0x00, 0x20, 0x80, 0x18, 0x00, 0x00, 	  //; Tx post EQ off
	0x80, 0x17, 0x00, 0x1F, 0x80, 0x18, 0x00, 0x00, 	  //; Rx post EQ off
	0x80, 0x17, 0x00, 0x30, 0x80, 0x18, 0x00, 0x00, 	  //; Tx MBC Mode, Off
	0x80, 0x17, 0x00, 0x31, 0x80, 0x18, 0x00, 0x00, 	  //; Rx MBC Mode, On
	0x80, 0x17, 0x00, 0x1A, 0x80, 0x18, 0x00, 0x00, 	  //; Tx comport noise off
//	0x80, 0x17, 0x00, 0x4F, 0x80, 0x18, 0x00, 0x00, 	  //; Use Bandwidth Expansion, 0x8018:SetAlgorithmParm, 0x0000:No
//	0x80, 0x17, 0x00, 0x50, 0x80, 0x18, 0xFF, 0xF6, 	  //; Gain High Band (dB), 0x8018:SetAlgorithmParm, 0xFFF6:(-10 dB)
//	0x80, 0x17, 0x00, 0x52, 0x80, 0x18, 0x00, 0x00, 	  //; Use BWE Post EQ, 0x8018:SetAlgorithmParm, 0x0000:no

};

unsigned char phonecall_bt[] = {
	0x80,0x17,0x00,0x02, /* SetAlgorithmParmID, 0x0002:Microphone Configuration */
	0x80,0x18,0x00,0x03, /* SetAlgorithmParm, 0x0003:1-mic External (MD) */
	0x80,0x26,0x00,0x06, /* SelectRouting, 0x0006:Snk,Snk,Fei,Pri - Zro,Csp,Feo (PCM0->PCM1+ADCs) */
	0x80,0x1C,0x00,0x00, /* VoiceProcessingOn, 0x0000:No */
	0x80,0x1B,0x00,0x00, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x00:(0 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char phonecall_tty[] = {
	0x80,0x26,0x00,0x15, /* SelectRouting, 0x0015:Snk,Pri,Snk,Snk - Csp,Zro,Zro (none) */
	0x80,0x1C,0x00,0x00, /* VoiceProcessingOn, 0x0000:No */
	0x80,0x1B,0x00,0x00, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x00:(0 dB) */
	0x80,0x15,0x00,0xFB, /* SetDigitalOutputGain, 0x00:Tx, 0xFB:(-5 dB) */
};

unsigned char INT_MIC_recording_receiver[] = {
	0x80,0x26,0x00,0x07, /* SelectRouting, 0x0007:Pri,Snk,Snk,Snk - Csp,Zro,Zro (none) */
	0x80,0x1C,0x00,0x00, /* VoiceProcessingOn, 0x0000:No */
	0x80,0x1B,0x00,0x12, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x12:(18 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char EXT_MIC_recording[] = {
	0x80,0x26,0x00,0x15, /* SelectRouting, 0x0015:Snk,Pri,Snk,Snk - Csp,Zro,Zro (none) */
	0x80,0x1C,0x00,0x00, /* VoiceProcessingOn, 0x0000:No */
	0x80,0x1B,0x00,0x12, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x12:(18 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char INT_MIC_recording_speaker[] = {
	0x80,0x17,0x00,0x02, /* SetAlgorithmParmID, 0x0002:Microphone Configuration */
	0x80,0x18,0x00,0x02, /* SetAlgorithmParm, 0x0002:1-mic Desktop/Vehicle (DV) */
	0x80,0x1C,0x00,0x00, /* VoiceProcessingOn, 0x0000:No */
	0x80,0x1B,0x00,0x12, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x12:(18 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char BACK_MIC_recording[] = {
	0x80,0x17,0x00,0x02, /* SetAlgorithmParmID, 0x0002:Microphone Configuration */
	0x80,0x18,0x00,0x02, /* SetAlgorithmParm, 0x0002:1-mic Desktop/Vehicle (DV) */
	0x80,0x26,0x00,0x15, /* SelectRouting, 0x0015:Snk,Pri,Snk,Snk - Csp,Zro,Zro (none) */
	0x80,0x1C,0x00,0x01, /* VoiceProcessingOn, 0x0001:Yes */
	0x80,0x17,0x00,0x04, /* SetAlgorithmParmID, 0x0004:Use AGC */
	0x80,0x18,0x00,0x01, /* SetAlgorithmParm, 0x0001:Yes */
	0x80,0x17,0x00,0x1A, /* SetAlgorithmParmID, 0x001A:Use ComfortNoise */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:No */
	0x80,0x17,0x00,0x00, /* SetAlgorithmParmID, 0x0000:Suppression Strength */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:No Suppression */
	0x80,0x1B,0x00,0x12, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x12:(18 dB) */
	0x80,0x15,0x00,0x06, /* SetDigitalOutputGain, 0x00:Tx, 0x06:(6 dB) */
};

unsigned char vr_no_ns_receiver[] = {
	0x80,0x17,0x00,0x02, /* SetAlgorithmParmID, 0x0002:Microphone Configuration */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:2-mic Close Talk (CT) */
	0x80,0x1C,0x00,0x00, /* VoiceProcessingOn, 0x0000:No */
	0x80,0x1B,0x00,0x0C, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x0C:(12 dB) */
	0x80,0x1B,0x01,0x0C, /* SetDigitalInputGain, 0x01:Secondary Mic (Tx), 0x09:(12 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char vr_no_ns_headset[] = {
	0x80,0x17,0x00,0x02, /* SetAlgorithmParmID, 0x0002:Microphone Configuration */
	0x80,0x18,0x00,0x03, /* SetAlgorithmParm, 0x0003:1M-DG (1-mic digital input) */
	0x80,0x26,0x00,0x15, /* SelectRouting, 0x0015:Snk,Pri,Snk,Snk - Csp,Zro,Zro (none) */
	0x80,0x1C,0x00,0x00, /* VoiceProcessingOn, 0x0000:No */
	0x80,0x1B,0x00,0x12, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x12:(18 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char vr_no_ns_speaker[] = {
	0x80,0x17,0x00,0x02, /* SetAlgorithmParmID, 0x0002:Microphone Configuration */
	0x80,0x18,0x00,0x02, /* SetAlgorithmParm, 0x0002:1-mic Desktop/Vehicle (DV) */
	0x80,0x1C,0x00,0x00, /* VoiceProcessingOn, 0x0000:No */
	0x80,0x1B,0x00,0x0C, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x0C:(12 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char vr_no_ns_bt[] = {
	0x80,0x26,0x00,0x06, /* SelectRouting, 0x0006:Snk,Snk,Fei,Pri - Zro,Csp,Feo (PCM0->PCM1+ADCs) */
	0x80,0x1C,0x00,0x00, /* VoiceProcessingOn, 0x0000:No */
	0x80,0x1B,0x00,0x00, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x00:(0 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char vr_ns_receiver[] = {
	0x80,0x17,0x00,0x02, /* SetAlgorithmParmID, 0x0002:Microphone Configuration */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:2-mic Close Talk (CT) */
	0x80,0x1C,0x00,0x01, /* VoiceProcessingOn, 0x0001:Yes */
	0x80,0x17,0x00,0x1A, /* SetAlgorithmParmID, 0x001A:Use ComfortNoise */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:No */
	0x80,0x17,0x00,0x04, /* SetAlgorithmParmID, 0x0004:Use AGC */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:No */
	0x80,0x17,0x00,0x00, /* SetAlgorithmParmID, 0x0000:Suppression Strength */
	0x80,0x18,0x00,0x04, /* SetAlgorithmParm, 0x0004:20dB Max Suppression */
	0x80,0x1B,0x00,0x0C, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x0C:(12 dB) */
	0x80,0x1B,0x01,0x0C, /* SetDigitalInputGain, 0x01:Secondary Mic (Tx), 0x0C:(12 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char vr_ns_headset[] = {
	0x80,0x17,0x00,0x02, /* SetAlgorithmParmID, 0x0002:Microphone Configuration */
	0x80,0x18,0x00,0x03, /* SetAlgorithmParm, 0x0003:1-mic External (MD) */
	0x80,0x26,0x00,0x15, /* SelectRouting, 0x0015:Snk,Pri,Snk,Snk - Csp,Zro,Zro (none) */
	0x80,0x1C,0x00,0x01, /* VoiceProcessingOn, 0x0001:Yes */
	0x80,0x17,0x00,0x00, /* SetAlgorithmParmID, 0x0000:Suppression Strength */
	0x80,0x18,0x00,0x02, /* SetAlgorithmParm, 0x0002:20dB Max Suppression */
	0x80,0x17,0x00,0x1A, /* SetAlgorithmParmID, 0x001A:Use ComfortNoise */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:No */
	0x80,0x17,0x00,0x04, /* SetAlgorithmParmID, 0x0004:Use AGC */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:No */
	0x80,0x1B,0x00,0x12, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x12:(18 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char vr_ns_speaker[] = {
	0x80,0x17,0x00,0x02, /* SetAlgorithmParmID, 0x0002:Microphone Configuration */
	0x80,0x18,0x00,0x02, /* SetAlgorithmParm, 0x0002:1-mic Desktop/Vehicle (DV) */
	0x80,0x1C,0x00,0x01, /* VoiceProcessingOn, 0x0001:Yes */
	0x80,0x17,0x00,0x00, /* SetAlgorithmParmID, 0x0000:Suppression Strength */
	0x80,0x18,0x00,0x04, /* SetAlgorithmParm, 0x0004:20dB Max Suppression */
	0x80,0x17,0x00,0x04, /* SetAlgorithmParmID, 0x0004:Use AGC */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:No */
	0x80,0x17,0x00,0x1A, /* SetAlgorithmParmID, 0x001A:Use ComfortNoise */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:No */
	0x80,0x1B,0x00,0x0C, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x0C:(12 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char vr_ns_bt[] = {
	0x80,0x26,0x00,0x06, /* SelectRouting, 0x0006:Snk,Snk,Fei,Pri - Zro,Csp,Feo (PCM0->PCM1+ADCs) */
	0x80,0x1C,0x00,0x01, /* VoiceProcessingOn, 0x0001:Yes */
	0x80,0x17,0x00,0x00, /* SetAlgorithmParmID, 0x0000:Suppression Strength */
	0x80,0x18,0x00,0x02, /* SetAlgorithmParm, 0x0002:20dB Max Suppression */
	0x80,0x17,0x00,0x04, /* SetAlgorithmParmID, 0x0004:Use AGC */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:No */
	0x80,0x17,0x00,0x1A, /* SetAlgorithmParmID, 0x001A:Use ComfortNoise */
	0x80,0x18,0x00,0x00, /* SetAlgorithmParm, 0x0000:No */
	0x80,0x1B,0x00,0x00, /* SetDigitalInputGain, 0x00:Primay Mic (Tx), 0x00:(0 dB) */
	0x80,0x15,0x00,0x00, /* SetDigitalOutputGain, 0x00:Tx, 0x00:(0 dB) */
};

unsigned char suspend_mode[] = {
	0x80,0x10,0x00,0x01
};
