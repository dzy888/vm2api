// 006b3970 <&http[56314f485c23ccf6]::header::name::HeaderName>

/* <http[56314f485c23ccf6]::header::map::HeaderMap<bytes[e9829e187354639b]::bytes::Bytes>>::get_all::<&http[56314f485c23ccf6]::header::name::HeaderName>
    */

ulonglong * __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap<bytes[e9829e187354639b]::bytes::Bytes>>::get_all::
<&http[56314f485c23ccf6]::header::name::HeaderName>
          (ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  ushort uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong unaff_R13;
  ulonglong uVar17;
  ulonglong uVar18;
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 != 0) {
    uVar10 = http[56314f485c23ccf6]::header::map::hash_elem_using::
             <http[56314f485c23ccf6]::header::name::HeaderName>(param_2,param_3);
    uVar1 = *(ushort *)(param_2 + 0x58);
    uVar17 = (ulonglong)(uVar10 & uVar1);
    uVar5 = *(ulonglong *)(param_2 + 0x50);
    lVar6 = *(longlong *)(param_2 + 0x20);
    lVar7 = *(longlong *)(param_2 + 0x48);
    uVar15 = 0;
    do {
      uVar16 = 0;
      uVar18 = uVar17;
      if (uVar5 <= uVar17) {
        uVar18 = uVar16;
      }
      if (uVar5 <= uVar17 && uVar5 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar2 = *(ushort *)(lVar7 + uVar18 * 4);
      unaff_R13 = (ulonglong)uVar2;
      if (unaff_R13 == 0xffff) goto LAB_006b3af1;
      uVar3 = *(ushort *)(lVar7 + 2 + uVar18 * 4);
      uVar14 = (uint)(uVar3 & uVar1);
      if (((int)uVar18 - uVar14 & (uint)uVar1) < uVar15) goto LAB_006b3af1;
      if (uVar3 == uVar10) {
        if (uVar4 <= unaff_R13) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (uVar14,&anon_9036e64db263aa0aa2a972d6d60b9936_1_llvm_9907365231172608471);
          pcVar9 = (code *)swi(3);
          puVar13 = (ulonglong *)(*pcVar9)();
          return puVar13;
        }
        uVar17 = (ulonglong)((uint)uVar2 * 0x60);
        lVar8 = *(longlong *)(lVar6 + 0x38 + uVar17);
        if ((lVar8 != 0) != (*param_3 == 0)) {
          lVar12 = uVar17 + lVar6;
          if (lVar8 == 0) {
            if (*(char *)(lVar12 + 0x40) == (char)param_3[1]) goto LAB_006b3ac9;
          }
          else if ((*(longlong *)(lVar12 + 0x48) == param_3[2]) &&
                  (iVar11 = (*(code *)PTR_bcmp_00799020)(), iVar11 == 0)) goto LAB_006b3ac9;
        }
      }
      uVar15 = uVar15 + 1;
      uVar17 = uVar18 + 1;
    } while( true );
  }
  uVar16 = 0;
LAB_006b3af1:
  param_1[2] = param_2;
  *param_1 = uVar16;
  param_1[1] = unaff_R13;
  return param_1;
LAB_006b3ac9:
  uVar16 = 1;
  goto LAB_006b3af1;
}


