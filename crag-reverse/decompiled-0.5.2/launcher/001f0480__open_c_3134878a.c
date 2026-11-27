// 001f0480 open_c

/* <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c */

void __rustcall
<std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c
          (undefined4 *param_1,undefined8 param_2,longlong param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong lVar6;
  byte bVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_get_os_functions_0021a0e8;
  bVar7 = *(byte *)(param_3 + 9);
  cVar2 = *(char *)(param_3 + 10);
  if (*(char *)(param_3 + 8) == '\0') {
    if (bVar7 == 0) {
      if (cVar2 != '\0') goto LAB_001f04f9;
      if (((*(char *)(param_3 + 0xc) != '\0') || (*(char *)(param_3 + 0xd) != '\0')) ||
         (*(char *)(param_3 + 0xb) != '\0')) goto LAB_001f061d;
      uVar8 = 0x3a;
      goto LAB_001f0629;
    }
    if (cVar2 == '\0') goto LAB_001f0570;
LAB_001f04f9:
    bVar7 = *(byte *)(param_3 + 0xd);
    if (((~*(byte *)(param_3 + 0xb) | bVar7) & 1) == 0) goto LAB_001f061d;
  }
  else {
    if (bVar7 == 0) {
      if (cVar2 != '\0') goto LAB_001f04f9;
      if (((*(char *)(param_3 + 0xb) == '\0') && (*(char *)(param_3 + 0xc) == '\0')) &&
         (bVar7 = 0, *(char *)(param_3 + 0xd) == '\0')) goto LAB_001f0570;
LAB_001f061d:
      uVar8 = 0x3d;
LAB_001f0629:
      uVar8 = (*(code *)PTR_<&str>_00219e50)(bVar7,uVar8);
      *(undefined8 *)(param_1 + 2) = uVar8;
      goto LAB_001f0638;
    }
    if (cVar2 != '\0') goto LAB_001f04f9;
  }
LAB_001f0570:
  do {
    iVar3 = (*(code *)PTR_open64_0021a840)();
    if (iVar3 != -1) {
      param_1[1] = iVar3;
      uVar4 = 0;
      goto LAB_001f063d;
    }
    piVar5 = (int *)(*(code *)PTR___errno_location_00219f18)();
    iVar3 = *piVar5;
    if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
      (*(code *)PTR_set_functions_inner_00219f28)();
    }
    lVar6 = (*(code *)puVar1)();
    cVar2 = (**(code **)(lVar6 + 0x10))();
  } while (cVar2 != '\0');
  *(ulonglong *)(param_1 + 2) = (longlong)iVar3 << 0x20 | 2;
LAB_001f0638:
  uVar4 = 1;
LAB_001f063d:
  *param_1 = uVar4;
  return;
}


