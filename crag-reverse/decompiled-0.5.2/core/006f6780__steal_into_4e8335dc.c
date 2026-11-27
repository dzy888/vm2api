// 006f6780 steal_into

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Steal<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::steal_into
    */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Steal<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::steal_into(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_44;
  uint *local_40;
  undefined *local_38;
  
  lVar2 = *param_2;
  uVar7 = *(uint *)(lVar2 + 0x20);
  if (uVar7 - (int)((ulonglong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) < 0x81) {
    lVar3 = *param_1;
    uVar5 = *(ulonglong *)(lVar3 + 0x18);
    iVar9 = *(int *)(lVar3 + 0x20);
    if ((int)(uVar5 >> 0x20) == (int)uVar5) {
      do {
        uVar11 = uVar5 >> 0x20;
        iVar10 = (int)(uVar5 >> 0x20);
        local_44 = iVar9 - iVar10;
        if (local_44 == 0) {
          return 0;
        }
        local_44 = local_44 - (local_44 >> 1);
        uVar8 = uVar5 & 0xffffffff00000000 | (ulonglong)(local_44 + iVar10);
        LOCK();
        uVar1 = *(ulonglong *)(lVar3 + 0x18);
        bVar14 = uVar5 == uVar1;
        if (bVar14) {
          *(ulonglong *)(lVar3 + 0x18) = uVar8;
        }
        else {
          uVar5 = uVar1;
        }
        UNLOCK();
        if (bVar14) {
          if (0x80 < local_44) {
            local_40 = &local_44;
            local_38 = PTR_fmt_00799470;
            (*(code *)PTR_panic_fmt_007991a8)
                      (lVar2,&anon_d250138afc359909044a05a15195067d_40_llvm_15875357693395155123);
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return uVar6;
          }
          uVar12 = 0;
          if (local_44 < 2) goto LAB_006f689f;
          uVar12 = 0;
          uVar13 = uVar7;
          do {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar13 & 0xff) * 8) =
                 *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + (uVar11 & 0xff) * 8);
            uVar12 = uVar12 + 2;
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(byte)((char)uVar13 + 1) * 8) =
                 *(undefined8 *)
                  (*(longlong *)(lVar3 + 0x10) + (ulonglong)((int)uVar11 + 1U & 0xff) * 8);
            uVar13 = uVar13 + 2;
            uVar11 = (ulonglong)((int)uVar11 + 2);
          } while ((local_44 & 0xfe) != uVar12);
          if ((local_44 & 1) != 0) {
LAB_006f689f:
            *(undefined8 *)
             (*(longlong *)(lVar2 + 0x10) + (ulonglong)(byte)((char)uVar12 + (char)uVar7) * 8) =
                 *(undefined8 *)
                  (*(longlong *)(lVar3 + 0x10) + (ulonglong)(iVar10 + uVar12 & 0xff) * 8);
          }
          do {
            LOCK();
            uVar5 = *(ulonglong *)(lVar3 + 0x18);
            bVar14 = uVar8 == uVar5;
            if (bVar14) {
              *(ulonglong *)(lVar3 + 0x18) = uVar8 << 0x20 | uVar8 & 0xffffffff;
            }
            else {
              uVar8 = uVar5;
            }
            UNLOCK();
          } while (!bVar14);
          uVar7 = (uVar7 + local_44) - 1;
          uVar6 = *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar7 & 0xff) * 8);
          if (local_44 == 1) {
            return uVar6;
          }
          *(uint *)(lVar2 + 0x20) = uVar7;
          return uVar6;
        }
        iVar9 = *(int *)(lVar3 + 0x20);
      } while ((int)(uVar5 >> 0x20) == (int)uVar5);
    }
  }
  return 0;
}


