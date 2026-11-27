// 003b4f90 from_iter

/* <alloc[12e961f32105355]::vec::Vec<&str> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<serde_json[dc3825464c436029]::map::Keys,
   <alloc[12e961f32105355]::string::String>::as_str>,
   craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::{closure#7}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<&str>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<serde_json[dc3825464c436029]::map::Keys,<alloc[12e961f32105355]::string::String>::as_str>,craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::{closure#7}>>>
::from_iter(longlong *param_1,byte *param_2)

{
  ushort *puVar1;
  char (*pacVar2) [4];
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong local_50;
  undefined8 *local_48;
  longlong local_40;
  longlong *local_38;
  
  do {
    lVar5 = <alloc[12e961f32105355]::collections::btree::map::Iter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
            ::next(param_2);
    if (lVar5 == 0) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return param_1;
    }
    pacVar2 = *(char (**) [4])(lVar5 + 8);
    lVar5 = *(longlong *)(lVar5 + 0x10);
  } while ((lVar5 == 4) &&
          ((*pacVar2 == anon_1b4a85c95499e1b671cf4fa96a1b6d0f_230_llvm_10049508496007902178 ||
           (*pacVar2 == anon_1b4a85c95499e1b671cf4fa96a1b6d0f_188_llvm_10049508496007902178))));
  local_38 = param_1;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    if (local_50 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  *puVar6 = pacVar2;
  puVar6[1] = lVar5;
  local_50 = 4;
  local_40 = 1;
  lVar5 = *(longlong *)(param_2 + 0x40);
  local_48 = puVar6;
  if (lVar5 != 0) {
    bVar9 = *param_2;
    uVar12 = *(ulonglong *)(param_2 + 0x18);
    uVar7 = *(ulonglong *)(param_2 + 0x10);
    uVar11 = *(ulonglong *)(param_2 + 8);
    lVar10 = 1;
    do {
      if ((bVar9 & 1) == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
LAB_003b531f:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (uVar11 == 0) {
        if (uVar12 == 0) {
          uVar11 = uVar7;
        }
        else {
          uVar8 = uVar12;
          if ((uVar12 & 7) != 0) {
            uVar11 = 0;
            do {
              uVar7 = *(ulonglong *)(uVar7 + 0x278);
              uVar11 = uVar11 + 1;
            } while ((uVar12 & 7) != uVar11);
            uVar8 = uVar12 - uVar11;
          }
          uVar11 = uVar7;
          if (7 < uVar12) {
            do {
              uVar7 = *(ulonglong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(uVar7 + 0x278) + 0x278) + 0x278) +
                               0x278) + 0x278) + 0x278) + 0x278) + 0x278);
              uVar8 = uVar8 - 8;
              uVar11 = uVar7;
            } while (uVar8 != 0);
          }
        }
        uVar7 = 0;
        uVar12 = 0;
        if (*(short *)(uVar11 + 0x272) == 0) goto LAB_003b5190;
LAB_003b50cf:
        uVar13 = uVar12;
        uVar8 = uVar11;
      }
      else {
        if (uVar12 < *(ushort *)(uVar11 + 0x272)) goto LAB_003b50cf;
LAB_003b5190:
        do {
          uVar8 = *(ulonglong *)(uVar11 + 0x160);
          if (uVar8 == 0) {
            (*(code *)PTR_unwrap_failed_00799278)();
            goto LAB_003b531f;
          }
          uVar7 = uVar7 + 1;
          puVar1 = (ushort *)(uVar11 + 0x270);
          uVar13 = (ulonglong)*puVar1;
          uVar11 = uVar8;
        } while (*(ushort *)(uVar8 + 0x272) <= *puVar1);
      }
      uVar11 = uVar8;
      if (uVar7 == 0) {
        uVar12 = uVar13 + 1;
      }
      else {
        puVar14 = (ulonglong *)(uVar8 + uVar13 * 8 + 0x280);
        uVar12 = uVar7;
        if ((uVar7 & 7) != 0) {
          uVar12 = 0;
          do {
            uVar11 = *puVar14;
            puVar14 = (ulonglong *)(uVar11 + 0x278);
            uVar12 = uVar12 + 1;
          } while ((uVar7 & 7) != uVar12);
          uVar12 = uVar7 - uVar12;
        }
        if (7 < uVar7) {
          do {
            uVar11 = *(ulonglong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(*puVar14 + 0x278) + 0x278) + 0x278) +
                            0x278) + 0x278) + 0x278) + 0x278);
            puVar14 = (ulonglong *)(uVar11 + 0x278);
            uVar12 = uVar12 - 8;
          } while (uVar12 != 0);
        }
        uVar12 = 0;
      }
      lVar5 = lVar5 + -1;
      pacVar2 = *(char (**) [4])(uVar8 + 0x170 + uVar13 * 0x18);
      lVar3 = *(longlong *)(uVar8 + 0x178 + uVar13 * 0x18);
      if ((lVar3 != 4) ||
         ((*pacVar2 != anon_1b4a85c95499e1b671cf4fa96a1b6d0f_230_llvm_10049508496007902178 &&
          (*pacVar2 != anon_1b4a85c95499e1b671cf4fa96a1b6d0f_188_llvm_10049508496007902178)))) {
        if (lVar10 == local_50) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_50,lVar10,1,8);
          puVar6 = local_48;
        }
        puVar6[lVar10 * 2] = pacVar2;
        puVar6[lVar10 * 2 + 1] = lVar3;
        lVar10 = lVar10 + 1;
        local_40 = lVar10;
      }
      bVar9 = 1;
      uVar7 = 0;
    } while (lVar5 != 0);
  }
  local_38[2] = local_40;
  *local_38 = local_50;
  local_38[1] = (longlong)local_48;
  return local_38;
}


