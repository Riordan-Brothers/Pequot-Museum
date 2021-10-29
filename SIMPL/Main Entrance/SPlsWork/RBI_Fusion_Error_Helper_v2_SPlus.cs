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

namespace UserModule_RBI_FUSION_ERROR_HELPER_V2_SPLUS
{
    public class UserModuleClass_RBI_FUSION_ERROR_HELPER_V2_SPLUS : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        InOutArray<Crestron.Logos.SplusObjects.DigitalInput> ERRORFB;
        Crestron.Logos.SplusObjects.StringOutput ERRORMESSAGE__DOLLAR__;
        InOutArray<StringParameter> ERRORIN__DOLLAR__;
        ushort I = 0;
        object ERRORFB_OnChange_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                CrestronString ERROR__DOLLAR__;
                ERROR__DOLLAR__  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 500, this );
                
                
                __context__.SourceCodeLine = 18;
                ushort __FN_FORSTART_VAL__1 = (ushort) ( 1 ) ;
                ushort __FN_FOREND_VAL__1 = (ushort)50; 
                int __FN_FORSTEP_VAL__1 = (int)1; 
                for ( I  = __FN_FORSTART_VAL__1; (__FN_FORSTEP_VAL__1 > 0)  ? ( (I  >= __FN_FORSTART_VAL__1) && (I  <= __FN_FOREND_VAL__1) ) : ( (I  <= __FN_FORSTART_VAL__1) && (I  >= __FN_FOREND_VAL__1) ) ; I  += (ushort)__FN_FORSTEP_VAL__1) 
                    { 
                    __context__.SourceCodeLine = 20;
                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt (ERRORFB[ I ] .Value == 1))  ) ) 
                        { 
                        __context__.SourceCodeLine = 22;
                        ERROR__DOLLAR__  .UpdateValue ( ERROR__DOLLAR__ + ERRORIN__DOLLAR__ [ I ] + ", "  ) ; 
                        } 
                    
                    __context__.SourceCodeLine = 18;
                    } 
                
                __context__.SourceCodeLine = 26;
                ERRORMESSAGE__DOLLAR__  .UpdateValue ( ERROR__DOLLAR__  ) ; 
                
                
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
            
            __context__.SourceCodeLine = 32;
            WaitForInitializationComplete ( ) ; 
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler(); }
        return __obj__;
        }
        
    
    public override void LogosSplusInitialize()
    {
        _SplusNVRAM = new SplusNVRAM( this );
        
        ERRORFB = new InOutArray<DigitalInput>( 50, this );
        for( uint i = 0; i < 50; i++ )
        {
            ERRORFB[i+1] = new Crestron.Logos.SplusObjects.DigitalInput( ERRORFB__DigitalInput__ + i, ERRORFB__DigitalInput__, this );
            m_DigitalInputList.Add( ERRORFB__DigitalInput__ + i, ERRORFB[i+1] );
        }
        
        ERRORMESSAGE__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( ERRORMESSAGE__DOLLAR____AnalogSerialOutput__, this );
        m_StringOutputList.Add( ERRORMESSAGE__DOLLAR____AnalogSerialOutput__, ERRORMESSAGE__DOLLAR__ );
        
        ERRORIN__DOLLAR__ = new InOutArray<StringParameter>( 50, this );
        for( uint i = 0; i < 50; i++ )
        {
            ERRORIN__DOLLAR__[i+1] = new StringParameter( ERRORIN__DOLLAR____Parameter__ + i, ERRORIN__DOLLAR____Parameter__, this );
            m_ParameterList.Add( ERRORIN__DOLLAR____Parameter__ + i, ERRORIN__DOLLAR__[i+1] );
        }
        
        
        for( uint i = 0; i < 50; i++ )
            ERRORFB[i+1].OnDigitalChange.Add( new InputChangeHandlerWrapper( ERRORFB_OnChange_0, false ) );
            
        
        _SplusNVRAM.PopulateCustomAttributeList( true );
        
        NVRAM = _SplusNVRAM;
        
    }
    
    public override void LogosSimplSharpInitialize()
    {
        
        
    }
    
    public UserModuleClass_RBI_FUSION_ERROR_HELPER_V2_SPLUS ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}
    
    
    
    
    const uint ERRORFB__DigitalInput__ = 0;
    const uint ERRORMESSAGE__DOLLAR____AnalogSerialOutput__ = 0;
    const uint ERRORIN__DOLLAR____Parameter__ = 10;
    
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
