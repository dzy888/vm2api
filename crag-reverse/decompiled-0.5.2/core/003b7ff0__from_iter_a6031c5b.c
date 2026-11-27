// 003b7ff0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,
   craggemini_core[66f3c71560d70857]::resume::format_history_preamble::{closure#4}>>>::from_iter */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,craggemini_core[66f3c71560d70857]::resume::format_history_preamble::{closure#4}>>>
::from_iter(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong local_58 [3];
  longlong *local_40;
  code *local_38;
  
  uVar6 = param_3 - param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  uVar4 = SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
  if (uVar6 < 0x7ffffffffffffff9) goto LAB_003b8035;
  puVar3 = (ulonglong *)0x0;
  while( true ) {
    param_1 = puVar3;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = uVar6;
LAB_003b8035:
    uVar5 = uVar4 >> 4;
    if (param_3 == param_2) break;
    uVar4 = uVar5;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_88 = (*(code *)PTR___rust_alloc_00799000)();
    puVar3 = (ulonglong *)&DAT_00000008;
    if (local_88 != 0) {
      lVar7 = 0;
      uVar4 = 0;
      do {
        local_70 = *(longlong *)(param_2 + 8 + lVar7);
        uStack_68 = *(longlong *)(param_2 + 0x10 + lVar7) + local_70;
        local_60 = 0xc;
        uVar8 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<char>>
                ::from_iter::
                <core[c0acaeba6ab4c2e0]::iter::adapters::take::Take<core[c0acaeba6ab4c2e0]::str::iter::Chars>>
                          (local_58,&local_70);
        local_38 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                   ::fmt;
        local_40 = local_58;
        uVar8 = (*(code *)PTR_format_inner_00799048)(uVar8,&local_40);
        if (local_58[0] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
        }
        *(undefined8 *)(local_88 + 0x10 + lVar7) = local_60;
        puVar1 = (undefined4 *)(local_88 + lVar7);
        *puVar1 = (undefined4)local_70;
        puVar1[1] = local_70._4_4_;
        puVar1[2] = (undefined4)uStack_68;
        puVar1[3] = uStack_68._4_4_;
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 0x18;
        local_90 = uVar5;
      } while (uVar5 != uVar4);
LAB_003b813e:
      param_1[2] = uVar5;
      *param_1 = local_90;
      param_1[1] = local_88;
      return;
    }
  }
  local_90 = 0;
  local_88 = 8;
  goto LAB_003b813e;
}


