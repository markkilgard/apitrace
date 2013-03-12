/**************************************************************************
 *
 * Copyright 2012 VMware, Inc.
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 **************************************************************************/


/*
 * Stubs for internal DXGI D3DKMT functions.
 */


#include <assert.h>
#include <windows.h>


#ifndef NTSTATUS
#define NTSTATUS LONG
#endif

#ifndef STATUS_NOT_IMPLEMENTED
#define STATUS_NOT_IMPLEMENTED 0xC0000002
#endif

#define D3DKMT_CREATEALLOCATION void
#define D3DKMT_CREATEALLOCATION void
#define D3DKMT_QUERYRESOURCEINFO void
#define D3DKMT_OPENRESOURCE void
#define D3DKMT_OPENRESOURCE void
#define D3DKMT_DESTROYALLOCATION void
#define D3DKMT_SETALLOCATIONPRIORITY void
#define D3DKMT_QUERYALLOCATIONRESIDENCY void
#define D3DKMT_CREATEDEVICE void
#define D3DKMT_DESTROYDEVICE void
#define D3DKMT_CREATECONTEXT void
#define D3DKMT_DESTROYCONTEXT void
#define D3DKMT_CREATESYNCHRONIZATIONOBJECT void
#define D3DKMT_CREATESYNCHRONIZATIONOBJECT2 void
#define D3DKMT_OPENSYNCHRONIZATIONOBJECT void
#define D3DKMT_DESTROYSYNCHRONIZATIONOBJECT void
#define D3DKMT_WAITFORSYNCHRONIZATIONOBJECT void
#define D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 void
#define D3DKMT_SIGNALSYNCHRONIZATIONOBJECT void
#define D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 void
#define D3DKMT_LOCK void
#define D3DKMT_UNLOCK void
#define D3DKMT_GETDISPLAYMODELIST void
#define D3DKMT_SETDISPLAYMODE void
#define D3DKMT_GETMULTISAMPLEMETHODLIST void
#define D3DKMT_PRESENT void
#define D3DKMT_RENDER void
#define D3DKMT_GETRUNTIMEDATA void
#define D3DKMT_QUERYADAPTERINFO void
#define D3DKMT_OPENADAPTERFROMHDC void
#define D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME void
#define D3DKMT_OPENADAPTERFROMDEVICENAME void
#define D3DKMT_CLOSEADAPTER void
#define D3DKMT_GETSHAREDPRIMARYHANDLE void
#define D3DKMT_ESCAPE void
#define D3DKMT_SETVIDPNSOURCEOWNER void
#define D3DKMT_GETPRESENTHISTORY void
#define D3DKMT_HANDLE LONG
#define D3DKMT_CREATEOVERLAY void
#define D3DKMT_UPDATEOVERLAY void
#define D3DKMT_FLIPOVERLAY void
#define D3DKMT_DESTROYOVERLAY void
#define D3DKMT_WAITFORVERTICALBLANKEVENT void
#define D3DKMT_SETGAMMARAMP void
#define D3DKMT_GETDEVICESTATE void
#define D3DKMT_CREATEDCFROMMEMORY void
#define D3DKMT_DESTROYDCFROMMEMORY void
#define D3DKMT_SETCONTEXTSCHEDULINGPRIORITY void
#define D3DKMT_GETCONTEXTSCHEDULINGPRIORITY void
#define D3DKMT_SCHEDULINGPRIORITYCLASS INT
#define D3DKMT_GETSCANLINE void
#define D3DKMT_CHANGESURFACEPOINTER void
#define D3DKMT_SETQUEUEDLIMIT void
#define D3DKMT_POLLDISPLAYCHILDREN void
#define D3DKMT_INVALIDATEACTIVEVIDPN void
#define D3DKMT_CHECKOCCLUSION void
#define D3DKMT_WAITFORIDLE void
#define D3DKMT_CHECKMONITORPOWERSTATE void
#define D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP void
#define D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT void
#define D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION void
#define D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION void
#define D3DKMT_CREATEKEYEDMUTEX void
#define D3DKMT_OPENKEYEDMUTEX void
#define D3DKMT_DESTROYKEYEDMUTEX void
#define D3DKMT_ACQUIREKEYEDMUTEX void
#define D3DKMT_RELEASEKEYEDMUTEX void
#define D3DKMT_CONFIGURESHAREDRESOURCE void
#define D3DKMT_GETOVERLAYSTATE void
#define D3DKMT_CHECKSHAREDRESOURCEACCESS void


EXTERN_C NTSTATUS APIENTRY
D3DKMTCreateAllocation(D3DKMT_CREATEALLOCATION *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCreateAllocation2(D3DKMT_CREATEALLOCATION *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTQueryResourceInfo(D3DKMT_QUERYRESOURCEINFO *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTOpenResource(D3DKMT_OPENRESOURCE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTOpenResource2(D3DKMT_OPENRESOURCE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTDestroyAllocation(CONST D3DKMT_DESTROYALLOCATION *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSetAllocationPriority(CONST D3DKMT_SETALLOCATIONPRIORITY *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTQueryAllocationResidency(CONST D3DKMT_QUERYALLOCATIONRESIDENCY *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCreateDevice(D3DKMT_CREATEDEVICE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTDestroyDevice(CONST D3DKMT_DESTROYDEVICE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCreateContext(D3DKMT_CREATECONTEXT *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTDestroyContext(CONST D3DKMT_DESTROYCONTEXT *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCreateSynchronizationObject(D3DKMT_CREATESYNCHRONIZATIONOBJECT *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCreateSynchronizationObject2(D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTOpenSynchronizationObject(D3DKMT_OPENSYNCHRONIZATIONOBJECT *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTDestroySynchronizationObject(CONST D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTWaitForSynchronizationObject(CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECT *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTWaitForSynchronizationObject2(CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSignalSynchronizationObject(CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECT *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSignalSynchronizationObject2(CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTLock(D3DKMT_LOCK *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTUnlock(CONST D3DKMT_UNLOCK *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTGetDisplayModeList(D3DKMT_GETDISPLAYMODELIST *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSetDisplayMode(CONST D3DKMT_SETDISPLAYMODE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTGetMultisampleMethodList(D3DKMT_GETMULTISAMPLEMETHODLIST *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTPresent(CONST D3DKMT_PRESENT *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTRender(D3DKMT_RENDER *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTGetRuntimeData(CONST D3DKMT_GETRUNTIMEDATA *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTQueryAdapterInfo(CONST D3DKMT_QUERYADAPTERINFO *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTOpenAdapterFromHdc(D3DKMT_OPENADAPTERFROMHDC *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTOpenAdapterFromGdiDisplayName(D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTOpenAdapterFromDeviceName(D3DKMT_OPENADAPTERFROMDEVICENAME *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCloseAdapter(CONST D3DKMT_CLOSEADAPTER *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTGetSharedPrimaryHandle(D3DKMT_GETSHAREDPRIMARYHANDLE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTEscape(CONST D3DKMT_ESCAPE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSetVidPnSourceOwner(CONST D3DKMT_SETVIDPNSOURCEOWNER *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTGetPresentHistory(D3DKMT_GETPRESENTHISTORY *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTGetPresentQueueEvent(D3DKMT_HANDLE hAdapter, HANDLE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCreateOverlay(D3DKMT_CREATEOVERLAY *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTUpdateOverlay(CONST D3DKMT_UPDATEOVERLAY *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTFlipOverlay(CONST D3DKMT_FLIPOVERLAY *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTDestroyOverlay(CONST D3DKMT_DESTROYOVERLAY *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTWaitForVerticalBlankEvent(CONST D3DKMT_WAITFORVERTICALBLANKEVENT *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSetGammaRamp(CONST D3DKMT_SETGAMMARAMP *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTGetDeviceState(D3DKMT_GETDEVICESTATE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCreateDCFromMemory(D3DKMT_CREATEDCFROMMEMORY *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTDestroyDCFromMemory(CONST D3DKMT_DESTROYDCFROMMEMORY *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSetContextSchedulingPriority(CONST D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTGetContextSchedulingPriority(D3DKMT_GETCONTEXTSCHEDULINGPRIORITY *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSetProcessSchedulingPriorityClass(HANDLE hProcess, D3DKMT_SCHEDULINGPRIORITYCLASS Priority)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTGetProcessSchedulingPriorityClass(HANDLE hProcess, D3DKMT_SCHEDULINGPRIORITYCLASS *pPriority)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTReleaseProcessVidPnSourceOwners(HANDLE hProcess)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTGetScanLine(D3DKMT_GETSCANLINE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTChangeSurfacePointer(CONST D3DKMT_CHANGESURFACEPOINTER *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSetQueuedLimit(CONST D3DKMT_SETQUEUEDLIMIT *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTPollDisplayChildren(CONST D3DKMT_POLLDISPLAYCHILDREN *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTInvalidateActiveVidPn(CONST D3DKMT_INVALIDATEACTIVEVIDPN *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCheckOcclusion(CONST D3DKMT_CHECKOCCLUSION *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTWaitForIdle(CONST D3DKMT_WAITFORIDLE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCheckMonitorPowerState(CONST D3DKMT_CHECKMONITORPOWERSTATE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C BOOLEAN APIENTRY
D3DKMTCheckExclusiveOwnership(VOID)
{
   assert(0);
   return FALSE;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCheckVidPnExclusiveOwnership(CONST D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSetDisplayPrivateDriverFormat(CONST D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSharedPrimaryLockNotification(CONST D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTSharedPrimaryUnLockNotification(CONST D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCreateKeyedMutex(D3DKMT_CREATEKEYEDMUTEX *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTOpenKeyedMutex(D3DKMT_OPENKEYEDMUTEX *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTDestroyKeyedMutex(CONST D3DKMT_DESTROYKEYEDMUTEX *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTAcquireKeyedMutex(D3DKMT_ACQUIREKEYEDMUTEX *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTReleaseKeyedMutex(D3DKMT_RELEASEKEYEDMUTEX *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTConfigureSharedResource(CONST D3DKMT_CONFIGURESHAREDRESOURCE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTGetOverlayState(D3DKMT_GETOVERLAYSTATE *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


EXTERN_C NTSTATUS APIENTRY
D3DKMTCheckSharedResourceAccess(CONST D3DKMT_CHECKSHAREDRESOURCEACCESS *pData)
{
   assert(0);
   return STATUS_NOT_IMPLEMENTED;
}


#define D3D10DDIARG_OPENADAPTER void

EXTERN_C HRESULT APIENTRY
OpenAdapter10(D3D10DDIARG_OPENADAPTER *pData) {
    assert(0);
    return E_NOTIMPL;
}

EXTERN_C HRESULT APIENTRY
OpenAdapter10_2(D3D10DDIARG_OPENADAPTER *pData) {
    assert(0);
    return E_NOTIMPL;
}

