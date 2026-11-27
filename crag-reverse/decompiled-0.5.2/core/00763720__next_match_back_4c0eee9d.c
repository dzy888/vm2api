// 00763720 next_match_back

/* <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher as
   core[c0acaeba6ab4c2e0]::str::pattern::ReverseSearcher>::next_match_back */

void __rustcall
<core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::ReverseSearcher>
::next_match_back(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 local_40;
  
  puVar5 = PTR_memrchr_0079a040;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar10 = param_2[3];
  if (uVar10 <= uVar2 && uVar3 <= uVar10) {
    uVar13 = *param_2;
    uVar7 = (ulonglong)*(byte *)(param_2 + 5);
    uVar1 = uVar7 - 1;
    if (uVar7 < 5) {
      local_40 = 0;
      do {
        lVar9 = uVar10 - uVar3;
        lVar8 = (*(code *)PTR_memrchr_0079a040)();
        if (lVar8 != 1) goto LAB_007638a7;
        uVar10 = lVar9 + uVar3;
        uVar12 = uVar10 - uVar1;
        if (uVar1 <= uVar10) {
          uVar11 = uVar12 + uVar7;
          if ((uVar2 >= uVar11 && !CARRY8(uVar12,uVar7)) &&
             (iVar6 = (*(code *)PTR_bcmp_00799020)
                                (uVar2 < uVar11 || CARRY8(uVar12,uVar7),uVar7,param_5,param_6,uVar13
                                ), iVar6 == 0)) {
            param_2[3] = uVar12;
            param_1[1] = uVar12;
            param_1[2] = uVar11;
            local_40 = 1;
            goto LAB_007638b7;
          }
        }
        param_2[3] = uVar10;
        if ((uVar10 < uVar3) || (uVar2 < uVar10)) goto LAB_007638b7;
      } while( true );
    }
    local_40 = 0;
    do {
      lVar9 = uVar10 - uVar3;
      lVar8 = (*(code *)puVar5)();
      if (lVar8 != 1) goto LAB_007638a7;
      uVar10 = lVar9 + uVar3;
      if ((uVar1 <= uVar10) && ((uVar10 - uVar1) + uVar7 <= uVar2 && !CARRY8(uVar10 - uVar1,uVar7)))
      {
        (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00797230,4)
        ;
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_2[3] = uVar10;
    } while ((uVar3 <= uVar10) && (uVar10 <= uVar2));
    goto LAB_007638b7;
  }
  goto LAB_007638af;
LAB_007638a7:
  param_2[3] = uVar3;
LAB_007638af:
  local_40 = 0;
LAB_007638b7:
  *param_1 = local_40;
  return;
}


