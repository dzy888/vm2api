// 003b1da0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String)> as
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String),
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::InlineMedia>,
   craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}::{closure#9}>>>::from_iter
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::InlineMedia>,craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}::{closure#9}>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong local_b0;
  undefined4 *local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3 - param_2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),8);
  if ((ulonglong)(param_3 - param_2) < 0xbfffffffffffffd1) goto LAB_003b1dea;
  puVar4 = (ulonglong *)0x0;
  while( true ) {
    (*(code *)PTR_handle_error_00798ff0)();
    param_1 = puVar4;
LAB_003b1dea:
    uVar6 = uVar3 >> 6;
    if (param_3 == param_2) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar4 = (ulonglong *)&DAT_00000008;
    local_a8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    puVar2 = PTR_clone_00798fd0;
    if (local_a8 != (undefined4 *)0x0) {
      uVar3 = 0;
      puVar5 = local_a8;
      do {
        (*(code *)puVar2)();
        (*(code *)puVar2)();
        local_78 = (undefined4)local_90;
        uStack_74 = (undefined4)((ulonglong)local_90 >> 0x20);
        uStack_70 = (undefined4)uStack_88;
        uStack_6c = (undefined4)((ulonglong)uStack_88 >> 0x20);
        *(undefined8 *)(puVar5 + 8) = uStack_40;
        *(undefined8 *)(puVar5 + 10) = local_38;
        *(undefined8 *)(puVar5 + 4) = local_80;
        *(undefined8 *)(puVar5 + 6) = local_48;
        *puVar5 = local_78;
        puVar5[1] = uStack_74;
        puVar5[2] = uStack_70;
        puVar5[3] = uStack_6c;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 0xc;
        local_b0 = uVar6;
      } while (uVar6 != uVar3);
LAB_003b1edc:
      param_1[2] = uVar6;
      *param_1 = local_b0;
      param_1[1] = (ulonglong)local_a8;
      return;
    }
  }
  local_b0 = 0;
  local_a8 = (undefined4 *)&DAT_00000008;
  goto LAB_003b1edc;
}


