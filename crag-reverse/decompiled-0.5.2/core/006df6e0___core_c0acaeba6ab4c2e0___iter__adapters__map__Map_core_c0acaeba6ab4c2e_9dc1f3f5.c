// 006df6e0 <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,<tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level>::new>>

/* <alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level]>
   as 
   core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level>>::from_iter::<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,
   <tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level>::new>> */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level]>as_core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level>>
::from_iter::
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,<tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level>::new>>
          (ulonglong param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  
  uVar7 = param_2 - param_1;
  uVar5 = uVar7;
  if (param_2 < param_1) {
    uVar5 = 0;
  }
  uVar9 = 0;
  if (uVar5 < 0x1f81f81f81f820) goto LAB_006df720;
  do {
    param_1 = uVar9;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = uVar5 * 0x410;
LAB_006df720:
    if (uVar5 * 0x410 == 0) {
      lVar3 = 8;
      goto LAB_006df77a;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    puVar2 = PTR_memset_00799090;
    uVar9 = 8;
  } while (lVar3 == 0);
  if (param_2 <= param_1) {
LAB_006df77a:
    uVar9 = 0;
    goto LAB_006df77d;
  }
  uVar6 = (ulonglong)((uint)uVar7 & 3);
  if (param_1 - param_2 < 0xfffffffffffffffd) {
    puVar4 = (undefined8 *)(lVar3 + 0x1038);
    uVar9 = 0;
    do {
      (*(code *)puVar2)();
      puVar4[-0x187] = param_1 + uVar9;
      puVar4[-0x186] = 0;
      (*(code *)puVar2)();
      puVar4[-0x105] = param_1 + uVar9 + 1;
      puVar4[-0x104] = 0;
      (*(code *)puVar2)();
      puVar4[-0x83] = param_1 + uVar9 + 2;
      puVar4[-0x82] = 0;
      (*(code *)puVar2)();
      puVar4[-1] = param_1 + uVar9 + 3;
      *puVar4 = 0;
      uVar9 = uVar9 + 4;
      puVar4 = puVar4 + 0x208;
    } while ((uVar7 & 0xfffffffffffffffc) != uVar9);
    if (uVar6 != 0) {
      param_1 = param_1 + uVar9;
      goto LAB_006df876;
    }
  }
  else {
    uVar9 = 0;
LAB_006df876:
    puVar4 = (undefined8 *)(uVar9 * 0x410 + lVar3 + 0x408);
    lVar8 = 0;
    do {
      (*(code *)PTR_memset_00799090)();
      puVar4[-1] = param_1;
      *puVar4 = 0;
      lVar8 = lVar8 + -1;
      puVar4 = puVar4 + 0x82;
      param_1 = param_1 + 1;
    } while (-uVar6 != lVar8);
    uVar9 = uVar9 - lVar8;
  }
  if ((uVar9 < uVar5) &&
     (lVar3 = (*(code *)PTR___rust_realloc_007997f0)(uVar9 * 0x410,8), lVar3 == 0)) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_006df77d:
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = lVar3;
  return auVar10;
}


