using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Linq;
using Crestron;
using Crestron.Logos.SplusLibrary;
using Crestron.Logos.SplusObjects;
using Crestron.SimplSharp;
using Zone_Control_Helper;

namespace UserModule_RBI_PC_HELPER_SPLUS_V5B
{
    public class UserModuleClass_RBI_PC_HELPER_SPLUS_V5B : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        Crestron.Logos.SplusObjects.DigitalInput HARVEST_ENABLE;
        Crestron.Logos.SplusObjects.DigitalInput HARVEST_DISABLE;
        Crestron.Logos.SplusObjects.DigitalOutput DALI_FB;
        Crestron.Logos.SplusObjects.DigitalOutput HARVEST_ENABLE_FB;
        Crestron.Logos.SplusObjects.DigitalOutput RAISE_FROM_OFF_FB;
        Crestron.Logos.SplusObjects.StringOutput PC_NAME;
        StringParameter ZONEID;
        Zone_Control_Helper.ZoneHelper ZHELP;
        public void HANDLEDATACHANGE ( object __sender__ /*Zone_Control_Helper.ZoneHelper Z */, Zone_Control_Helper.ZoneEventArgs ARGS ) 
            { 
            ZoneHelper  Z  = (ZoneHelper )__sender__;
            try
            {
                SplusExecutionContext __context__ = SplusSimplSharpDelegateThreadStartCode();
                
                __context__.SourceCodeLine = 41;
                HARVEST_ENABLE_FB  .Value = (ushort) ( ARGS.zoneSettings.harvestedFB ) ; 
                __context__.SourceCodeLine = 42;
                PC_NAME  .UpdateValue ( ARGS . zoneSettings . pcName  ) ; 
                __context__.SourceCodeLine = 43;
                RAISE_FROM_OFF_FB  .Value = (ushort) ( ARGS.zoneSettings.raiseFromOff ) ; 
                __context__.SourceCodeLine = 44;
                DALI_FB  .Value = (ushort) ( ARGS.zoneSettings.daliFB ) ; 
                
                
            }
            finally { ObjectFinallyHandler(); }
            }
            
        object HARVEST_ENABLE_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 51;
                ZHELP . PhotocellEnableDisable ( (ushort)( 1 ), ZONEID  .ToString()) ; 
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object HARVEST_DISABLE_OnPush_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 56;
            ZHELP . PhotocellEnableDisable ( (ushort)( 0 ), ZONEID  .ToString()) ; 
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SignalEventArg__ ); }
        return this;
        
    }
    
public override object FunctionMain (  object __obj__ ) 
    { 
    try
    {
        SplusExecutionContext __context__ = SplusFunctionMainStartCode();
        
        __context__.SourceCodeLine = 68;
        WaitForInitializationComplete ( ) ; 
        __context__.SourceCodeLine = 69;
        ZHELP . Initialize ( ZONEID  .ToString()) ; 
        __context__.SourceCodeLine = 70;
        // RegisterEvent( ZHELP , ONDATACHANGE , HANDLEDATACHANGE ) 
        try { g_criticalSection.Enter(); ZHELP .OnDataChange  += HANDLEDATACHANGE; } finally { g_criticalSection.Leave(); }
        ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler(); }
    return __obj__;
    }
    

public override void LogosSplusInitialize()
{
    _SplusNVRAM = new SplusNVRAM( this );
    
    HARVEST_ENABLE = new Crestron.Logos.SplusObjects.DigitalInput( HARVEST_ENABLE__DigitalInput__, this );
    m_DigitalInputList.Add( HARVEST_ENABLE__DigitalInput__, HARVEST_ENABLE );
    
    HARVEST_DISABLE = new Crestron.Logos.SplusObjects.DigitalInput( HARVEST_DISABLE__DigitalInput__, this );
    m_DigitalInputList.Add( HARVEST_DISABLE__DigitalInput__, HARVEST_DISABLE );
    
    DALI_FB = new Crestron.Logos.SplusObjects.DigitalOutput( DALI_FB__DigitalOutput__, this );
    m_DigitalOutputList.Add( DALI_FB__DigitalOutput__, DALI_FB );
    
    HARVEST_ENABLE_FB = new Crestron.Logos.SplusObjects.DigitalOutput( HARVEST_ENABLE_FB__DigitalOutput__, this );
    m_DigitalOutputList.Add( HARVEST_ENABLE_FB__DigitalOutput__, HARVEST_ENABLE_FB );
    
    RAISE_FROM_OFF_FB = new Crestron.Logos.SplusObjects.DigitalOutput( RAISE_FROM_OFF_FB__DigitalOutput__, this );
    m_DigitalOutputList.Add( RAISE_FROM_OFF_FB__DigitalOutput__, RAISE_FROM_OFF_FB );
    
    PC_NAME = new Crestron.Logos.SplusObjects.StringOutput( PC_NAME__AnalogSerialOutput__, this );
    m_StringOutputList.Add( PC_NAME__AnalogSerialOutput__, PC_NAME );
    
    ZONEID = new StringParameter( ZONEID__Parameter__, this );
    m_ParameterList.Add( ZONEID__Parameter__, ZONEID );
    
    
    HARVEST_ENABLE.OnDigitalPush.Add( new InputChangeHandlerWrapper( HARVEST_ENABLE_OnPush_0, false ) );
    HARVEST_DISABLE.OnDigitalPush.Add( new InputChangeHandlerWrapper( HARVEST_DISABLE_OnPush_1, false ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    ZHELP  = new Zone_Control_Helper.ZoneHelper();
    
    
}

public UserModuleClass_RBI_PC_HELPER_SPLUS_V5B ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint HARVEST_ENABLE__DigitalInput__ = 0;
const uint HARVEST_DISABLE__DigitalInput__ = 1;
const uint DALI_FB__DigitalOutput__ = 0;
const uint HARVEST_ENABLE_FB__DigitalOutput__ = 1;
const uint RAISE_FROM_OFF_FB__DigitalOutput__ = 2;
const uint PC_NAME__AnalogSerialOutput__ = 0;
const uint ZONEID__Parameter__ = 10;

[SplusStructAttribute(-1, true, false)]
public class SplusNVRAM : SplusStructureBase
{

    public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
    
    
}

SplusNVRAM _SplusNVRAM = null;

public class __CEvent__ : CEvent
{
    public __CEvent__() {}
    public void Close() { base.Close(); }
    public int Reset() { return base.Reset() ? 1 : 0; }
    public int Set() { return base.Set() ? 1 : 0; }
    public int Wait( int timeOutInMs ) { return base.Wait( timeOutInMs ) ? 1 : 0; }
}
public class __CMutex__ : CMutex
{
    public __CMutex__() {}
    public void Close() { base.Close(); }
    public void ReleaseMutex() { base.ReleaseMutex(); }
    public int WaitForMutex() { return base.WaitForMutex() ? 1 : 0; }
}
 public int IsNull( object obj ){ return (obj == null) ? 1 : 0; }
}


}
