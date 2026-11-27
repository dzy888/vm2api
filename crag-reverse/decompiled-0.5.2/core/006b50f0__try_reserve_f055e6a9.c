// 006b50f0 try_reserve

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <http[56314f485c23ccf6]::header::map::HeaderMap>::try_reserve */

ulonglong __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::try_reserve
          (longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  undefined8 unaff_R14;
  undefined4 uVar18;
  
  uVar8 = *(ulonglong *)(param_1 + 0x28);
  uVar15 = CONCAT71((int7)((ulonglong)param_5 >> 8),1);
  uVar14 = param_2 + uVar8;
  if ((!CARRY8(param_2,uVar8)) &&
     (auVar3._8_8_ = 0, auVar3._0_8_ = uVar14, auVar4._8_8_ = 2, auVar4._0_8_ = 0xaaaaaaaaaaaaaaab,
     uVar12 = SUB168(auVar3 * auVar4,8) >> 1, !CARRY8(uVar14 / 3,uVar14))) {
    if (*(ulonglong *)(param_1 + 0x50) < uVar12) {
      lVar13 = 0x3f;
      if (uVar12 - 1 != 0) {
        for (; uVar12 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      plVar16 = (longlong *)0x0;
      if (1 < uVar12) {
        plVar16 = (longlong *)(0xffffffffffffffff >> (~(byte)lVar13 & 0x3f));
      }
      if ((longlong *)0x7fff < plVar16) goto LAB_006b52d5;
      puVar2 = (undefined1 *)((longlong)plVar16 + 1);
      if (uVar8 != 0) {
        uVar8 = try_grow(param_1,puVar2);
        return uVar8;
      }
      *(short *)(param_1 + 0x58) = (short)plVar16;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      uVar7 = _UNK_0018264c;
      uVar6 = _UNK_00182648;
      uVar5 = _UNK_00182644;
      uVar18 = _DAT_00182640;
      if (puVar9 == (undefined4 *)0x0) {
        uVar18 = (*(code *)PTR_handle_error_00798ff0)();
        if (*plVar16 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,8);
        }
        *(undefined1 **)(param_1 + 0x18) = puVar2;
        *(undefined8 *)(param_1 + 0x20) = unaff_R14;
        *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      puVar10 = puVar9;
      if ((undefined1 *)0x1 < puVar2) {
        lVar13 = 1;
        if (&DAT_00000007 < plVar16) {
          uVar11 = (uint)plVar16 & 0x7ff8;
          uVar8 = (ulonglong)(uVar11 * 4);
          puVar10 = (undefined4 *)((longlong)puVar9 + uVar8);
          lVar13 = (ulonglong)uVar11 + 1;
          uVar14 = 0;
          do {
            puVar1 = (undefined4 *)((longlong)puVar9 + uVar14);
            *puVar1 = uVar18;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            puVar1 = (undefined4 *)((longlong)puVar9 + uVar14 + 0x10);
            *puVar1 = uVar18;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            uVar14 = uVar14 + 0x20;
          } while (uVar8 != uVar14);
        }
        puVar17 = (undefined1 *)((longlong)plVar16 + (1 - lVar13));
        do {
          *puVar10 = 0xffff;
          puVar10 = puVar10 + 1;
          puVar17 = puVar17 + -1;
        } while (puVar17 != (undefined1 *)0x0);
      }
      *puVar10 = 0xffff;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(puVar10,2);
      }
      *(undefined4 **)(param_1 + 0x48) = puVar9;
      *(undefined1 **)(param_1 + 0x50) = puVar2;
      uVar8 = (longlong)puVar2 - ((ulonglong)puVar2 >> 2);
      if (uVar8 < 0x13b13b13b13b13c) goto LAB_006b5274;
      do {
        (*(code *)PTR_handle_error_00798ff0)();
LAB_006b5274:
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar13 = (*(code *)PTR___rust_alloc_00799000)();
      } while (lVar13 == 0);
      uVar18 = <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop((longlong *)(param_1 + 0x18),8);
      if (*(longlong *)(param_1 + 0x18) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,8);
      }
      *(ulonglong *)(param_1 + 0x18) = uVar8;
      *(longlong *)(param_1 + 0x20) = lVar13;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    uVar15 = 0;
  }
LAB_006b52d5:
  return uVar15 & 0xffffffff;
}


