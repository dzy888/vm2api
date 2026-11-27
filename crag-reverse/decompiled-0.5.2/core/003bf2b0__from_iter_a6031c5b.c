// 003bf2b0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String)> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String),
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>,
   craggemini_core[66f3c71560d70857]::resume::compute_submission_fingerprint::{closure#0}>>>::from_iter
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>,craggemini_core[66f3c71560d70857]::resume::compute_submission_fingerprint::{closure#0}>>>
::from_iter(ulonglong *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong local_b0;
  undefined4 *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)param_3 - (longlong)param_2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2e8ba2e8ba2e8ba3),8);
  if ((ulonglong)((longlong)param_3 - (longlong)param_2) < 0xeaaaaaaaaaaaaa71) goto LAB_003bf2fb;
  puVar2 = (ulonglong *)0x0;
  while( true ) {
    param_1 = puVar2;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003bf2fb:
    uVar4 = uVar3 >> 4;
    if (param_3 == param_2) break;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_a8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    puVar2 = (ulonglong *)&DAT_00000008;
    if (local_a8 != (undefined4 *)0x0) {
      uVar3 = 0;
      puVar5 = local_a8;
      do {
        if (*param_2 == -1) {
          local_98 = 0;
          uStack_90 = 1;
          local_88 = 0;
        }
        else {
          (*(code *)PTR_clone_00798fd0)();
        }
        <craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>::digest(&local_48,param_2);
        local_78 = (undefined4)local_98;
        uStack_74 = (undefined4)((ulonglong)local_98 >> 0x20);
        uStack_70 = (undefined4)uStack_90;
        uStack_6c = (undefined4)((ulonglong)uStack_90 >> 0x20);
        *(undefined8 *)(puVar5 + 8) = uStack_40;
        *(undefined8 *)(puVar5 + 10) = local_38;
        *(undefined8 *)(puVar5 + 4) = local_88;
        *(undefined8 *)(puVar5 + 6) = local_48;
        *puVar5 = local_78;
        puVar5[1] = uStack_74;
        puVar5[2] = uStack_70;
        puVar5[3] = uStack_6c;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 0xc;
        param_2 = param_2 + 0xb;
        local_b0 = uVar4;
      } while (uVar4 != uVar3);
LAB_003bf40d:
      param_1[2] = uVar4;
      *param_1 = local_b0;
      param_1[1] = (ulonglong)local_a8;
      return;
    }
  }
  local_b0 = 0;
  local_a8 = (undefined4 *)&DAT_00000008;
  goto LAB_003bf40d;
}


