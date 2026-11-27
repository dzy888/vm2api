// 0049e560 <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<alloc[12e961f32105355]::string::String,
   <alloc[12e961f32105355]::string::String as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

longlong __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((param_4 & 0x1ffffffffffffff8) != 0) {
    param_4 = param_4 >> 3;
    lVar1 = param_4 * 0x60;
    lVar7 = param_4 * 0xa8;
    param_1 = <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                        (param_1,param_1 + lVar1,param_1 + lVar7);
    param_2 = <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                        (param_2,param_2 + lVar1,param_2 + lVar7,param_4,param_5);
    param_3 = <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                        (param_3,lVar1 + param_3,lVar7 + param_3,param_4,param_5);
  }
  puVar3 = PTR_memcmp_00799528;
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x10);
  iVar4 = (*(code *)PTR_memcmp_00799528)();
  uVar5 = uVar6 - lVar1;
  if (iVar4 != 0) {
    uVar5 = (longlong)iVar4;
  }
  uVar2 = *(ulonglong *)(param_3 + 0x10);
  uVar8 = uVar6;
  if (uVar2 <= uVar6) {
    uVar8 = uVar2;
  }
  iVar4 = (*(code *)puVar3)(puVar3,uVar8);
  uVar6 = uVar6 - uVar2;
  if (iVar4 != 0) {
    uVar6 = (longlong)iVar4;
  }
  if (-1 < (longlong)(uVar6 ^ uVar5)) {
    iVar4 = (*(code *)PTR_memcmp_00799528)();
    uVar6 = lVar1 - uVar2;
    if (iVar4 != 0) {
      uVar6 = (longlong)iVar4;
    }
    param_1 = param_2;
    if ((longlong)(uVar6 ^ uVar5) < 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}


