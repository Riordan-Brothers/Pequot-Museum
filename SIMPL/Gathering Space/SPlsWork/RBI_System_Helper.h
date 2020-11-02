namespace RBI_System_Helper;
        // class declarations
         class SystemSettings;
         class SystemSettingArgs;
         class SystemHelper;
     class SystemSettings 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION GetTimezoneInfo ();
        FUNCTION SetGmtOffset ( SIGNED_INTEGER offset );
        FUNCTION SetLatitudeDeg ( INTEGER degree );
        FUNCTION SetLatitudeMin ( INTEGER minute );
        FUNCTION SetLongitudeDeg ( INTEGER degree );
        FUNCTION SetLongitudeMin ( INTEGER minute );
        FUNCTION SetTimezone ( INTEGER timezone );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER PasswordProtected;
        INTEGER Lights;
        INTEGER FloorPlan;
        INTEGER Shades;
        INTEGER Photocells;
        INTEGER Scheduler;
        INTEGER DMX;
        INTEGER Outlets;
        INTEGER Help;
        INTEGER Page01;
        INTEGER Page02;
        INTEGER Page03;
        INTEGER Page04;
        INTEGER BlinkWarning;
        INTEGER Setting01;
        INTEGER Setting02;
        INTEGER Setting03;
        INTEGER Setting04;
        INTEGER Setting05;
        INTEGER NumRooms;
        INTEGER NumPCs;
        INTEGER LatitudeDegree;
        INTEGER LatitudeMinute;
        INTEGER LongitudeDegree;
        INTEGER LongitudeMinute;
        INTEGER Timezone;
        INTEGER LatNorth;
        INTEGER LongEast;
        SIGNED_INTEGER GmtOffset;
        STRING TimezoneInfo[];
    };

     class SystemSettingArgs 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        SystemSettings Settings;

        // class properties
    };

     class SystemHelper 
    {
        // class delegates

        // class events
        EventHandler SettingsUpdated ( SystemHelper sender, SystemSettingArgs e );
        EventHandler FileSaved ( SystemHelper sender, EventArgs e );

        // class functions
        SIGNED_INTEGER_FUNCTION initialize ( STRING path , STRING fn );
        SIGNED_INTEGER_FUNCTION GetSettings ();
        FUNCTION MakeBlankFile ();
        FUNCTION UserSaveFile ();
        FUNCTION UpdateLatitudeDeg ( INTEGER degree );
        FUNCTION UpdateLatitudeMin ( INTEGER minute );
        FUNCTION UpdateLongitudeDeg ( INTEGER degree );
        FUNCTION UpdateLongitudeMin ( INTEGER minute );
        FUNCTION UpdateTimezone ( INTEGER timezone );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        SystemSettings SystemSetup;

        // class properties
    };

