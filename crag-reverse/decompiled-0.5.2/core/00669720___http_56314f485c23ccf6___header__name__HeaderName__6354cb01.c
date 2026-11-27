// 00669720 <http[56314f485c23ccf6]::header::name::HeaderName>

/* <http[56314f485c23ccf6]::header::map::HeaderMap>::get_all::<http[56314f485c23ccf6]::header::name::HeaderName>
    */

ulonglong * __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::get_all::
<http[56314f485c23ccf6]::header::name::HeaderName>
          (ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  ushort uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong unaff_RBP;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 != 0) {
    uVar11 = http[56314f485c23ccf6]::header::map::hash_elem_using::
             <http[56314f485c23ccf6]::header::name::HeaderName>(param_2,param_3);
    uVar1 = *(ushort *)(param_2 + 0x58);
    uVar16 = (ulonglong)(uVar11 & uVar1);
    uVar4 = *(ulonglong *)(param_2 + 0x50);
    lVar5 = *(longlong *)(param_2 + 0x20);
    lVar6 = *(longlong *)(param_2 + 0x48);
    lVar14 = *param_3;
    lVar10 = param_3[1];
    lVar7 = param_3[2];
    uVar19 = 0;
    do {
      uVar18 = 0;
      uVar17 = uVar16;
      if (uVar4 <= uVar16) {
        uVar17 = uVar18;
      }
      if (uVar4 <= uVar16 && uVar4 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      unaff_RBP = (ulonglong)*(ushort *)(lVar6 + uVar17 * 4);
      if (unaff_RBP == 0xffff) goto LAB_006698ce;
      uVar2 = *(ushort *)(lVar6 + 2 + uVar17 * 4);
      uVar15 = (uint)(uVar2 & uVar1);
      if (((int)uVar17 - uVar15 & (uint)uVar1) < uVar19) goto LAB_006698ce;
      if (uVar2 == uVar11) {
        if (uVar3 <= unaff_RBP) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (uVar15,&
                            PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790990
                    );
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        lVar8 = *(longlong *)(lVar5 + 0x40 + unaff_RBP * 0x68);
        if ((lVar14 == 0) != (lVar8 != 0)) {
          lVar13 = unaff_RBP * 0x68 + lVar5;
          if (lVar8 == 0) {
            if (*(char *)(lVar13 + 0x48) == (char)lVar10) {
              param_1[2] = param_2;
              *param_1 = 1;
              param_1[1] = unaff_RBP;
              return param_1;
            }
          }
          else if ((*(longlong *)(lVar13 + 0x50) == lVar7) &&
                  (iVar12 = (*(code *)PTR_bcmp_00799020)(lVar7,lVar7), iVar12 == 0))
          goto code_r0x00669899;
        }
      }
      uVar19 = uVar19 + 1;
      uVar16 = uVar17 + 1;
    } while( true );
  }
  lVar14 = *param_3;
  uVar18 = 0;
LAB_006698ce:
  param_1[2] = param_2;
  *param_1 = uVar18;
  param_1[1] = unaff_RBP;
  if (lVar14 != 0) {
    (**(code **)(lVar14 + 0x20))();
  }
  return param_1;
code_r0x00669899:
  uVar18 = 1;
  goto LAB_006698ce;
}


