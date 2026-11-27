// 003ea0e0 <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>,craggemini_core[66f3c71560d70857]::server::submit_image::{closure#0}::{closure#4}>,serde_json[dc3825464c436029]::value::Value>

/* alloc[12e961f32105355]::vec::in_place_collect::from_iter_in_place::<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>,
   craggemini_core[66f3c71560d70857]::server::submit_image::{closure#0}::{closure#4}>,
   serde_json[dc3825464c436029]::value::Value> */

ulonglong * __rustcall
alloc[12e961f32105355]::vec::in_place_collect::from_iter_in_place::
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>,craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_::_closure_4_>,serde_json[dc3825464c436029]::value::Value>
          (ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulonglong uVar5;
  longlong extraout_RDX;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar5 = *param_2;
  uVar1 = param_2[2];
  <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>,craggemini_core[66f3c71560d70857]::server::submit_image::{closure#0}::{closure#4}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
  ::try_fold::
  <alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<serde_json[dc3825464c436029]::value::Value>,alloc[12e961f32105355]::vec::in_place_collect::write_in_place_with_drop<serde_json[dc3825464c436029]::value::Value>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<serde_json[dc3825464c436029]::value::Value>,_>>
            (param_2,uVar5,uVar5,param_2[3]);
  uVar1 = uVar1 * 0x48;
  uVar7 = extraout_RDX - uVar5;
  uVar2 = param_2[1];
  uVar6 = param_2[3];
  param_2[2] = 0;
  *param_2 = 8;
  param_2[1] = 8;
  param_2[3] = 8;
  puVar4 = PTR___rust_dealloc_00798fc8;
  if (uVar6 != uVar2) {
    uVar6 = (uVar6 - uVar2) / 0x48;
    lVar8 = uVar2 + 0x38;
    do {
      if (*(longlong *)(lVar8 + -0x38) != 0) {
        (*(code *)puVar4)();
      }
      if (*(longlong *)(lVar8 + -0x20) != 0) {
        (*(code *)puVar4)();
      }
      if ((*(longlong *)(lVar8 + -8) != -1) && (*(longlong *)(lVar8 + -8) != 0)) {
        (*(code *)puVar4)();
      }
      lVar8 = lVar8 + 0x48;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((uVar1 & 0x18) != 0) {
    if ((uVar1 & 0xffffffffffffffe0) == 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
      uVar5 = 8;
    }
    else {
      uVar5 = (*(code *)PTR___rust_realloc_007997f0)(uVar1 & 0xffffffffffffffe0);
      if (uVar5 == 0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
  }
  *param_1 = uVar1 >> 5;
  param_1[1] = uVar5;
  param_1[2] = uVar7 >> 5;
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_2);
  return param_1;
}


