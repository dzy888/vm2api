// 003b8420 from_iter

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<std[6c98fd8553dbae28]::path::PathBuf>,
   craggemini_core[66f3c71560d70857]::tools::compile_native_prompt::{closure#3}>>>::from_iter */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<std[6c98fd8553dbae28]::path::PathBuf>,craggemini_core[66f3c71560d70857]::tools::compile_native_prompt::{closure#3}>>>
::from_iter(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined *local_60;
  undefined8 *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar6 = param_3 - param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  uVar4 = SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
  if (uVar6 < 0x7ffffffffffffff9) goto LAB_003b8464;
  puVar5 = (ulonglong *)0x0;
  while( true ) {
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = uVar6;
    param_1 = puVar5;
LAB_003b8464:
    uVar8 = uVar4 >> 4;
    if (param_3 == param_2) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar5 = (ulonglong *)&DAT_00000008;
    local_a0 = (*(code *)PTR___rust_alloc_00799000)();
    puVar3 = PTR_fmt_00799420;
    if (local_a0 != 0) {
      lVar7 = 0;
      uVar4 = 0;
      do {
        local_88 = *(undefined8 *)(param_2 + 8 + lVar7);
        local_80 = *(undefined8 *)(param_2 + 0x10 + lVar7);
        local_68 = &local_88;
        local_60 = puVar3;
        local_58 = &local_78;
        local_50 = puVar3;
        local_78 = local_88;
        local_70 = local_80;
        (*(code *)PTR_format_inner_00799048)(local_80,&local_68);
        *(undefined8 *)(local_a0 + 0x10 + lVar7) = local_38;
        puVar1 = (undefined4 *)(local_a0 + lVar7);
        *puVar1 = local_48;
        puVar1[1] = uStack_44;
        puVar1[2] = uStack_40;
        puVar1[3] = uStack_3c;
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 0x18;
        local_a8 = uVar8;
      } while (uVar8 != uVar4);
LAB_003b8546:
      param_1[2] = uVar8;
      *param_1 = local_a8;
      param_1[1] = local_a0;
      return;
    }
  }
  local_a8 = 0;
  local_a0 = 8;
  goto LAB_003b8546;
}


