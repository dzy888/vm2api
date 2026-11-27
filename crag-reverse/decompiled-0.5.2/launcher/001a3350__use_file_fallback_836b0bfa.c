// 001a3350 use_file_fallback

/* getrandom[6c7f7f5c828d4481]::backends::linux_android_with_fallback::use_file_fallback */

int __rustcall
getrandom[6c7f7f5c828d4481]::backends::linux_android_with_fallback::use_file_fallback
          (undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  undefined1 auVar10 [12];
  
  puVar2 = PTR___errno_location_00219f18;
  puVar3 = PTR_read_0021a0d8;
  puVar4 = PTR_read_0021a0d8;
  puVar5 = PTR___errno_location_00219f18;
  if (0xfffffffd < use_file::FD) {
    auVar10 = use_file::open_or_wait();
    puVar2 = PTR___errno_location_00219f18;
    puVar3 = PTR_read_0021a0d8;
    puVar4 = PTR_read_0021a0d8;
    puVar5 = PTR___errno_location_00219f18;
    if ((auVar10._0_8_ & 1) != 0) {
      return auVar10._8_4_;
    }
  }
  while( true ) {
    while( true ) {
      PTR___errno_location_00219f18 = puVar5;
      PTR_read_0021a0d8 = puVar4;
      puVar4 = PTR_read_0021a0d8;
      puVar5 = PTR___errno_location_00219f18;
      if (param_2 == 0) {
        PTR___errno_location_00219f18 = puVar2;
        PTR_read_0021a0d8 = puVar3;
        return 0;
      }
      PTR___errno_location_00219f18 = puVar2;
      PTR_read_0021a0d8 = puVar3;
      uVar6 = (*(code *)puVar4)();
      if ((longlong)uVar6 < 1) break;
      bVar9 = param_2 < uVar6;
      param_2 = param_2 - uVar6;
      puVar2 = PTR___errno_location_00219f18;
      puVar3 = PTR_read_0021a0d8;
      if (bVar9) {
        return 0x10002;
      }
    }
    if (uVar6 != 0xffffffffffffffff) break;
    piVar7 = (int *)(*(code *)puVar5)();
    iVar1 = *piVar7;
    puVar2 = PTR___errno_location_00219f18;
    puVar3 = PTR_read_0021a0d8;
    if (iVar1 != 4) {
      iVar8 = 0x10001;
      if (0 < iVar1) {
        iVar8 = -iVar1;
      }
      return iVar8;
    }
  }
  return 0x10002;
}


