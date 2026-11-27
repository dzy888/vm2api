// 00558740 <tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,
   tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>>
          (undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  plVar4 = (longlong *)*param_1;
  LOCK();
  plVar1 = plVar4 + 0x3e;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    LOCK();
    puVar2 = (ulonglong *)(plVar4 + 0x11);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + 1;
    UNLOCK();
    uVar12 = uVar3 & 0xffffffffffffffe0;
    lVar7 = plVar4[0x10];
    uVar11 = uVar12 - *(longlong *)(lVar7 + 0x600);
    if (uVar11 != 0) {
      bVar13 = (ulonglong)((uint)uVar3 & 0x1f) < uVar11 >> 5;
      lVar10 = lVar7;
      do {
        while( true ) {
          lVar7 = *(longlong *)(lVar10 + 0x608);
          if (*(longlong *)(lVar10 + 0x608) == 0) {
            lVar5 = *(longlong *)(lVar10 + 0x600);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            param_2 = 8;
            lVar7 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar7 == 0) {
              (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            *(longlong *)(lVar7 + 0x600) = lVar5 + 0x20;
            *(undefined8 *)(lVar7 + 0x608) = 0;
            *(undefined8 *)(lVar7 + 0x610) = 0;
            *(undefined8 *)(lVar7 + 0x618) = 0;
            lVar8 = 0;
            LOCK();
            lVar5 = *(longlong *)(lVar10 + 0x608);
            if (lVar5 == 0) {
              *(longlong *)(lVar10 + 0x608) = lVar7;
            }
            else {
              lVar8 = lVar5;
            }
            UNLOCK();
            if (lVar5 != 0) {
              *(longlong *)(lVar7 + 0x600) = *(longlong *)(lVar8 + 0x600) + 0x20;
              lVar9 = 0;
              LOCK();
              lVar5 = *(longlong *)(lVar8 + 0x608);
              if (lVar5 == 0) {
                *(longlong *)(lVar8 + 0x608) = lVar7;
              }
              else {
                lVar9 = lVar5;
              }
              UNLOCK();
              if (lVar5 != 0) {
                do {
                  *(longlong *)(lVar7 + 0x600) = *(longlong *)(lVar9 + 0x600) + 0x20;
                  param_2 = 0;
                  LOCK();
                  lVar5 = *(longlong *)(lVar9 + 0x608);
                  if (lVar5 == 0) {
                    *(longlong *)(lVar9 + 0x608) = lVar7;
                  }
                  else {
                    param_2 = lVar5;
                  }
                  UNLOCK();
                  lVar9 = param_2;
                } while (lVar5 != 0);
              }
              lVar7 = lVar8;
            }
          }
          if ((bool)(bVar13 & (int)*(undefined8 *)(lVar10 + 0x610) == -1)) break;
LAB_005587e0:
          bVar13 = false;
          lVar10 = lVar7;
          if (*(ulonglong *)(lVar7 + 0x600) == uVar12) goto LAB_00558783;
        }
        LOCK();
        bVar13 = lVar10 == plVar4[0x10];
        if (bVar13) {
          plVar4[0x10] = lVar7;
        }
        UNLOCK();
        if (!bVar13) goto LAB_005587e0;
        LOCK();
        UNLOCK();
        *(longlong *)(lVar10 + 0x618) = plVar4[0x11];
        LOCK();
        *(ulonglong *)(lVar10 + 0x610) = *(ulonglong *)(lVar10 + 0x610) | 0x100000000;
        UNLOCK();
        bVar13 = true;
        lVar10 = lVar7;
      } while (*(ulonglong *)(lVar7 + 0x600) != uVar12);
    }
LAB_00558783:
    LOCK();
    *(ulonglong *)(lVar7 + 0x610) = *(ulonglong *)(lVar7 + 0x610) | 0x200000000;
    UNLOCK();
    (*(code *)PTR_wake_00799118)();
  }
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(param_1,param_2);
    return;
  }
  return;
}


