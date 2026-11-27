// 003b6330 from_iter

/* <alloc[12e961f32105355]::vec::Vec<(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value)> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value),
   serde_json[dc3825464c436029]::map::Iter>>::from_iter */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),serde_json[dc3825464c436029]::map::Iter>>
::from_iter(ulonglong *param_1,byte *param_2)

{
  ushort *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  ulonglong local_50;
  undefined1 (*local_48) [16];
  ulonglong local_40;
  ulonglong *local_38;
  
  auVar14 = <alloc[12e961f32105355]::collections::btree::map::Iter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
            ::next(param_2);
  if (auVar14._0_8_ != 0) {
    uVar11 = 0xffffffffffffffff;
    if (*(longlong *)(param_2 + 0x40) + 1U != 0) {
      uVar11 = *(longlong *)(param_2 + 0x40) + 1U;
    }
    uVar10 = 4;
    if (4 < uVar11) {
      uVar10 = uVar11;
    }
    if (uVar10 * 0x10 < 0x7ffffffffffffff9 && uVar11 >> 0x3c == 0) {
      local_38 = param_1;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      param_1 = (ulonglong *)&DAT_00000008;
      pauVar4 = (undefined1 (*) [16])(*(code *)PTR___rust_alloc_00799000)();
      if (pauVar4 != (undefined1 (*) [16])0x0) {
        *pauVar4 = auVar14;
        local_40 = 1;
        lVar12 = *(longlong *)(param_2 + 0x40);
        local_50 = uVar10;
        local_48 = pauVar4;
        if (lVar12 != 0) {
          bVar7 = *param_2;
          uVar11 = *(ulonglong *)(param_2 + 0x18);
          uVar5 = *(ulonglong *)(param_2 + 0x10);
          uVar10 = *(ulonglong *)(param_2 + 8);
          do {
            uVar3 = local_40;
            if ((bVar7 & 1) == 0) {
              (*(code *)PTR_unwrap_failed_00799278)();
LAB_003b66cf:
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar10 == 0) {
              if (uVar11 == 0) {
                uVar10 = uVar5;
              }
              else {
                uVar6 = uVar11;
                if ((uVar11 & 7) != 0) {
                  uVar10 = 0;
                  do {
                    uVar5 = *(ulonglong *)(uVar5 + 0x278);
                    uVar10 = uVar10 + 1;
                  } while ((uVar11 & 7) != uVar10);
                  uVar6 = uVar11 - uVar10;
                }
                uVar10 = uVar5;
                if (7 < uVar11) {
                  do {
                    uVar5 = *(ulonglong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(uVar5 + 0x278) + 0x278) + 0x278)
                                     + 0x278) + 0x278) + 0x278) + 0x278) + 0x278);
                    uVar6 = uVar6 - 8;
                    uVar10 = uVar5;
                  } while (uVar6 != 0);
                }
              }
              uVar5 = 0;
              uVar11 = 0;
              if (*(short *)(uVar10 + 0x272) == 0) goto LAB_003b6580;
LAB_003b64c1:
              uVar13 = uVar11;
              uVar6 = uVar10;
            }
            else {
              if (uVar11 < *(ushort *)(uVar10 + 0x272)) goto LAB_003b64c1;
LAB_003b6580:
              do {
                uVar6 = *(ulonglong *)(uVar10 + 0x160);
                if (uVar6 == 0) {
                  (*(code *)PTR_unwrap_failed_00799278)();
                  goto LAB_003b66cf;
                }
                uVar5 = uVar5 + 1;
                puVar1 = (ushort *)(uVar10 + 0x270);
                uVar13 = (ulonglong)*puVar1;
                uVar10 = uVar6;
              } while (*(ushort *)(uVar6 + 0x272) <= *puVar1);
            }
            uVar10 = uVar6;
            if (uVar5 == 0) {
              uVar11 = uVar13 + 1;
            }
            else {
              puVar9 = (ulonglong *)(uVar6 + uVar13 * 8 + 0x280);
              uVar11 = uVar5;
              if ((uVar5 & 7) != 0) {
                uVar11 = 0;
                do {
                  uVar10 = *puVar9;
                  puVar9 = (ulonglong *)(uVar10 + 0x278);
                  uVar11 = uVar11 + 1;
                } while ((uVar5 & 7) != uVar11);
                uVar11 = uVar5 - uVar11;
              }
              if (7 < uVar5) {
                do {
                  uVar10 = *(ulonglong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(*puVar9 + 0x278) + 0x278) + 0x278)
                                  + 0x278) + 0x278) + 0x278) + 0x278);
                  puVar9 = (ulonglong *)(uVar10 + 0x278);
                  uVar11 = uVar11 - 8;
                } while (uVar11 != 0);
              }
              uVar11 = 0;
            }
            if (local_40 == local_50) {
              lVar8 = lVar12;
              if (lVar12 == 0) {
                lVar8 = -1;
              }
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_50,local_40,lVar8,8,0x10);
              pauVar4 = local_48;
            }
            lVar12 = lVar12 + -1;
            *(ulonglong *)pauVar4[uVar3] = uVar6 + uVar13 * 0x18 + 0x168;
            *(ulonglong *)(pauVar4[uVar3] + 8) = uVar13 * 0x20 + uVar6;
            local_40 = uVar3 + 1;
            bVar7 = 1;
            uVar5 = 0;
          } while (lVar12 != 0);
        }
        local_38[2] = local_40;
        *local_38 = local_50;
        local_38[1] = (ulonglong)local_48;
        return local_38;
      }
    }
    else {
      param_1 = (ulonglong *)0x0;
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
}


