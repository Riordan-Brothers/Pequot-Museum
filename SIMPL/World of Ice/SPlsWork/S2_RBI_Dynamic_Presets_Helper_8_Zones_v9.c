#include "TypeDefs.h"
#include "Globals.h"
#include "FnctList.h"
#include "Library.h"
#include "SimplSig.h"
#include "S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.h"

FUNCTION_MAIN( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 );
EVENT_HANDLER( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 );
DEFINE_ENTRYPOINT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 );


static struct StringHdr_s* S2_RBI_Dynamic_Presets_Helper_8_Zones_v9__GET_FULL_PATH ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringHdr_s* __PRESET_NAME ) 
    { 
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FULL_PATH, 255 );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FULL_PATH );
    
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FULL_PATH );
    INITIALIZE_LOCAL_STRING_STRUCT( __FULL_PATH, 255 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 52 );
    if ( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__THREE_SERIES) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 54 );
        FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,12 , "%s\\%s\\%s.txt"  , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_PATH  )  , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __ROOMID  )  , LOCAL_STRING_STRUCT( __PRESET_NAME  )   )  ; 
        FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , LOCAL_STRING_STRUCT( __FULL_PATH  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 59 );
        FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,12 , "%s\\%s-%s.txt"  , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_PATH  )  , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __ROOMID  )  , LOCAL_STRING_STRUCT( __PRESET_NAME  )   )  ; 
        FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , LOCAL_STRING_STRUCT( __FULL_PATH  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 62 );
    FormatString( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ),  __FN_DSTRET_STR__, 2, "%s", ( LOCAL_STRING_STRUCT( __FULL_PATH  )  ) );
    goto S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_Exit__GET_FULL_PATH ; 
    
    S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_Exit__GET_FULL_PATH:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __FULL_PATH );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    /* End Free local function variables */
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 65 );
    return __FN_DSTRET_STR__; 
    }
    
static void S2_RBI_Dynamic_Presets_Helper_8_Zones_v9__INIT_PRESET ( struct StringHdr_s* __PRESET_NAME ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __I; 
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FULL_PATH, 255 );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FULL_PATH );
    
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    short __FN_FOREND_VAL__1; 
    short __FN_FORINIT_VAL__1; 
    short __FN_FOREND_VAL__2; 
    short __FN_FORINIT_VAL__2; 
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "," ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__1, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__1 );
    
    CheckStack( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FULL_PATH );
    INITIALIZE_LOCAL_STRING_STRUCT( __FULL_PATH, 255 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "," );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 70 );
    FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , S2_RBI_Dynamic_Presets_Helper_8_Zones_v9__GET_FULL_PATH (  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __PRESET_NAME  )  )  )  ; 
    FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , LOCAL_STRING_STRUCT( __FULL_PATH  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 72 );
    StartFileOperations ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 74 );
    if ( (Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__THREE_SERIES == 1)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 76 );
        Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEFOUND = FindFirstShared( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , LOCAL_STRING_STRUCT( __FULL_PATH  )  , &Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEINFO ); 
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 80 );
        Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEFOUND = FindFirst( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , LOCAL_STRING_STRUCT( __FULL_PATH  )  , &Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEINFO ); 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 83 );
    if ( (Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEFOUND < 0)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 85 );
        ExtendedErrorUserSpecified( eERROR_LEVEL_NOTICE, INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , 32, "Creating New Presets File: %s \r\n", LOCAL_STRING_STRUCT( __FULL_PATH  )  ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 87 );
        if ( (Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__THREE_SERIES == 1)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 89 );
            Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE = FileOpenShared( LOCAL_STRING_STRUCT( __FULL_PATH  )  , ((256 | 16384) | 1) ); 
            } 
        
        else 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 94 );
            Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE = FileOpen( LOCAL_STRING_STRUCT( __FULL_PATH  )  , ((256 | 16384) | 1) ); 
            } 
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 97 );
        FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
        FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SBUF  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 99 );
        __FN_FOREND_VAL__1 = 8; 
        __FN_FORINIT_VAL__1 = 1; 
        for( __I = 1; (__FN_FORINIT_VAL__1 > 0)  ? ((short)__I  <= __FN_FOREND_VAL__1 ) : ((short)__I  >= __FN_FOREND_VAL__1) ; __I  += __FN_FORINIT_VAL__1) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 101 );
            SetOutputArrayElement ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), &Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__LEVEL_OUT ,__I, GetIntegerParameter( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_DEFAULT_LEVEL_INTEGER_PARAMETER ) ) ; 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 102 );
            FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,15 , "load%02u = %u,\r"  , (unsigned short )( __I ), (unsigned short )( GetIntegerParameter( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_DEFAULT_LEVEL_INTEGER_PARAMETER )  ) )  ; 
            FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_LINE  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 103 );
            FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SBUF  )  ,  GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_LINE  )   )  ; 
            FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SBUF  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 99 );
            } 
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 106 );
        FileWrite ( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE, GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SBUF  )  , Len( GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SBUF  )  )) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 107 );
        FileClose ( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE) ; 
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 112 );
        if ( (Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__THREE_SERIES == 1)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 114 );
            Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE = FileOpenShared( LOCAL_STRING_STRUCT( __FULL_PATH  )  , (16384 | 0) ); 
            } 
        
        else 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 119 );
            Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE = FileOpen( LOCAL_STRING_STRUCT( __FULL_PATH  )  , (16384 | 0) ); 
            } 
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 122 );
        if ( (Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE < 0)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 124 );
            ExtendedErrorUserSpecified( eERROR_LEVEL_ERROR, INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , 35, "Error Opening: %s, Error Code: %u\r\n", LOCAL_STRING_STRUCT( __FULL_PATH  )  , (unsigned short )( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE )) ; 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 125 );
            FileClose ( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE) ; 
            } 
        
        else 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 131 );
            Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__IERRORCODE = FileRead( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_CONTENTS  )  , 2000 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 133 );
            if ( (Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__IERRORCODE < 0)) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 135 );
                ExtendedErrorUserSpecified( eERROR_LEVEL_ERROR, INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , 39, "Error Creating String, Error Code: %u\r\n", (unsigned short )( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__IERRORCODE )) ; 
                } 
            
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 138 );
            __FN_FOREND_VAL__2 = 8; 
            __FN_FORINIT_VAL__2 = 1; 
            for( __I = 1; (__FN_FORINIT_VAL__2 > 0)  ? ((short)__I  <= __FN_FOREND_VAL__2 ) : ((short)__I  >= __FN_FOREND_VAL__2) ; __I  += __FN_FORINIT_VAL__2) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 140 );
                FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_CONTENTS  )    , 1  )  )  ; 
                FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_LINE  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 141 );
                FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_LINE  )    , 1  )  )  ; 
                FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __STR  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 142 );
                SetOutputArrayElement ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), &Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__LEVEL_OUT ,__I, Atoi( GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_LINE  )  )) ; 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 138 );
                } 
            
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 146 );
            FileClose ( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE) ; 
            } 
        
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 152 );
    EndFileOperations ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ) ; 
    
    S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_Exit__INIT_PRESET:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __FULL_PATH );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    /* End Free local function variables */
    
    }
    
static void S2_RBI_Dynamic_Presets_Helper_8_Zones_v9__INVOKE_PRESETS_INIT ( ) 
    { 
    /* Begin local function variable declarations */
    
    CheckStack( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 157 );
    S2_RBI_Dynamic_Presets_Helper_8_Zones_v9__INIT_PRESET (  (struct StringHdr_s* )  GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __PRESET_NAME  )  ) ; 
    
    S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_Exit__INVOKE_PRESETS_INIT:
/* Begin Free local function variables */
    /* End Free local function variables */
    
    }
    
DEFINE_INDEPENDENT_EVENTHANDLER( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, 00000 /*preset_save*/ )

    {
    /* Begin local function variable declarations */
    
    unsigned short  __I; 
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FULL_PATH, 255 );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FULL_PATH );
    
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    short __FN_FOREND_VAL__1; 
    short __FN_FORINIT_VAL__1; 
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__, 2000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__1, 2000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__1 );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FULL_PATH );
    INITIALIZE_LOCAL_STRING_STRUCT( __FULL_PATH, 255 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 2000 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 2000 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 164 );
    FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , S2_RBI_Dynamic_Presets_Helper_8_Zones_v9__GET_FULL_PATH (  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  (struct StringHdr_s* )  GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __PRESET_NAME  )  )  )  ; 
    FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , LOCAL_STRING_STRUCT( __FULL_PATH  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 166 );
    StartFileOperations ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 168 );
    if ( (Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__THREE_SERIES == 1)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 170 );
        Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE = FileOpenShared( LOCAL_STRING_STRUCT( __FULL_PATH  )  , (((16384 | 256) | 1) | 512) ); 
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 175 );
        Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE = FileOpen( LOCAL_STRING_STRUCT( __FULL_PATH  )  , (((16384 | 256) | 1) | 512) ); 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 178 );
    if ( (Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE < 0)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 180 );
        ExtendedErrorUserSpecified( eERROR_LEVEL_ERROR, INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , 36, "Error Opening: %s, Error Code: %u \r\n", LOCAL_STRING_STRUCT( __FULL_PATH  )  , (unsigned short )( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE )) ; 
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 185 );
        FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
        FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SBUF  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 187 );
        __FN_FOREND_VAL__1 = 8; 
        __FN_FORINIT_VAL__1 = 1; 
        for( __I = 1; (__FN_FORINIT_VAL__1 > 0)  ? ((short)__I  <= __FN_FOREND_VAL__1 ) : ((short)__I  >= __FN_FOREND_VAL__1) ; __I  += __FN_FORINIT_VAL__1) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 189 );
            SetOutputArrayElement ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), &Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__LEVEL_OUT ,__I, GetInOutArrayElement( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), &Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__LEVEL_IN , __I  )) ; 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 190 );
            FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,15 , "load%02u = %u,\r"  , (unsigned short )( __I ), (unsigned short )( GetInOutArrayElement( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), &Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__LEVEL_IN , __I  ) ) )  ; 
            FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_LINE  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 191 );
            FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SBUF  )  ,  GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_LINE  )   )  ; 
            FormatString ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SBUF  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 187 );
            } 
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 194 );
        Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__IERRORCODE = FileWrite( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE , GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SBUF  )  , Len( GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SBUF  )  ) ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 196 );
        if ( (Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__IERRORCODE < 0)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 198 );
            ExtendedErrorUserSpecified( eERROR_LEVEL_ERROR, INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , 38, "Error Saving To: %s, Error Code: %u \r\n", LOCAL_STRING_STRUCT( __FULL_PATH  )  , (unsigned short )( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE )) ; 
            } 
        
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 202 );
    if ( (Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__IERRORCODE >= 0)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 204 );
        Pulse ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) , 25, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_PRESET_SAVED_FB_DIG_OUTPUT ) ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 207 );
    FileClose ( Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__NFILEHANDLE) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 208 );
    EndFileOperations ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ) ; 
    
    S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_Exit__Event_0:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __FULL_PATH );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, 00001 /*preset_init*/ )

    {
    /* Begin local function variable declarations */
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 213 );
    S2_RBI_Dynamic_Presets_Helper_8_Zones_v9__INVOKE_PRESETS_INIT ( ) ; 
    
    S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_Exit__Event_1:
    /* Begin Free local function variables */
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}


    
    

/********************************************************************************
  Constructor
********************************************************************************/

/********************************************************************************
  Destructor
********************************************************************************/

/********************************************************************************
  static void ProcessDigitalEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessDigitalEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        case __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_PRESET_INIT_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, 00001 /*preset_init*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ); 
                
            }
            break;
            
        case __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_PRESET_SAVE_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, 00000 /*preset_save*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ); 
                
            }
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessAnalogEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessAnalogEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessStringEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessStringEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketConnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketConnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketStatusEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketStatusEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ); 
            break ;
        
    }
}

/********************************************************************************
  EVENT_HANDLER( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 )
********************************************************************************/
EVENT_HANDLER( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 )
    {
    SAVE_GLOBAL_POINTERS ;
    CHECK_INPUT_ARRAY ( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __LEVEL_IN ) ;
    switch ( Signal->Type )
        {
        case e_SIGNAL_TYPE_DIGITAL :
            ProcessDigitalEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_ANALOG :
            ProcessAnalogEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STRING :
            ProcessStringEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_CONNECT :
            ProcessSocketConnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_DISCONNECT :
            ProcessSocketDisconnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_RECEIVE :
            ProcessSocketReceiveEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STATUS :
            ProcessSocketStatusEvent( Signal );
            break ;
        }
        
    RESTORE_GLOBAL_POINTERS ;
    
    }
    
/********************************************************************************
  FUNCTION_MAIN( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 )
********************************************************************************/
FUNCTION_MAIN( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 )
{
    /* Begin local function variable declarations */
    
    SAVE_GLOBAL_POINTERS ;
    SET_INSTANCE_POINTER ( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 );
    
    
    /* End local function variable declarations */
    
    INITIALIZE_IO_ARRAY ( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __LEVEL_IN, IO_TYPE_ANALOG_INPUT, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_LEVEL_IN_ANALOG_INPUT, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_LEVEL_IN_ARRAY_LENGTH );
    INITIALIZE_IO_ARRAY ( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __LEVEL_OUT, IO_TYPE_ANALOG_OUTPUT, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_LEVEL_OUT_ANALOG_OUTPUT, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_LEVEL_OUT_ARRAY_LENGTH );
    
    
    InitStringParamStruct ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __ROOMID ) , e_INPUT_TYPE_STRING_PARAMETER, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_ROOMID_STRING_PARAMETER, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_ROOMID_PARAM_MAX_LEN, NAME_AS_STRING( __ROOMID ) );
    InitStringParamStruct ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_PATH ) , e_INPUT_TYPE_STRING_PARAMETER, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_FILE_PATH_STRING_PARAMETER, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_FILE_PATH_PARAM_MAX_LEN, NAME_AS_STRING( __FILE_PATH ) );
    InitStringParamStruct ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), GLOBAL_STRING_STRUCT( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __PRESET_NAME ) , e_INPUT_TYPE_STRING_PARAMETER, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_PRESET_NAME_STRING_PARAMETER, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_PRESET_NAME_PARAM_MAX_LEN, NAME_AS_STRING( __PRESET_NAME ) );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __SBUF, e_INPUT_TYPE_NONE, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_SBUF_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_CONTENTS, e_INPUT_TYPE_NONE, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_FILE_CONTENTS_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __FILE_LINE, e_INPUT_TYPE_NONE, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_FILE_LINE_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, __STR, e_INPUT_TYPE_NONE, __S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_STR_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9, sGenericOutStr, e_INPUT_TYPE_NONE, GENERIC_STRING_OUTPUT_LEN );
    
    
    
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 218 );
    WaitForInitializationComplete ( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 220 );
    if ( (GetSeries( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ) ) >= 3)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 221 );
        Globals->S2_RBI_Dynamic_Presets_Helper_8_Zones_v9.__THREE_SERIES = 1; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_RBI_Dynamic_Presets_Helper_8_Zones_v9 ), 224 );
    S2_RBI_Dynamic_Presets_Helper_8_Zones_v9__INVOKE_PRESETS_INIT ( ) ; 
    
    S2_RBI_Dynamic_Presets_Helper_8_Zones_v9_Exit__MAIN:/* Begin Free local function variables */
    /* End Free local function variables */
    
    RESTORE_GLOBAL_POINTERS ;
    return 0 ;
    }
