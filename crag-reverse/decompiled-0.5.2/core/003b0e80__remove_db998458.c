// 003b0e80 remove

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>::remove */

char * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>::remove
          (undefined4 param_1,char *param_2,longlong param_3,ulonglong param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong lVar11;
  undefined1 local_49;
  undefined7 uStack_48;
  
  uVar3 = *(ulonglong *)(param_3 + 0x10);
  if (param_4 < uVar3) {
    lVar4 = *(longlong *)(param_3 + 8);
    lVar11 = param_4 * 0x20;
    cVar2 = *(char *)(lVar4 + lVar11);
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar11);
    uVar7 = puVar1[1];
    uStack_48 = (undefined7)((ulonglong)*puVar1 >> 8);
    puVar1 = (undefined8 *)(lVar4 + 1 + lVar11);
    uVar8 = *puVar1;
    uVar6 = *(undefined4 *)((longlong)puVar1 + 0xc);
    uVar9 = puVar1[1];
    param_1 = (*(code *)PTR_memmove_00799258)(lVar11,(~param_4 + uVar3) * 0x20);
    *(ulonglong *)(param_3 + 0x10) = uVar3 - 1;
    if (cVar2 != -1) {
      *param_2 = cVar2;
      *(undefined8 *)(param_2 + 1) = uVar8;
      *(undefined8 *)(param_2 + 9) = uVar9;
      local_49 = (undefined1)((uint)uVar6 >> 0x18);
      *(ulonglong *)(param_2 + 0x10) = CONCAT71(uStack_48,local_49);
      *(undefined8 *)(param_2 + 0x18) = uVar7;
      return param_2;
    }
  }
  (*(code *)PTR_assert_failed_00799718)(param_1,param_5);
  pcVar5 = (code *)swi(3);
  pcVar10 = (char *)(*pcVar5)();
  return pcVar10;
}


