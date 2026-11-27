// 00634f40 next_match_back

/* <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher as
   core[c0acaeba6ab4c2e0]::str::pattern::ReverseSearcher>::next_match_back */

void __rustcall
<core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::ReverseSearcher>
::next_match_back(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 local_68;
  longlong *plVar14;
  
  puVar5 = PTR_memrchr_0079a040;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar11 = param_2[3];
  if (uVar11 <= uVar2 && uVar3 <= uVar11) {
    lVar7 = *param_2 + uVar3;
    plVar14 = param_2 + 4;
    uVar8 = (ulonglong)*(byte *)(param_2 + 5);
    uVar1 = uVar8 - 1;
    if (uVar8 < 5) {
      local_68 = 0;
      do {
        lVar10 = uVar11 - uVar3;
        lVar9 = (*(code *)PTR_memrchr_0079a040)();
        if (lVar9 != 1) goto LAB_006350c5;
        uVar11 = lVar10 + uVar3;
        uVar13 = uVar11 - uVar1;
        if (uVar1 <= uVar11) {
          uVar12 = uVar13 + uVar8;
          if ((uVar2 >= uVar12 && !CARRY8(uVar13,uVar8)) &&
             (iVar6 = (*(code *)PTR_bcmp_00799020)
                                (uVar2 < uVar12 || CARRY8(uVar13,uVar8),uVar8,param_5,param_6,
                                 plVar14,lVar7), iVar6 == 0)) {
            param_2[3] = uVar13;
            param_1[1] = uVar13;
            param_1[2] = uVar12;
            local_68 = 1;
            goto LAB_006350d2;
          }
        }
        param_2[3] = uVar11;
        if ((uVar11 < uVar3) || (uVar2 < uVar11)) goto LAB_006350d2;
      } while( true );
    }
    local_68 = 0;
    do {
      lVar9 = uVar11 - uVar3;
      lVar7 = (*(code *)puVar5)();
      if (lVar7 != 1) goto LAB_006350c5;
      uVar11 = lVar9 + uVar3;
      if ((uVar1 <= uVar11) && ((uVar11 - uVar1) + uVar8 <= uVar2 && !CARRY8(uVar11 - uVar1,uVar8)))
      {
        (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_0078f798,4)
        ;
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_2[3] = uVar11;
    } while ((uVar3 <= uVar11) && (uVar11 <= uVar2));
    goto LAB_006350d2;
  }
  goto LAB_006350ca;
LAB_006350c5:
  param_2[3] = uVar3;
LAB_006350ca:
  local_68 = 0;
LAB_006350d2:
  *param_1 = local_68;
  return;
}


