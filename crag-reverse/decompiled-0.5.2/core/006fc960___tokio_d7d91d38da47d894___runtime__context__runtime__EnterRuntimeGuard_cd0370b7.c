// 006fc960 <tokio[d7d91d38da47d894]::runtime::context::runtime::EnterRuntimeGuard>

/* WARNING: Switch with 1 destination removed at 0x006f0842 */
/* WARNING: Switch with 1 destination removed at 0x006f0bab */
/* WARNING: Switch with 1 destination removed at 0x006fca24 */
/* WARNING: Switch with 1 destination removed at 0x006fca3d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::context::runtime::EnterRuntimeGuard>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::context::runtime::EnterRuntimeGuard>
          (longlong *param_1,code *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *in_FS_OFFSET;
  undefined4 uVar13;
  undefined1 auStack_a8 [128];
  
  lVar2 = param_1[3];
  uVar13 = (undefined4)lVar2;
  lVar12 = *in_FS_OFFSET;
  if (*(char *)(lVar12 + -0xf0) != '\0') {
    if (*(char *)(lVar12 + -0xf0) == '\x01') {
      param_2 = std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
                <tokio[d7d91d38da47d894]::runtime::context::Context>;
      uVar13 = (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar12 + -0xf0) = 0;
      cVar3 = *(char *)(lVar12 + -0xf2);
      goto joined_r0x006fca6a;
    }
LAB_006fca8b:
    (*(code *)PTR_panic_access_error_00799458)();
LAB_006fca98:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  cVar3 = *(char *)(lVar12 + -0xf2);
joined_r0x006fca6a:
  if (cVar3 == '\x02') {
    (*(code *)PTR_panic_00799338)(uVar13,&PTR_s__vendor_tokio_1_54_1_src_runtime_00794c20);
    goto LAB_006fca98;
  }
  *(undefined1 *)(lVar12 + -0xf2) = 2;
  if ((*(byte *)(lVar12 + -0x100) & 1) == 0) {
    plVar9 = (longlong *)
             <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::{K#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut_core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>,)>>
             ::call_once(0,param_2);
    if (plVar9 == (longlong *)0x0) goto LAB_006fca8b;
    *plVar9 = *plVar9 + 1;
    iVar8 = tokio[d7d91d38da47d894]::loom::std::rand::COUNTER;
    LOCK();
    tokio[d7d91d38da47d894]::loom::std::rand::COUNTER =
         tokio[d7d91d38da47d894]::loom::std::rand::COUNTER + 1;
    UNLOCK();
    <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
    ::hash_one::<u32>(auStack_a8 + 0x80,iVar8);
  }
  *(undefined4 *)(lVar12 + -0x100) = 1;
  *(longlong *)(lVar12 + -0xfc) = lVar2;
  uVar13 = <std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>
           ::with::
           <<tokio[d7d91d38da47d894]::runtime::context::current::SetCurrentGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_,()>
                     ();
  if (*param_1 != 2) {
    plVar9 = param_1 + 1;
    if (*param_1 == 0) {
      plVar4 = (longlong *)*plVar9;
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        lVar2 = *plVar9;
        lVar12 = *(longlong *)(lVar2 + 0x2d8);
        if ((lVar12 != -1) && (lVar12 != 0)) {
          uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
        }
        if (*(longlong *)(lVar2 + 0x140) != 0) {
          lVar12 = *(longlong *)(lVar2 + 0x140) * 0x18;
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
        }
        <tokio[d7d91d38da47d894]::runtime::config::Config>(lVar2 + 0x170,lVar12);
        uVar13 = <tokio[d7d91d38da47d894]::runtime::driver::Handle>(lVar2 + 0x240);
        plVar9 = *(longlong **)(lVar2 + 0x238);
        LOCK();
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          uVar13 = (*(code *)PTR_drop_slow_00799af8)();
        }
        plVar9 = *(longlong **)(lVar2 + 0x200);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            uVar13 = (*(code *)PTR_drop_slow_00799678)();
          }
        }
        plVar9 = *(longlong **)(lVar2 + 0x210);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            uVar13 = (*(code *)PTR_drop_slow_00799678)();
          }
        }
        if (lVar2 != -1) {
          LOCK();
          plVar9 = (longlong *)(lVar2 + 8);
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) goto __rustc_100742bb89c490cb____rust_dealloc;
        }
        return;
      }
    }
    else {
      plVar4 = (longlong *)*plVar9;
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        lVar2 = *plVar9;
        if ((*(longlong *)(lVar2 + 0x3d0) != -1) && (*(longlong *)(lVar2 + 0x3d0) != 0)) {
          uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
        }
        puVar7 = PTR_drop_slow_00799658;
        puVar6 = PTR_drop_slow_00799650;
        lVar12 = *(longlong *)(lVar2 + 0x1c8);
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x1c0) + 8);
          do {
            plVar9 = (longlong *)puVar10[-1];
            LOCK();
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
              uVar13 = (*(code *)puVar6)();
              plVar9 = (longlong *)*puVar10;
              LOCK();
              *plVar9 = *plVar9 + -1;
              lVar1 = *plVar9;
              UNLOCK();
            }
            else {
              plVar9 = (longlong *)*puVar10;
              LOCK();
              *plVar9 = *plVar9 + -1;
              lVar1 = *plVar9;
              UNLOCK();
            }
            if (lVar1 == 0) {
              uVar13 = (*(code *)puVar7)();
            }
            puVar10 = puVar10 + 2;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
        }
        if (*(longlong *)(lVar2 + 0x1f8) != 0) {
          uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
        }
        if (*(longlong *)(lVar2 + 0x188) != 0) {
          uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
        }
        lVar12 = *(longlong *)(lVar2 + 0x1b0);
        lVar1 = *(longlong *)(lVar2 + 0x1b8);
        for (lVar11 = 0; lVar1 != lVar11; lVar11 = lVar11 + 1) {
          uVar13 = <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>
                             (*(undefined8 *)(lVar12 + lVar11 * 8));
        }
        lVar12 = 0;
        if (*(longlong *)(lVar2 + 0x1a8) != 0) {
          lVar12 = *(longlong *)(lVar2 + 0x1a8) << 3;
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
        }
        uVar13 = <tokio[d7d91d38da47d894]::runtime::config::Config>(lVar2 + 0x228,lVar12);
        lVar12 = 0;
        if (*(longlong *)(lVar2 + 0x1d8) != 0) {
          lVar12 = *(longlong *)(lVar2 + 0x1d8) << 7;
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,0x80);
        }
        uVar13 = <tokio[d7d91d38da47d894]::runtime::driver::Handle>(lVar2 + 0x338,lVar12);
        plVar9 = *(longlong **)(lVar2 + 0x330);
        LOCK();
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          uVar13 = (*(code *)PTR_drop_slow_00799af8)();
        }
        plVar9 = *(longlong **)(lVar2 + 0x300);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            uVar13 = (*(code *)PTR_drop_slow_00799678)();
          }
        }
        plVar9 = *(longlong **)(lVar2 + 0x310);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            uVar13 = (*(code *)PTR_drop_slow_00799678)();
          }
        }
        if (lVar2 != -1) {
          LOCK();
          plVar9 = (longlong *)(lVar2 + 8);
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
__rustc_100742bb89c490cb____rust_dealloc:
            (*(code *)PTR_free_0079adc8)(uVar13,0x80);
            return;
          }
        }
        return;
      }
    }
  }
  return;
}


