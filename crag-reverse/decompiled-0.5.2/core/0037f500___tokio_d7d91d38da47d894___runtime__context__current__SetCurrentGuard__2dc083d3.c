// 0037f500 <tokio[d7d91d38da47d894]::runtime::context::current::SetCurrentGuard>

/* WARNING: Switch with 1 destination removed at 0x0037f532 */
/* WARNING: Switch with 1 destination removed at 0x0037f54b */
/* WARNING: Switch with 1 destination removed at 0x006f0842 */
/* WARNING: Switch with 1 destination removed at 0x006f0bab */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::context::current::SetCurrentGuard>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::context::current::SetCurrentGuard>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 unaff_R14;
  longlong lVar9;
  
  (*(code *)PTR_drop_00799680)();
  if (*param_1 != 2) {
    plVar6 = param_1 + 1;
    if (*param_1 == 0) {
      plVar2 = (longlong *)*plVar6;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar3 = *plVar6;
        lVar9 = *(longlong *)(lVar3 + 0x2d8);
        if ((lVar9 != -1) && (lVar9 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
        }
        if (*(longlong *)(lVar3 + 0x140) != 0) {
          lVar9 = *(longlong *)(lVar3 + 0x140) * 0x18;
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
        }
        <tokio[d7d91d38da47d894]::runtime::config::Config>(lVar3 + 0x170,lVar9);
        <tokio[d7d91d38da47d894]::runtime::driver::Handle>(lVar3 + 0x240);
        plVar6 = *(longlong **)(lVar3 + 0x238);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          (*(code *)PTR_drop_slow_00799af8)();
        }
        plVar6 = *(longlong **)(lVar3 + 0x200);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            (*(code *)PTR_drop_slow_00799678)();
          }
        }
        plVar6 = *(longlong **)(lVar3 + 0x210);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            (*(code *)PTR_drop_slow_00799678)();
          }
        }
        if (lVar3 != -1) {
          LOCK();
          plVar6 = (longlong *)(lVar3 + 8);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) goto __rustc_100742bb89c490cb____rust_dealloc;
        }
        return;
      }
    }
    else {
      plVar2 = (longlong *)*plVar6;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar3 = *plVar6;
        if ((*(longlong *)(lVar3 + 0x3d0) != -1) && (*(longlong *)(lVar3 + 0x3d0) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1,param_5,param_6,unaff_R14);
        }
        puVar5 = PTR_drop_slow_00799658;
        puVar4 = PTR_drop_slow_00799650;
        lVar9 = *(longlong *)(lVar3 + 0x1c8);
        if (lVar9 != 0) {
          puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x1c0) + 8);
          do {
            plVar6 = (longlong *)puVar7[-1];
            LOCK();
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              (*(code *)puVar4)();
              plVar6 = (longlong *)*puVar7;
              LOCK();
              *plVar6 = *plVar6 + -1;
              lVar1 = *plVar6;
              UNLOCK();
            }
            else {
              plVar6 = (longlong *)*puVar7;
              LOCK();
              *plVar6 = *plVar6 + -1;
              lVar1 = *plVar6;
              UNLOCK();
            }
            if (lVar1 == 0) {
              (*(code *)puVar5)();
            }
            puVar7 = puVar7 + 2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
        }
        if (*(longlong *)(lVar3 + 0x1f8) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
        }
        if (*(longlong *)(lVar3 + 0x188) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
        }
        lVar9 = *(longlong *)(lVar3 + 0x1b0);
        lVar1 = *(longlong *)(lVar3 + 0x1b8);
        for (lVar8 = 0; lVar1 != lVar8; lVar8 = lVar8 + 1) {
          <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>
                    (*(undefined8 *)(lVar9 + lVar8 * 8));
        }
        lVar9 = 0;
        if (*(longlong *)(lVar3 + 0x1a8) != 0) {
          lVar9 = *(longlong *)(lVar3 + 0x1a8) << 3;
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
        }
        <tokio[d7d91d38da47d894]::runtime::config::Config>(lVar3 + 0x228,lVar9);
        lVar9 = 0;
        if (*(longlong *)(lVar3 + 0x1d8) != 0) {
          lVar9 = *(longlong *)(lVar3 + 0x1d8) << 7;
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,0x80);
        }
        <tokio[d7d91d38da47d894]::runtime::driver::Handle>(lVar3 + 0x338,lVar9);
        plVar6 = *(longlong **)(lVar3 + 0x330);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          (*(code *)PTR_drop_slow_00799af8)();
        }
        plVar6 = *(longlong **)(lVar3 + 0x300);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            (*(code *)PTR_drop_slow_00799678)();
          }
        }
        plVar6 = *(longlong **)(lVar3 + 0x310);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            (*(code *)PTR_drop_slow_00799678)();
          }
        }
        if (lVar3 != -1) {
          LOCK();
          plVar6 = (longlong *)(lVar3 + 8);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
__rustc_100742bb89c490cb____rust_dealloc:
            (*(code *)PTR_free_0079adc8)(param_4,0x80);
            return;
          }
        }
        return;
      }
    }
  }
  return;
}


