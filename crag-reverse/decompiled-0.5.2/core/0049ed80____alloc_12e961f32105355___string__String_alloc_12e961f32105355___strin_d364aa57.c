// 0049ed80 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String), <(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String) as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

longlong __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((param_4 & 0x1ffffffffffffff8) != 0) {
    param_4 = param_4 >> 3;
    lVar1 = param_4 * 0xc0;
    lVar8 = param_4 * 0x150;
    param_1 = <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                        (param_1,param_1 + lVar1,param_1 + lVar8);
    param_2 = <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                        (param_2,lVar1 + param_2,param_2 + lVar8,param_4,param_5);
    param_3 = <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                        (param_3,lVar1 + param_3,lVar8 + param_3,param_4,param_5);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar8 = *(longlong *)(param_2 + 0x10);
  iVar5 = (*(code *)PTR_memcmp_00799528)();
  uVar9 = lVar1 - lVar8;
  if (iVar5 != 0) {
    uVar9 = (longlong)iVar5;
  }
  if (uVar9 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_2 + 0x28);
    iVar5 = (*(code *)PTR_memcmp_00799528)();
    uVar9 = lVar2 - lVar3;
    if (iVar5 != 0) {
      uVar9 = (longlong)iVar5;
    }
  }
  lVar2 = *(longlong *)(param_3 + 0x10);
  iVar5 = (*(code *)PTR_memcmp_00799528)();
  uVar7 = lVar1 - lVar2;
  if (iVar5 != 0) {
    uVar7 = (longlong)iVar5;
  }
  if (uVar7 == 0) {
    uVar7 = *(ulonglong *)(param_1 + 0x28);
    uVar4 = *(ulonglong *)(param_3 + 0x28);
    uVar6 = uVar4;
    if (uVar7 < uVar4) {
      uVar6 = uVar7;
    }
    iVar5 = (*(code *)PTR_memcmp_00799528)(param_3,uVar6);
    uVar7 = uVar7 - uVar4;
    if (iVar5 != 0) {
      uVar7 = (longlong)iVar5;
    }
  }
  if (-1 < (longlong)(uVar7 ^ uVar9)) {
    iVar5 = (*(code *)PTR_memcmp_00799528)();
    uVar7 = lVar8 - lVar2;
    if (iVar5 != 0) {
      uVar7 = (longlong)iVar5;
    }
    if (uVar7 == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      lVar8 = *(longlong *)(param_3 + 0x28);
      iVar5 = (*(code *)PTR_memcmp_00799528)();
      uVar7 = lVar1 - lVar8;
      if (iVar5 != 0) {
        uVar7 = (longlong)iVar5;
      }
    }
    param_1 = param_2;
    if ((longlong)(uVar7 ^ uVar9) < 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}


