// 00669430 <http[56314f485c23ccf6]::header::name::HeaderName>

/* <http[56314f485c23ccf6]::header::map::HeaderMap>::contains_key::<http[56314f485c23ccf6]::header::name::HeaderName>
    */

undefined8 __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::contains_key::
<http[56314f485c23ccf6]::header::name::HeaderName>(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint7 uVar17;
  undefined8 uVar16;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  
  uVar3 = *(ulonglong *)(param_1 + 0x28);
  if (uVar3 != 0) {
    uVar12 = http[56314f485c23ccf6]::header::map::hash_elem_using::
             <http[56314f485c23ccf6]::header::name::HeaderName>(param_1,param_2);
    uVar1 = *(ushort *)(param_1 + 0x58);
    uVar18 = (ulonglong)(uVar12 & 0xffff & (uint)uVar1);
    uVar4 = *(ulonglong *)(param_1 + 0x50);
    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar6 = *(longlong *)(param_1 + 0x48);
    lVar7 = *param_2;
    lVar21 = param_2[1];
    lVar11 = param_2[1];
    lVar8 = param_2[2];
    uVar20 = 0;
    do {
      uVar19 = uVar18;
      if (uVar4 <= uVar18) {
        uVar19 = 0;
      }
      if (uVar4 <= uVar18 && uVar4 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar18 = (ulonglong)*(ushort *)(lVar6 + uVar19 * 4);
      if (uVar18 == 0xffff) {
LAB_006695a2:
        uVar16 = 0;
        goto joined_r0x006695b1;
      }
      uVar2 = *(ushort *)(lVar6 + 2 + uVar19 * 4);
      uVar15 = (uint)(uVar2 & uVar1);
      if (((int)uVar19 - uVar15 & (uint)uVar1) < uVar20) goto LAB_006695a2;
      if (uVar2 == (ushort)uVar12) {
        if (uVar3 <= uVar18) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (uVar15,&
                            PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790990
                     ,lVar5,(char)lVar11,lVar21);
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        lVar9 = *(longlong *)(lVar5 + 0x40 + uVar18 * 0x68);
        if ((lVar7 == 0) != (lVar9 != 0)) {
          lVar14 = uVar18 * 0x68 + lVar5;
          uVar17 = (uint7)(uint3)(uVar12 >> 8);
          if (lVar9 == 0) {
            if (*(char *)(lVar14 + 0x48) == (char)lVar11) {
              return CONCAT71(uVar17,1);
            }
          }
          else if ((*(longlong *)(lVar14 + 0x50) == lVar8) &&
                  (iVar13 = (*(code *)PTR_bcmp_00799020)(lVar8,lVar8), iVar13 == 0))
          goto code_r0x0066958c;
        }
      }
      uVar20 = uVar20 + 1;
      uVar18 = uVar19 + 1;
    } while( true );
  }
  lVar7 = *param_2;
  uVar16 = 0;
joined_r0x006695b1:
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x20))();
  }
  return uVar16;
code_r0x0066958c:
  uVar16 = CONCAT71(uVar17,1);
  goto joined_r0x006695b1;
}


