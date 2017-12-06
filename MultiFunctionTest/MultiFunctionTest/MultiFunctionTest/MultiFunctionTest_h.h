

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for MultiFunctionTest.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __MultiFunctionTest_h_h__
#define __MultiFunctionTest_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMultiFunctionTest_FWD_DEFINED__
#define __IMultiFunctionTest_FWD_DEFINED__
typedef interface IMultiFunctionTest IMultiFunctionTest;

#endif 	/* __IMultiFunctionTest_FWD_DEFINED__ */


#ifndef __CMultiFunctionTestDoc_FWD_DEFINED__
#define __CMultiFunctionTestDoc_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMultiFunctionTestDoc CMultiFunctionTestDoc;
#else
typedef struct CMultiFunctionTestDoc CMultiFunctionTestDoc;
#endif /* __cplusplus */

#endif 	/* __CMultiFunctionTestDoc_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __MultiFunctionTest_LIBRARY_DEFINED__
#define __MultiFunctionTest_LIBRARY_DEFINED__

/* library MultiFunctionTest */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_MultiFunctionTest;

#ifndef __IMultiFunctionTest_DISPINTERFACE_DEFINED__
#define __IMultiFunctionTest_DISPINTERFACE_DEFINED__

/* dispinterface IMultiFunctionTest */
/* [uuid] */ 


EXTERN_C const IID DIID_IMultiFunctionTest;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7758285C-48C3-4708-924A-B67530A06E9A")
    IMultiFunctionTest : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IMultiFunctionTestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMultiFunctionTest * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMultiFunctionTest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMultiFunctionTest * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMultiFunctionTest * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMultiFunctionTest * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMultiFunctionTest * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMultiFunctionTest * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMultiFunctionTestVtbl;

    interface IMultiFunctionTest
    {
        CONST_VTBL struct IMultiFunctionTestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMultiFunctionTest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMultiFunctionTest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMultiFunctionTest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMultiFunctionTest_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMultiFunctionTest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMultiFunctionTest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMultiFunctionTest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IMultiFunctionTest_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CMultiFunctionTestDoc;

#ifdef __cplusplus

class DECLSPEC_UUID("23048D30-9CE3-4961-9E02-3A2CDCC449DC")
CMultiFunctionTestDoc;
#endif
#endif /* __MultiFunctionTest_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


