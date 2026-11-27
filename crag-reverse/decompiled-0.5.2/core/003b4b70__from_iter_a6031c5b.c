// 003b4b70 from_iter

/* <alloc[12e961f32105355]::vec::Vec<&str> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<serde_json[dc3825464c436029]::map::Keys,
   <alloc[12e961f32105355]::string::String>::as_str>,
   craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::{closure#3}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<&str>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<serde_json[dc3825464c436029]::map::Keys,<alloc[12e961f32105355]::string::String>::as_str>,craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::{closure#3}>>>
::from_iter(longlong *param_1,byte *param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong local_68;
  longlong local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 *local_40;
  longlong local_38;
  
  lVar5 = <alloc[12e961f32105355]::collections::btree::map::Iter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
          ::next(param_2);
  if (lVar5 != 0) {
    local_48 = param_1;
    do {
      uVar2 = *(undefined8 *)(lVar5 + 8);
      lVar5 = *(longlong *)(lVar5 + 0x10);
      lVar13 = 8;
      while ((*(longlong *)
               ((longlong)&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_223_llvm_10049508496007902178 +
               lVar13) != lVar5 || (iVar4 = (*(code *)PTR_bcmp_00799020)(), iVar4 != 0))) {
        lVar13 = lVar13 + 0x10;
        if (lVar13 == 0x458) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          local_58 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (local_58 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            if (local_60 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
                    /* WARNING: Subroutine does not return */
            _Unwind_Resume();
          }
          *local_58 = uVar2;
          local_58[1] = lVar5;
          local_60 = 4;
          local_50 = 1;
          if (*(longlong *)(param_2 + 0x40) == 0) goto LAB_003b4f02;
          bVar8 = *param_2;
          local_68 = *(ulonglong *)(param_2 + 0x18);
          uVar6 = *(ulonglong *)(param_2 + 0x10);
          uVar9 = *(ulonglong *)(param_2 + 8);
          lVar13 = 1;
          lVar5 = *(longlong *)(param_2 + 0x40);
          local_40 = local_58;
          goto LAB_003b4ca6;
        }
      }
      lVar5 = <alloc[12e961f32105355]::collections::btree::map::Iter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
              ::next(param_2,uVar2);
      param_1 = local_48;
    } while (lVar5 != 0);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
LAB_003b4ca6:
  if ((bVar8 & 1) == 0) {
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_003b4f4f:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar9 == 0) {
    if (local_68 == 0) {
      uVar9 = uVar6;
    }
    else {
      uVar7 = local_68;
      if ((local_68 & 7) != 0) {
        uVar9 = 0;
        do {
          uVar6 = *(ulonglong *)(uVar6 + 0x278);
          uVar9 = uVar9 + 1;
        } while ((local_68 & 7) != uVar9);
        uVar7 = local_68 - uVar9;
      }
      uVar9 = uVar6;
      if (7 < local_68) {
        do {
          uVar6 = *(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(uVar6 + 0x278) + 0x278) + 0x278) + 0x278)
                         + 0x278) + 0x278) + 0x278) + 0x278);
          uVar7 = uVar7 - 8;
          uVar9 = uVar6;
        } while (uVar7 != 0);
      }
    }
    uVar6 = 0;
    uVar7 = 0;
    if (*(short *)(uVar9 + 0x272) == 0) goto LAB_003b4d90;
LAB_003b4cc6:
    uVar12 = uVar9;
  }
  else {
    uVar7 = local_68;
    if (local_68 < *(ushort *)(uVar9 + 0x272)) goto LAB_003b4cc6;
LAB_003b4d90:
    do {
      uVar12 = *(ulonglong *)(uVar9 + 0x160);
      if (uVar12 == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
        goto LAB_003b4f4f;
      }
      uVar6 = uVar6 + 1;
      puVar1 = (ushort *)(uVar9 + 0x270);
      uVar7 = (ulonglong)*puVar1;
      uVar9 = uVar12;
    } while (*(ushort *)(uVar12 + 0x272) <= *puVar1);
  }
  uVar9 = uVar12;
  if (uVar6 == 0) {
    local_68 = uVar7 + 1;
  }
  else {
    puVar10 = (ulonglong *)(uVar12 + uVar7 * 8 + 0x280);
    uVar11 = uVar6;
    if ((uVar6 & 7) != 0) {
      uVar11 = 0;
      do {
        uVar9 = *puVar10;
        puVar10 = (ulonglong *)(uVar9 + 0x278);
        uVar11 = uVar11 + 1;
      } while ((uVar6 & 7) != uVar11);
      uVar11 = uVar6 - uVar11;
    }
    if (7 < uVar6) {
      do {
        uVar9 = *(ulonglong *)
                 (*(longlong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(*puVar10 + 0x278) + 0x278) + 0x278) + 0x278) +
                     0x278) + 0x278) + 0x278);
        puVar10 = (ulonglong *)(uVar9 + 0x278);
        uVar11 = uVar11 - 8;
      } while (uVar11 != 0);
    }
    local_68 = 0;
  }
  local_38 = lVar5 + -1;
  uVar2 = *(undefined8 *)(uVar12 + 0x170 + uVar7 * 0x18);
  lVar5 = *(longlong *)(uVar12 + 0x178 + uVar7 * 0x18);
  lVar14 = 8;
  do {
    if ((*(longlong *)
          ((longlong)&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_223_llvm_10049508496007902178 + lVar14)
         == lVar5) && (iVar4 = (*(code *)PTR_bcmp_00799020)(), iVar4 == 0)) goto LAB_003b4c8d;
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0x458);
  if (lVar13 == local_60) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_60,lVar13,1,8);
    local_40 = local_58;
  }
  local_40[lVar13 * 2] = uVar2;
  local_40[lVar13 * 2 + 1] = lVar5;
  lVar13 = lVar13 + 1;
  local_50 = lVar13;
LAB_003b4c8d:
  bVar8 = 1;
  uVar6 = 0;
  lVar5 = local_38;
  if (local_38 == 0) {
LAB_003b4f02:
    local_48[2] = local_50;
    *local_48 = local_60;
    local_48[1] = (longlong)local_58;
    return local_48;
  }
  goto LAB_003b4ca6;
}


