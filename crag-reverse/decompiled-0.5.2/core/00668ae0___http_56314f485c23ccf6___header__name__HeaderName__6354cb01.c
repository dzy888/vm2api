// 00668ae0 <http[56314f485c23ccf6]::header::name::HeaderName>

/* <http[56314f485c23ccf6]::header::map::HeaderMap>::try_entry2::<http[56314f485c23ccf6]::header::name::HeaderName>
    */

undefined8 * __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::try_entry2::
<http[56314f485c23ccf6]::header::name::HeaderName>
          (undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  longlong lVar12;
  char cVar13;
  ushort uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *plVar21;
  
  cVar13 = try_reserve_one(param_2);
  if (cVar13 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x32) = 0xff;
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x20))(extraout_XMM0_Da,param_3[2]);
    }
    return param_1;
  }
  uVar14 = http[56314f485c23ccf6]::header::map::hash_elem_using::
           <http[56314f485c23ccf6]::header::name::HeaderName>(param_2,param_3);
  uVar1 = *(ushort *)(param_2 + 0xb);
  uVar18 = (ulonglong)(uVar14 & uVar1);
  uVar3 = param_2[10];
  lVar4 = param_2[9];
  lVar5 = param_2[4];
  uVar6 = param_2[5];
  lVar7 = *param_3;
  lVar8 = param_3[1];
  lVar12 = param_3[1];
  lVar9 = param_3[2];
  uVar20 = 0;
  plVar21 = param_3;
  while( true ) {
    uVar19 = uVar18;
    if (uVar3 <= uVar18) {
      uVar19 = 0;
    }
    if (uVar3 <= uVar18 && uVar3 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar18 = (ulonglong)*(ushort *)(lVar4 + uVar19 * 4);
    if (uVar18 == 0xffff) break;
    uVar2 = *(ushort *)(lVar4 + 2 + uVar19 * 4);
    uVar17 = (uint)(uVar2 & uVar1);
    if (((int)uVar19 - uVar17 & (uint)uVar1) < uVar20) break;
    if (uVar2 == uVar14) {
      if (uVar6 <= uVar18) {
        (*(code *)PTR_panic_bounds_check_00799520)
                  (uVar17,&
                          PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790918
                   ,lVar7,0,plVar21);
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      lVar10 = *(longlong *)(lVar5 + 0x40 + uVar18 * 0x68);
      if ((lVar7 == 0) != (lVar10 != 0)) {
        lVar16 = uVar18 * 0x68 + lVar5;
        if (lVar10 == 0) {
          if (*(char *)(lVar16 + 0x48) == (char)lVar12) {
            *param_1 = param_2;
            param_1[1] = uVar19;
            param_1[2] = uVar18;
            *(undefined1 *)((longlong)param_1 + 0x32) = 2;
            return param_1;
          }
        }
        else if ((*(longlong *)(lVar16 + 0x50) == lVar9) &&
                (iVar15 = (*(code *)PTR_bcmp_00799020)(lVar9,lVar9), iVar15 == 0)) {
          *param_1 = param_2;
          param_1[1] = uVar19;
          param_1[2] = uVar18;
          *(undefined1 *)((longlong)param_1 + 0x32) = 2;
          (**(code **)(lVar7 + 0x20))(extraout_XMM0_Da_00,lVar9);
          return param_1;
        }
      }
    }
    uVar20 = uVar20 + 1;
    uVar18 = uVar19 + 1;
  }
  lVar4 = *param_2;
  lVar5 = param_3[2];
  lVar9 = param_3[3];
  *param_1 = param_2;
  param_1[1] = lVar7;
  param_1[2] = lVar8;
  param_1[3] = lVar5;
  param_1[4] = lVar9;
  param_1[5] = uVar19;
  *(ushort *)(param_1 + 6) = uVar14;
  *(bool *)((longlong)param_1 + 0x32) = lVar4 != 2 && 0x1ff < uVar20;
  return param_1;
}


