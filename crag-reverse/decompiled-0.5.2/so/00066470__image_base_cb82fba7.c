// 00066470 image_base

/* WARNING: Removing unreachable block (ram,0x00066490) */
/* WARNING: Removing unreachable block (ram,0x000664a3) */
/* agy_bridge[64a9e9deac6c45ce]::hooks::image_base */

undefined1  [16] __rustcall agy_bridge[64a9e9deac6c45ce]::hooks::image_base(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  (*(code *)PTR_dl_iterate_phdr_000c3f18)();
  uVar1 = (*(code *)PTR_<&str>_000c3b30)();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = 1;
  return auVar2;
}


