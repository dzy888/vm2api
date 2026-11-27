// 00668da0 <http[56314f485c23ccf6]::header::name::HeaderName>

/* <http[56314f485c23ccf6]::header::map::HeaderMap>::try_insert2::<http[56314f485c23ccf6]::header::name::HeaderName>
    */

void __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::try_insert2::
<http[56314f485c23ccf6]::header::name::HeaderName>
          (undefined4 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  ushort uVar13;
  int iVar14;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar24;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  ushort local_40;
  undefined6 uStack_3e;
  longlong local_38;
  
  cVar12 = try_reserve_one(param_2);
  if (cVar12 == '\0') {
    uVar13 = http[56314f485c23ccf6]::header::map::hash_elem_using::
             <http[56314f485c23ccf6]::header::name::HeaderName>(param_2,param_3);
    uVar4 = *(ushort *)(param_2 + 0xb);
    uVar21 = (ulonglong)(uVar13 & uVar4);
    uVar6 = param_2[10];
    lVar7 = param_2[9];
    lVar20 = param_2[4];
    uVar19 = param_2[5];
    lVar8 = *param_3;
    lVar9 = param_3[1];
    lVar11 = param_3[1];
    lVar16 = param_3[2];
    uVar18 = 0;
    do {
      uVar22 = uVar21;
      if (uVar6 <= uVar21) {
        uVar22 = 0;
      }
      if (uVar6 <= uVar21 && uVar6 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar21 = (ulonglong)*(ushort *)(lVar7 + uVar22 * 4);
      local_60 = lVar8;
      lStack_58 = lVar9;
      local_50 = lVar16;
      local_40 = uVar13;
      if (uVar21 == 0xffff) {
        lStack_48 = param_3[3];
        uStack_88 = *param_4;
        local_80 = param_4[1];
        uStack_78 = param_4[2];
        local_70 = param_4[3];
        if (0x7fff < uVar19) {
          uVar24 = (**(code **)(uStack_88 + 0x20))();
LAB_0066905c:
          if (lVar8 != 0) {
            (**(code **)(lVar8 + 0x20))(uVar24,lVar16);
          }
          *(undefined1 *)(param_1 + 8) = 0xff;
          return;
        }
        uStack_68 = param_4[4];
        local_a0 = 0;
        if (uVar19 == param_2[3]) {
          (*(code *)PTR_grow_one_0079a2e8)();
          lVar20 = param_2[4];
        }
        lVar16 = uVar19 * 0x68;
        *(ulonglong *)(lVar20 + 0x60 + lVar16) = CONCAT62(uStack_3e,local_40);
        plVar2 = (longlong *)(lVar20 + 0x50 + lVar16);
        *plVar2 = local_50;
        plVar2[1] = lStack_48;
        plVar2 = (longlong *)(lVar20 + 0x40 + lVar16);
        *plVar2 = local_60;
        plVar2[1] = lStack_58;
        puVar1 = (undefined4 *)(lVar20 + 0x30 + lVar16);
        *puVar1 = (undefined4)local_70;
        puVar1[1] = local_70._4_4_;
        puVar1[2] = (undefined4)uStack_68;
        puVar1[3] = uStack_68._4_4_;
        puVar1 = (undefined4 *)(lVar20 + 0x20 + lVar16);
        *puVar1 = (undefined4)local_80;
        puVar1[1] = local_80._4_4_;
        puVar1[2] = (undefined4)uStack_78;
        puVar1[3] = uStack_78._4_4_;
        puVar1 = (undefined4 *)(lVar20 + 0x10 + lVar16);
        *puVar1 = local_90;
        puVar1[1] = uStack_8c;
        puVar1[2] = (undefined4)uStack_88;
        puVar1[3] = uStack_88._4_4_;
        puVar1 = (undefined4 *)(lVar20 + lVar16);
        *puVar1 = (undefined4)local_a0;
        puVar1[1] = local_a0._4_4_;
        puVar1[2] = uStack_98;
        puVar1[3] = uStack_94;
        param_2[5] = uVar19 + 1;
        if ((ulonglong)param_2[10] <= uVar22) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (CONCAT62(uStack_3e,local_40),
                     &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790978
                    );
          if (*param_3 != 0) {
            (**(code **)(*param_3 + 0x20))(param_3,param_3[2]);
          }
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        lVar16 = param_2[9];
        *(short *)(lVar16 + uVar22 * 4) = (short)uVar19;
        *(ushort *)(lVar16 + 2 + uVar22 * 4) = uVar13;
        goto LAB_00669189;
      }
      uVar5 = *(ushort *)(lVar7 + 2 + uVar22 * 4);
      uVar17 = (uint)(uVar5 & uVar4);
      if (((int)uVar22 - uVar17 & (uint)uVar4) < uVar18) {
        lVar7 = *param_2;
        lStack_48 = param_3[3];
        uStack_88 = *param_4;
        local_80 = param_4[1];
        uStack_78 = param_4[2];
        local_70 = param_4[3];
        if (0x7fff < uVar19) {
          uVar24 = (**(code **)(uStack_88 + 0x20))();
          goto LAB_0066905c;
        }
        uStack_68 = param_4[4];
        local_a0 = 0;
        if (uVar19 == param_2[3]) {
          (*(code *)PTR_grow_one_0079a2e8)();
          lVar20 = param_2[4];
        }
        lVar16 = uVar19 * 0x68;
        *(ulonglong *)(lVar20 + 0x60 + lVar16) = CONCAT62(uStack_3e,local_40);
        plVar2 = (longlong *)(lVar20 + 0x50 + lVar16);
        *plVar2 = local_50;
        plVar2[1] = lStack_48;
        plVar2 = (longlong *)(lVar20 + 0x40 + lVar16);
        *plVar2 = local_60;
        plVar2[1] = lStack_58;
        plVar2 = (longlong *)(lVar20 + 0x30 + lVar16);
        *plVar2 = local_70;
        plVar2[1] = uStack_68;
        plVar2 = (longlong *)(lVar20 + 0x20 + lVar16);
        *plVar2 = local_80;
        plVar2[1] = uStack_78;
        puVar3 = (undefined8 *)(lVar20 + 0x10 + lVar16);
        *puVar3 = CONCAT44(uStack_8c,local_90);
        puVar3[1] = uStack_88;
        *(undefined8 *)(lVar20 + lVar16) = local_a0;
        ((undefined8 *)(lVar20 + lVar16))[1] = CONCAT44(uStack_94,uStack_98);
        param_2[5] = uVar19 + 1;
        lVar16 = param_2[9];
        uVar6 = param_2[10];
        uVar21 = 0;
        while( true ) {
          bVar23 = uVar6 <= uVar22;
          if (bVar23) {
            uVar22 = 0;
          }
          if (bVar23 && uVar6 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar4 = *(ushort *)(lVar16 + uVar22 * 4);
          if (uVar4 == 0xffff) break;
          uVar21 = uVar21 + 1;
          uVar5 = *(ushort *)(lVar16 + 2 + uVar22 * 4);
          *(short *)(lVar16 + uVar22 * 4) = (short)uVar19;
          *(ushort *)(lVar16 + 2 + uVar22 * 4) = uVar13;
          uVar22 = uVar22 + 1;
          uVar19 = (ulonglong)uVar4;
          uVar13 = uVar5;
        }
        *(short *)(lVar16 + uVar22 * 4) = (short)uVar19;
        *(ushort *)(lVar16 + 2 + uVar22 * 4) = uVar13;
        if ((0x1ff < uVar18 && lVar7 != 2 || 0x7f < uVar21) && (*param_2 == 0)) {
          *param_2 = 1;
        }
LAB_00669189:
        *(undefined1 *)(param_1 + 8) = 2;
        return;
      }
      if (uVar5 == uVar13) {
        if (uVar19 <= uVar21) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (uVar17,&
                            PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790960
                    );
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar10 = *(longlong *)(lVar20 + 0x40 + uVar21 * 0x68);
        if ((lVar8 == 0) != (lVar10 != 0)) {
          lVar15 = uVar21 * 0x68 + lVar20;
          if (lVar10 == 0) {
            if (*(char *)(lVar15 + 0x48) == (char)lVar11) goto LAB_00668f6a;
          }
          else if ((*(longlong *)(lVar15 + 0x50) == lVar16) &&
                  (local_38 = lVar20, iVar14 = (*(code *)PTR_bcmp_00799020)(lVar16,lVar16),
                  lVar20 = local_38, iVar14 == 0)) goto LAB_00668f6a;
        }
      }
      uVar18 = uVar18 + 1;
      uVar21 = uVar22 + 1;
    } while( true );
  }
  *(undefined1 *)(param_1 + 8) = 0xff;
  local_a0._0_4_ = (**(code **)(*param_4 + 0x20))(extraout_XMM0_Da,param_4[2]);
  if (*param_3 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x20);
  lVar16 = param_3[2];
LAB_00668dfc:
                    /* WARNING: Could not recover jumptable at 0x00668e0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((undefined4)local_a0,lVar16);
  return;
LAB_00668f6a:
  insert_occupied(&local_a0,param_2,uVar21,param_4);
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_8c,local_90);
  *(longlong *)(param_1 + 6) = uStack_88;
  *param_1 = (undefined4)local_a0;
  param_1[1] = local_a0._4_4_;
  param_1[2] = uStack_98;
  param_1[3] = uStack_94;
  param_1[9] = local_80._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x21) = local_80._1_4_;
  *(undefined1 *)(param_1 + 8) = (undefined1)local_80;
  if (lVar8 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x20);
  goto LAB_00668dfc;
}


