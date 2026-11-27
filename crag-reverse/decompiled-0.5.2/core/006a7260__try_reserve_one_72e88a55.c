// 006a7260 try_reserve_one

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <http[56314f485c23ccf6]::header::map::HeaderMap>::try_reserve_one */

undefined8 __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::try_reserve_one(int *param_1)

{
  short sVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  uint uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 *unaff_R14;
  longlong lVar20;
  short sVar21;
  bool bVar22;
  undefined4 uVar23;
  
  lVar16 = *(longlong *)(param_1 + 10);
  uVar17 = *(ulonglong *)(param_1 + 0x14);
  if (*param_1 == 1) {
    if ((ulonglong)(lVar16 * 5) < uVar17) {
      (*(code *)PTR_set_red_0079a3b0)();
      uVar12 = _UNK_0018264c;
      uVar11 = _UNK_00182648;
      uVar10 = _UNK_00182644;
      uVar23 = _DAT_00182640;
      lVar16 = *(longlong *)(param_1 + 0x14);
      if (lVar16 != 0) {
        puVar7 = *(undefined4 **)(param_1 + 0x12);
        uVar17 = lVar16 * 4 - 4;
        puVar15 = puVar7;
        if (0x1b < uVar17) {
          uVar17 = (uVar17 >> 2) + 1;
          uVar18 = uVar17 & 0xfffffffffffffff8;
          puVar15 = puVar7 + uVar18;
          uVar19 = 0;
          do {
            puVar3 = puVar7 + uVar19;
            *puVar3 = uVar23;
            puVar3[1] = uVar10;
            puVar3[2] = uVar11;
            puVar3[3] = uVar12;
            puVar3 = puVar7 + uVar19 + 4;
            *puVar3 = uVar23;
            puVar3[1] = uVar10;
            puVar3[2] = uVar11;
            puVar3[3] = uVar12;
            uVar19 = uVar19 + 8;
          } while (uVar18 != uVar19);
          if (uVar17 == uVar18) goto LAB_006a730f;
        }
        do {
          *puVar15 = 0xffff;
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar7 + lVar16);
      }
LAB_006a730f:
      lVar16 = *(longlong *)(param_1 + 10);
      if (lVar16 == 0) {
        return 0;
      }
      lVar8 = *(longlong *)(param_1 + 8);
      uVar4 = *(ushort *)(param_1 + 0x16);
      lVar9 = *(longlong *)(param_1 + 0x12);
      uVar17 = *(ulonglong *)(param_1 + 0x14);
      lVar20 = lVar8;
      sVar21 = 0;
      do {
        lVar2 = lVar20 + 0x68;
        sVar1 = sVar21 + 1;
        uVar14 = http[56314f485c23ccf6]::header::map::hash_elem_using::
                 <http[56314f485c23ccf6]::header::name::HeaderName>(param_1,lVar20 + 0x40);
        uVar18 = (ulonglong)(uVar14 & uVar4);
        *(short *)(lVar20 + 0x60) = (short)uVar14;
        uVar19 = 0;
        while( true ) {
          bVar22 = uVar17 <= uVar18;
          if (bVar22) {
            uVar18 = 0;
          }
          if (bVar22 && uVar17 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          if (*(short *)(lVar9 + uVar18 * 4) == -1) goto LAB_006a73fc;
          if (((int)uVar18 - (uint)(*(ushort *)(lVar9 + 2 + uVar18 * 4) & uVar4) & (uint)uVar4) <
              uVar19) break;
          uVar19 = uVar19 + 1;
          uVar18 = uVar18 + 1;
        }
        while( true ) {
          bVar22 = uVar17 <= uVar18;
          if (bVar22) {
            uVar18 = 0;
          }
          if (bVar22 && uVar17 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          sVar6 = *(short *)(lVar9 + uVar18 * 4);
          if (sVar6 == -1) break;
          uVar5 = *(ushort *)(lVar9 + 2 + uVar18 * 4);
          *(short *)(lVar9 + uVar18 * 4) = sVar21;
          *(short *)(lVar9 + 2 + uVar18 * 4) = (short)uVar14;
          uVar18 = uVar18 + 1;
          sVar21 = sVar6;
          uVar14 = (uint)uVar5;
        }
LAB_006a73fc:
        *(short *)(lVar9 + uVar18 * 4) = sVar21;
        *(short *)(lVar9 + 2 + uVar18 * 4) = (short)uVar14;
        lVar20 = lVar2;
        sVar21 = sVar1;
        if (lVar2 == lVar16 * 0x68 + lVar8) {
          return 0;
        }
      } while( true );
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    if (lVar16 != uVar17 - (uVar17 >> 2)) {
      return 0;
    }
    if (lVar16 == 0) {
      *(undefined2 *)(param_1 + 0x16) = 7;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar15 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      uVar12 = _UNK_0018264c;
      uVar11 = _UNK_00182648;
      uVar10 = _UNK_00182644;
      uVar23 = _DAT_00182640;
      if (puVar15 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
      }
      else {
        *puVar15 = _DAT_00182640;
        puVar15[1] = uVar10;
        puVar15[2] = uVar11;
        puVar15[3] = uVar12;
        puVar15[4] = uVar23;
        puVar15[5] = uVar10;
        puVar15[6] = uVar11;
        puVar15[7] = uVar12;
        if (uVar17 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,2);
        }
        *(undefined4 **)(param_1 + 0x12) = puVar15;
        param_1[0x14] = 8;
        param_1[0x15] = 0;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar16 = (*(code *)PTR___rust_alloc_00799000)();
        unaff_R14 = puVar15;
        if (lVar16 != 0) {
          uVar23 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <[http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>]>
                             (*(undefined8 *)(param_1 + 8),0);
          if (*(longlong *)(param_1 + 6) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,8);
          }
          param_1[6] = 6;
          param_1[7] = 0;
          *(longlong *)(param_1 + 8) = lVar16;
          param_1[10] = 0;
          param_1[0xb] = 0;
          return 0;
        }
      }
      uVar23 = (*(code *)PTR_handle_error_00798ff0)();
      if (*(longlong *)(param_1 + 6) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,8);
      }
      param_1[6] = 6;
      param_1[7] = 0;
      *(undefined4 **)(param_1 + 8) = unaff_R14;
      param_1[10] = 0;
      param_1[0xb] = 0;
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
  }
  cVar13 = try_grow(param_1,uVar17 * 2);
  if (cVar13 == '\0') {
    return 0;
  }
  return 1;
}


