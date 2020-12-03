#ifndef __S2_RBI_DYNAMIC_PRESETS_HELPER_170_ZONES_V8_H__
#define __S2_RBI_DYNAMIC_PRESETS_HELPER_170_ZONES_V8_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_PRESET_INIT_DIG_INPUT 0
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_PRESET_SAVE_DIG_INPUT 1


/*
* ANALOG_INPUT
*/



#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_LEVEL_IN_ANALOG_INPUT 0
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_LEVEL_IN_ARRAY_LENGTH 170

/*
* DIGITAL_OUTPUT
*/
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_PRESET_SAVED_FB_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/


#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_LEVEL_OUT_ANALOG_OUTPUT 0
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_LEVEL_OUT_ARRAY_LENGTH 170

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_DEFAULT_LEVEL_INTEGER_PARAMETER 13
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_ROOMID_STRING_PARAMETER 10
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_FILE_PATH_STRING_PARAMETER 11
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_PRESET_NAME_STRING_PARAMETER 12
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_ROOMID_PARAM_MAX_LEN 50
CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __ROOMID, __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_ROOMID_PARAM_MAX_LEN );
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_FILE_PATH_PARAM_MAX_LEN 50
CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __FILE_PATH, __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_FILE_PATH_PARAM_MAX_LEN );
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_PRESET_NAME_PARAM_MAX_LEN 50
CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __PRESET_NAME, __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_PRESET_NAME_PARAM_MAX_LEN );


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_SBUF_STRING_MAX_LEN 9000
CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __SBUF, __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_SBUF_STRING_MAX_LEN );
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_FILE_CONTENTS_STRING_MAX_LEN 9000
CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __FILE_CONTENTS, __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_FILE_CONTENTS_STRING_MAX_LEN );
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_FILE_LINE_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __FILE_LINE, __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_FILE_LINE_STRING_MAX_LEN );
#define __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_STR_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __STR, __S2_RBI_Dynamic_Presets_Helper_170_Zones_v8_STR_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __LEVEL_IN );
   DECLARE_IO_ARRAY( __LEVEL_OUT );
   unsigned short __THREE_SERIES;
   short __NFILEHANDLE;
   short __NFILEFOUND;
   short __IERRORCODE;
   DECLARE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __SBUF );
   DECLARE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __FILE_CONTENTS );
   DECLARE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __FILE_LINE );
   DECLARE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __STR );
   struct FileInfo_s __NFILEINFO;
   DECLARE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __ROOMID );
   DECLARE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __FILE_PATH );
   DECLARE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8, __PRESET_NAME );
};

START_NVRAM_VAR_STRUCT( S2_RBI_Dynamic_Presets_Helper_170_Zones_v8 )
{
};



#endif //__S2_RBI_DYNAMIC_PRESETS_HELPER_170_ZONES_V8_H__

