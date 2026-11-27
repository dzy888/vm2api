// 0049ec50 <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<&str, <&str as
   core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

longlong __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar5 = param_4 * 0x40;
    lVar6 = param_4 * 0x70;
    param_1 = <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                        (param_1,param_1 + lVar5,param_1 + lVar6);
    param_2 = <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                        (param_2,param_2 + lVar5,param_2 + lVar6,param_4);
    param_3 = <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                        (param_3,lVar5 + param_3,lVar6 + param_3,param_4);
  }
  puVar2 = PTR_memcmp_00799528;
  uVar4 = *(ulonglong *)(param_1 + 8);
  lVar5 = *(longlong *)(param_2 + 8);
  iVar3 = (*(code *)PTR_memcmp_00799528)();
  uVar8 = uVar4 - lVar5;
  if (iVar3 != 0) {
    uVar8 = (longlong)iVar3;
  }
  uVar1 = *(ulonglong *)(param_3 + 8);
  uVar7 = uVar4;
  if (uVar1 <= uVar4) {
    uVar7 = uVar1;
  }
  iVar3 = (*(code *)puVar2)(puVar2,uVar7);
  uVar4 = uVar4 - uVar1;
  if (iVar3 != 0) {
    uVar4 = (longlong)iVar3;
  }
  if (-1 < (longlong)(uVar4 ^ uVar8)) {
    iVar3 = (*(code *)PTR_memcmp_00799528)();
    uVar4 = lVar5 - uVar1;
    if (iVar3 != 0) {
      uVar4 = (longlong)iVar3;
    }
    param_1 = param_2;
    if ((longlong)(uVar4 ^ uVar8) < 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}


